#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    if(n == 1)cout<<1<<endl;
    else if(n<=3)cout<<"NO SOLUTION";
    else if(n == 4)cout<<
    else{
        while(i<=n){
            cout<<i<<" ";
            i += 2;
        }
        i = 2;
        while(i<=n){
            cout<<i<<" ";
            i += 2;
        }
    }
    return 0;
}