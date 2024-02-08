#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n&1 || n<=3){
            cout<<-1<<endl;
        }
        else{
            if(n%6==0){
                cout<<n/6<<" ";
            }
            else if(n%6==2){
                cout<<(n-8)/6+2<<" ";
            }
            else {
                cout<<(n-4)/6+1<<" ";
            }
            if(n%4==0){
                cout<<n/4<<endl;
            }
            else{
                cout<<(n-6)/4+1<<endl;
            }
        }
    }
    return 0;
}