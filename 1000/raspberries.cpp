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
        int mini = arr[0];
        for(int i=0;i<n;i++){
            mini = min(mini,arr[i]);
        }
        long long prod =1;
        for(int i=0;i<n;i++){
            prod*=arr[i];
        }
        prod= prod/mini;
        int count =0;
        while(true){
            if((prod*mini)%k==0){
                cout<<count<<endl;
                break;

            } 
            else{
                mini++;
                count++;
            }
        }
    }
    return 0;
}