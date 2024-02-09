#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,n,z=0;
        cin>>x>>n;
        if(n%4==1){
            z=-n;
        }
        else if(n%4==2){
            z=1;
        }
        else if(n%4==3){
           z=n+1;
        }
       if(x&1) cout<<x-z<<endl;
       else cout<<x+z<<endl;

    }
    return 0;
}