#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;

    while(t-->0){
        long long int a,b;
        cin>>a>>b;
        if(a == 0 && b == 0)cout<<"YES"<<endl;
        else if(a == 0 || b == 0)cout<<"NO"<<endl;
        else if(!(a<2*b || b<2*a) && (a+b)%3 == 0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }return 0;
}