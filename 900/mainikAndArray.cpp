#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
           
            maxi = max(maxi,arr[i]-arr[0]);
            maxi = max(maxi,arr[n-1]-arr[i]);
            maxi = max(maxi,arr[i]-arr[(i+1)%n]);

        }
        cout<<maxi<<endl;
    }
    return 0;
}