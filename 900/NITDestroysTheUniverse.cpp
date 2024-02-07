#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1]={0};
        int ans =0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            if(arr[i-1]==0 && arr[i]!=0 ){
                ans++;
            }
        }
        ans = min(ans,2);
        cout<<ans<<endl;
    }
    return 0;
}