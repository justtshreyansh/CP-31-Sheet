#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        // int ans = arr[n-1]-arr[n-2];
        int ans = INT_MAX;
        for(int i=0;i<n-1;i++){
            ans = min(arr[i+1]-arr[i],ans);
        }
        if(ans==0) cout<<1<<endl;
        else if(ans<0) cout<<0<<endl;
        else{

            cout<<ans/2 +1<<endl;
            
        }
    }
    return 0;
}