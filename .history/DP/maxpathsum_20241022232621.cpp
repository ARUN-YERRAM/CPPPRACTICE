#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(TreeNode*root,int &ans){
        if(root == nullptr)return 0;

        int l = solve(root->left,ans);
        int r = solve(root->right,ans);

        int temp = max(max(l,r) + root->val,root->val);
        int res = max(temp,l+r+root->val);
        ans = max(ans,res);

        return temp;
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;

        solve(root,ans);

        return ans;
    }
};