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
        
       
        bool flag  = false;
       

        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            maxi = max(maxi,arr[i]);
            mini = min(mini,arr[i]);
        }
        if(arr[0]!=maxi && arr[0]==mini){
            cout<<"YES"<<endl;
        }
        else{
             cout<<"NO"<<endl;
        }
       
           
       
            
        
    }
    return 0;
}