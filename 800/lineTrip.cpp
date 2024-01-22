#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        //1 2 5
        int maxi = arr[0]-0;
        for(int i=0;i<n-1;i++){
            maxi = max(maxi,arr[i+1]-arr[i]);
        }
        maxi = max(maxi,2*(x-arr[n-1]));
        cout<<maxi<<endl;
    }
    return 0;
}