#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    long long int tot = 1;
    int MOD = 1e9+7;
    for(int i=1;i<=n;i++){
        tot = (tot*2)%(MOD);
    }
    cout<<tot<<endl;
    return 0;
}