/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(TreeNode*root,int &ans){
        if(root == nullptr)return 0;

        int l = solve(root->left,ans);
        int r = solve(root->right,ans);

        int temp = max(l,r) + root->val;
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



















/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(TreeNode* root, int &ans) {
        // Base case: if the node is null, return 0
        if (root == nullptr) return 0;

        // If the node is a leaf, return its value
        if (root->left == nullptr && root->right == nullptr) {
            return root->val;
        }

        // Recursively calculate the maximum path sum for left and right subtrees
        int l = solve(root->left, ans);
        int r = solve(root->right, ans);

        // If both left and right children exist, update the answer with the path through the current node
        if (root->left && root->right) {
            ans = max(ans, l + r + root->val);
            return max(l, r) + root->val;
        }

        // If only one child exists, return the path sum through that child
        return (root->left ? l : r) + root->val;
    }

    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;  // Initialize the result as the smallest possible value

        solve(root, ans);

        return ans;
    }
};
