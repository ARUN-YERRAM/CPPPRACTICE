#include<bits/stdc++.h>
using namespace std;

void solve(Node*root,vector<int>&ans){
    // Node*root = new Node(1);
    int l = solve(root->left,ans);
    int r = solve(root->right,ans);
}
int main(){
    Node*root = new Node(1);
    // vector<int>ans;
    int ans = INT_MIN;
    solve(root,ans);
    return 0;
}