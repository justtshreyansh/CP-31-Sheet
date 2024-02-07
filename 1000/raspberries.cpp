#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100] = {1,2,4,5,6};
    int size = 5;
    int pos = 3;
    int value = 3;
    for(int i=size-1;i>=pos-1;i--){
        arr[i+1]  = arr[i];
    }
    arr[pos-1]  = value;
    size++;
    for(int i=0;i<size;i++) cout<<arr[i];
    return 0;
}