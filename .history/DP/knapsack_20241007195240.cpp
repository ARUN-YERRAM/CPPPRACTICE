#include<bits/stdc++.h>
using namespace std;

// Top - down Memoization
int Recrse(int wt[],int val[],int n,int W,int t[][]){
    if(n == 0 || w == 0)return 0;
    
    if(t[n][W] != -1)return t[n][W];

    if(wt[n-1] <= W){
        return t[n][W] =  max(val[n-1] + Recrse(wt,val,n-1,W-wt[n-1]), Recrse(wt,val,n-1,W));
    }else{
        return t[n][W] =  Recrse(wt,val,n-1,W);
    }
}

// Bottom Up - Tabulation
int Tabulation(int wt[],int val[],int n,int W){
    
    vector<vector<int>>t(n+1,vector<int>(W+1,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            if(wt[i-1] <= W){
                t[i][j] = max(val[i-1] + Recrse(wt,val,n-1,W-wt[i-1]),Recrse(wt,val,n-1,W))
            }else{
                t[i][j] = Recrse(wt,val,n-1,W);
            }
        }
    }return t[n+1][W+1];
}

int main(){

    int n;
    cin>>n;
    // i = n-1;
    int t[n+1][W+1];
    return Recrse(wt,val,n,W,t);
    return 0;
}