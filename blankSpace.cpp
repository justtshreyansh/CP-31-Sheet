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
        int maxi = 0;
        int count =0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count++;
                maxi = max(maxi,count);
            }
            else{
                count =0;
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}