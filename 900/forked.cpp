#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,k1,k2,q1,q2;
        cin>>a>>b>>k1>>k2>>q1>>q2; 
        set<pair<int,int>> king;
        pair<int,int> p;
        p.first = k1+a;
        p.second = k2+b;
        king.insert(p);

        p.first = k1+a;
        p.second = k2-b;
        king.insert(p);

        p.first = k1-a;
        p.second = k2+b;
        king.insert(p);

        p.first = k1-a;
        p.second = k2-b;
        king.insert(p);

        p.first = k1+b;
        p.second = k2+a;
        king.insert(p);

        p.first = k1+b;
        p.second = k2-a;
        king.insert(p);

        p.first = k1-b;
        p.second = k2+a;
        king.insert(p);

        p.first = k1-b;
        p.second = k2-a;
        king.insert(p);
        
        // for(auto it:king){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }

        set<pair<int,int>> queen;
        
        p.first = q1+a;
        p.second = q2+b;
        queen.insert(p);

        p.first = q1+a;
        p.second = q2-b;
        queen.insert(p);

        p.first = q1-a;
        p.second = q2+b;
        queen.insert(p);

        p.first = q1-a;
        p.second = q2-b;
        queen.insert(p);

        p.first = q1+b;
        p.second = q2+a;
        queen.insert(p);

        p.first = q1+b;
        p.second = q2-a;
        queen.insert(p);

        p.first = q1-b;
        p.second = q2+a;
        queen.insert(p);

        p.first = q1-b;
        p.second = q2-a;
        queen.insert(p);
        
        // for(auto it:queen){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        int ans =0;
       for(auto i:king){
        for(auto j:queen){
            if(i.first == j.first && i.second==j.second){
                ans++;
            }
        }
       }
       cout<<ans<<endl;
        

        
    }

    return 0;
}