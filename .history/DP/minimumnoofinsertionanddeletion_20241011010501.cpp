#include<bits/stdc++.h>
using namespace std;

int RecrseTab(string s1,string s2,int n,int m){

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }return dp[n][m];
}

int RecrseMem(string s1,string s2,int n,int m,vector<vector<int>>&dp){
    if(n == 0 || m == 0)return 0;

    if(dp[n][m] != 0)return dp[n][m];

    if(s1[n-1] == s2[m-1]){
        return dp[n][m] = 1 + RecrseMem(s1,s2,n-1,m-1,dp); 
    }
    else return dp[n][m] = max(RecrseMem(s1,s2,n-1,m,dp) , RecrseMem(s1,s2,n,m-1,dp));

}
int Recrse(string s1,string s2,int n ,int m){
    if(n == 0 || m == 0)return 0;

    // if(m == 0)return 0;

    if(s1[n-1] == s2[m-1]){
        return 1 + Recrse(s1,s2,n-1,m-1);
    }
    return max(Recrse(s1,s2,n-1,m) , Recrse(s1,s2,n,m-1));
}

int main(){

    string s1 = "abcdef";
    string s2 = "abcdgh";

    int n = s1.length();

    int m = s2.length();

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    cout<< Recrse(s1,s2,n,m);

    cout<<RecrseMem(s1,s2,n,m,dp);

    cout<<s1.size() +RecrseTab(s1,s2,n,m);

    return 0;
}