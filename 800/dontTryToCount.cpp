#include<bits/stdc++.h>
using namespace std;
int main(){
   
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int count = 0;
        bool flag = false;
        while(true){
            int found = x.find(s);
            if(found!=string::npos ){
                flag = true;
                break;
            }
            else{
                if(count<=5){
                    x+=x;
                count++;
                }
                else{
                    break;
                }
                
            }

        }
    if(count>5){
        cout<<-1<<endl;

    }
    else{
        cout<<count<<endl;
    }
    }
    
    return 0;
}