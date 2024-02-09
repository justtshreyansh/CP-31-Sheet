#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
         vector<int>prefix(n, 0);
    for(int i=0;i<n;i++)    
        {
      prefix[i] = (i > 0 ? prefix[i - 1] : 0) + arr[i];
    }
        while(q--){
           
            int l, r, k;
cin >> l >> r >> k;
l--;r--; 
int a = (l > 0 ? prefix[l - 1] % 2 : 0); 
int b = (prefix[n - 1] - prefix[r]) % 2; 
int c = (k * (r - l + 1)) % 2;


if ((a + b + c) % 2)
{
  cout << "YES\n";
}
else
{

  cout << "NO\n";
}

            
            
        }
    }
    return 0;
}