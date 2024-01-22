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
      map<int,int>mpp;
      for(int i=0;i<n;i++){
        mpp[arr[i]]++;
      }
      cout<<(mpp.size()<=2 && abs(begin(mpp)->second - rbegin(mpp)->second)<=1?"YES":"NO")<<endl;
        
      
    }
return 0;
}

