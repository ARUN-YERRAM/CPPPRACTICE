#include<bits/stdc++.h>
using namespace std;

int Recrse(int wt[],int val[],int n,int W,int t[][]){
    if(n == 0 || w == 0)return 0;
    
    if(t[n][W] != -1)return t[n][W];

    if(wt[n-1] <= W){
        return t[n][W] =  max(val[n-1] + Recrse(wt,val,n-1,W-wt[n-1]), Recrse(wt,val,n-1,W));
    }else{
        return t[n][W] =  Recrse(wt,val,n-1,W);
    }
}
int main(){

    int n;
    cin>>n;
    // i = n-1;
    int t[n+1][W+1];
    return Recrse(wt,val,n,W,t);
    return 0;
}