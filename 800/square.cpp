#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        set<int> x;
        set<int> y;
        for(int i=0;i<4;i++){
            int first,second;
            cin>>first>>second;
            x.insert(first);
            y.insert(second);
            
        }
        int ans =0;
        for(auto it:x){
            ans = (it-ans);
        }
        int ans2= 0;
        for(auto it:y){
            ans2 = (it-ans2);
        }
        cout<<abs(ans*ans2)<<endl;

        
    }
    return 0;
}