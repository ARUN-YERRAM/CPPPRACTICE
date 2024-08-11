#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    long long int tot = 0;
    
    for(int i=1;i<=n;i++){
        tot *= 2;
    }
    cout<<tot<<endl;
    return 0;
}