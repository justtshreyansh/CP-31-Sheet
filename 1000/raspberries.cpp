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
        vector<int> ans;
        if(k==2 || k==3 || k==5){
            for(int i=0;i<n;i++){
                int mod = arr[i]%k;
                ans.push_back((k-mod)%k);
            }
        }
        else{
            int steps_4=2,  cnt_2=0;
            for(int i=0;i<n;i++)
            {
            if(arr[i]%2==0)
                ++cnt_2;
            if(arr[i]%4==0)
            steps_4=min(steps_4,0);
            }
            if(cnt_2>=2)
            steps_4=0;
            if(n==1 and arr[0]%4==1)
            steps_4=3;
            cout<<steps_4<<endl;
            continue;
        }

        sort(ans.begin(),ans.end());
        cout<<ans[0]<<endl;
    }
    return 0;
}