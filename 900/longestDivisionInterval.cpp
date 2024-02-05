#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long count =0;
        for(long long i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
            else {
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}