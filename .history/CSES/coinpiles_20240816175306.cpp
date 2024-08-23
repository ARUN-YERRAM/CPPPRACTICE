#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t-->0){
        int a,b;
        cin>>a>>b;
        if(a == 0 && b == 0)cout<<"YES"<<endl;
        else if(a == 0 || b == 0)cout<<"NO"<<endl;
        else if((a(a+b)%3 == 0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }return 0;
}