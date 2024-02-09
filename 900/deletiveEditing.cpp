#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int alphabet[26]={0};
        for(int i=0;i<26;i++){
            alphabet[i] = -1;
        }
        int n = s.size();
        int m = t.size();
        //this for storing the last index of each element

        for(int i=0;i<n;i++){
            int ans = s[i]-'A';
            alphabet[ans]  =  i;
        }
        char a = 'A';
       
        int index =n-1;
        bool flag = false;
        //contest code  
        int count =0;
        int j = t.size()-1;
        for(int i = index;i>=0;i--){
                if(t[j]==s[i]){
                    int ans = t[j]-'A';
                    if(i!=alphabet[ans]){
                        flag = true;
                        break;
                    }
                    else{
                        index = i-1;
                        j--;
                    }
                    count++;
                }
        }
        
       
        if(flag || count!=t.size()) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}