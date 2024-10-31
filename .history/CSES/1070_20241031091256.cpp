#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n == 1){
        cout<<1<<endl;

    if(n <= 3)cout<<"NO"<<endl;

    int i = 1;
    while(i < n){
        cout<<i<<" ";
        i += 2;
    }
    i = 2;
    while(i < n){
        cout<<i<<" ";
        i += 2;
    }
    cout<<endl;
}