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
        int right = 0;
        int count =0;
        for(int i=0;i<n;i++){
            if(s[i]=='<'){
                count++;
            }
            else{
                right = max(count,right);
                count =0;
            }
        }
        right = max(count,right);
        int left =0;
        count =0;
        for(int i=0;i<n;i++){
            if(s[i]=='>'){
                count++;
            }
            else{
                left = max(count,left);
                count =0;
            }
        }
        left = max(count,left);
        int ans = max(left,right);
        cout<<ans+1<<endl;

    }
    return 0;
}