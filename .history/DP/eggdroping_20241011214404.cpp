#include<bits/stdc++.h>
using namespace std;

int solve(int n,int k){
    if(n==1 || k==0 || k==1){
        return k;
    }
    int min = INT_MAX;
    for(int i=1;i<=k;i++){
        int temp = max(solve(n-1,i-1),solve(n,k-i));
        if(temp<min){
            min = temp;
        }
    }
    return min+1;
}
int main(){
    int n,k;
    cin>>n>>k;

    cout<<solve(n,k);


    return 0;
}