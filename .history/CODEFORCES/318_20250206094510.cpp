#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // cin>>n;
    // int n;
    long long int k;
    cin>>n>>k;

    if(n%2 == 0){
        if(k <= n/2){
            cout<<2*k-1<<endl;
        }else{
            cout<<abs((n/2 - k))*2<<endl;
        }
    }else{
        if(k <= ((n/2 + 1)){
            cout<<2*k-1<<endl;
        }else{
            cout<<(k - (n/2 + 1))*2<<endl;
        }
    }return 0;
}