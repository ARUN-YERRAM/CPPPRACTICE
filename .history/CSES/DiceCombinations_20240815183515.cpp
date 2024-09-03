#include<bits/stdc++.h>
using namespace std;

int Recrse(long long int n,long long int sum,int i){
    if(sum == n)return 1;

    if(sum > n || i > 6)return 0;

    return Recrse(n,sum+i,i) + Recrse(n,sum+i,i+1);

}
int main(){
    long long int n;
    cin>>n;
    // if(n == 1)cout<<n<<endl;
    else{
    long long int MOD = 1e9+7;
    long long int cnt = Recrse(n,0,1);

    cnt %= MOD;
    cout<<cnt<<endl;
    }

    return 0;
}