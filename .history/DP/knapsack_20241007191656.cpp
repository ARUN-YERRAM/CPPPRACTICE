#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    i = n-1;
    if(n == 0 || w == 0)return 0;

    if(wt[i] <= W){
        return max(val[i] + Recrse(wt,val,n-1,W-wt[i]), Recrse(wt,val,n-1,W));
    }else{
        return Recrse(wt,val,n-1,W);
    }
    return 0;
}