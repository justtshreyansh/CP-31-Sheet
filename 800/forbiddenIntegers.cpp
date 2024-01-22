#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        int sum =0;
        if(x>1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else{
            if(x==1 && k==1){
                cout<<"NO"<<endl;
            } 
        }
    }
    return 0;
}