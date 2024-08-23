#include<bits/stdc++.h>
using namespace std;

int Recrse(long long int n,long long int sum,int i){
    if(sum == n)return 1;

    if(sum > n)return 0;

    return Recrse(n,sum+i,i) + Recrse(n,sum+i,i+1);

}
int main(){
    long long int n;
    cin>>n;
    long long int MOD = 1e9+7;
    long long int cnt = Recrse(n,0,1);

    cnt %= MOD;
    cout<<cnt<<endl;

    return 0;
}