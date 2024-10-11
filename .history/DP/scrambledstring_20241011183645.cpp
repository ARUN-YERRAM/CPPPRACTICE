

#include<bits/stdc++.h>
using namespace std;


bool RecurseScramb(string s1,string s2,vector<vector<bool>>&dp){
    if(s1 == s2)return true;

    if(s1.size() <= 1)return false;
    int n = s1.size();
    bool f = false;

    if(dp[n][n])return dp[n][n];

    for(int i=1;i<n;i++){
        if(RecurseScramb(s1.substr(0,i),s2.substr(0,i),dp) && RecurseScramb(s1.substr(i,n-i),s2.substr(i,n-i),dp) || 
        RecurseScramb(s1.substr(0,i),s2.substr(n-i,i),dp) && RecurseScramb(s1.substr(i,n-i),s2.substr(0,n-i),dp)){
            // return true;
            return dp[n][n] = true;
            break;
        }
    }
    return false;
}

int main(){

    string s1,s2;
    cin>>s1>>s2;
    vector<vector<bool>>dp(s1.size()+1,vector<bool>(s2.size()+1,false));
    if(RecurseScramb(s1,s2,dp))cout<<true;

    else cout<<false;
}