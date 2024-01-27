#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        long long mini = (k*(k+1))/2;
        long long total = (n*(n+1))/2;
        long long maxi = total - ((n-k)*(n-k+1))/2;
        if(x>=mini && x<=maxi) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    }
    return 0;
}