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
        int count =0;
        if(k>=2){
            count++;
            cout<<"YES"<<endl;
        }
        else{
            int ans[n];
            for(int i=0;i<n;i++){
                ans[i] = arr[i];
            }
            sort(ans,ans+n);
            for(int i=0;i<n;i++){
                if(ans[i]!=arr[i]){
                    count++;
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        if(count==0){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}