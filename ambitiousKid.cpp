#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //check for zero
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cout<<0<<endl;
            return 0;
        }
    }
    int ans =INT_MAX;
    for(int i=0;i<n;i++){
        ans = abs(min(ans,abs(0-arr[i])));
    }
    cout<<ans<<endl;
    
    return 0;
}