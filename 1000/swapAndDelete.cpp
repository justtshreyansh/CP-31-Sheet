#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int arr[2] = {0,0};
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') arr[0]++;
            else arr[1]++;
        }
        int ans =0;

        for(int i=0;i<s.size();i++){
            if(arr[!(s[i]-'0')]>0){
                arr[!(s[i]-'0')]--;
            }
            else{
                ans = s.size()-i;
                break;
            }
        }
        cout<<ans<<endl;


    }
    return 0;
}