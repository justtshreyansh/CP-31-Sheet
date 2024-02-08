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
        int ans=0;
        bool flag = true;
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                if(arr[i]==0 && i!=0){
                    flag = false;
                    break;
                }
                
            }
            else{
               while(arr[i]>=arr[i+1]){

               if(arr[i]==0){

                    break;
                }
                arr[i]/=2;
                ans++;
               }


                if(arr[i]==0 && i!=0){
                    flag = false;

                }
            }
            if(!flag){
                break;
            }
        }
        
        if(!flag || (arr[n-1]==0 && n>1)) cout<<-1<<endl;
        else cout<<ans<<endl;
       

    }
    return 0;
}