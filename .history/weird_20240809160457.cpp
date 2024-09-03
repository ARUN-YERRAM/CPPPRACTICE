#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n == 1)cout<<1<<" ";
    else {
        while(n!=1){
            if((n&1) == 1) n /= 2;
            else n = n*3+1;

            cout<<n<<" ";
        }cout<<endl;
    }
    return 0;
}