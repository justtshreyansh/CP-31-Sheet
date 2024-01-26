#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        long long even=0;
        long long odd =0;

        for(auto it:mpp){
            even+=(it.second%2==0);
            odd+=(it.second%2!=0);
        }
        bool flag = true;
        if(k<odd-1){
           flag = false;
            
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

    }
    return 0;
}