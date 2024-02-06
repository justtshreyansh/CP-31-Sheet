#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        // 1 2 4 5 6
        //10
        //1 3 5 12 12 17 17 20
        //2 4 6 8
        //2 3 8 10 19
        //1 5 10
        //1 3 3 4 5 7 8 10
        sort(arr,arr+n);
        int maxi = 0;
        int count =1;
        for(int i=0;i<n-1;i++){
           
            if(abs(arr[i]-arr[i+1])<=k){
                count++;
            }
            else{
                maxi = max(count,maxi);
                count =1;
            }
        }
        maxi = max(count,maxi);
        cout<<n-maxi<<endl;
    }
    return 0;
}