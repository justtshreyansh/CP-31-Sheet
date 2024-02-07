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
       
        vector<int> ans;
        for(int i=0;i<n;i++){
            int a = abs(arr[i]-(i+1));
            ans.push_back(a);
        }
       int k=ans[0];
       for(int i=1;i<ans.size();i++){
            k = __gcd(ans[i],k);
       }
        cout<<k<<endl;
    }
    return 0;
}