#include<bits/stdc++.h>
using namespace std;

int Recrse(int n,long long int sum,int i){
    if(sum == n)return 1;

    if(sum > n)return 0;

    return Recrse()


}
int main(){
    int n;
    cin>>n;
    int MOD = 1e9+7;
    long long int cnt = Recrse(n,0,1);

    cnt %= MOD;

    return 0;
}