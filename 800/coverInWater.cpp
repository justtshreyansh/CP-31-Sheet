#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int Totalcount=0;
        int consecutiveCount =0;
        bool flag = false;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                consecutiveCount++;
                Totalcount++;
                if(consecutiveCount>=3){
                    flag = true;
                }
            }
            else{
                consecutiveCount= 0;
            }
        }
        if(flag) cout<<2<<endl;
        else{
            cout<<Totalcount<<endl;
        }
        
    }
    return 0;
}