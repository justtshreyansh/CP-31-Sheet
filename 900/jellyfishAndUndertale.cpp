#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans = b;
        for(int i=0;i<n;i++){
            ans+=min(arr[i],a-1);

        }
        cout<<ans<<endl;
    }
    return 0;
}