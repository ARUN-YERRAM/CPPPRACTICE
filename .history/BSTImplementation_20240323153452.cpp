#include<bits./stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node*left,*right;

    Node(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

Node*insert(Node*root,int val){
    if(!root){
        Node*temp = new Node(val);
        return temp;
    }
    if(val<root->val)
        root->left = insert(root->left,val);
    else
        root->right = insert(root->right,val);
    return root;
}

void InOrder(Node*root){
    if(!root) return;

    InOrder(root->left);
    cout<<root->val<<" ";
    InOrder(root->right);
}

bool Search(Node*root,int target){
    if(!root) return 0;

    if(root->val == target) return 1;

    if(target < root->val)
        return Search(root->left,target);
    else
        return Search(root->right,target);
    
}
int main() {
    int arr[8] = {1,2,4,5,6,7,8,9};
    Node*root = NULL;
    for(int i=0;i<8;i++)
        root = insert(root,arr[i]);

    InOrder(root);
    cout<<endl;
    cout<< Search(root,3);
}








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

class Solution {
public:
    vector<TreeNode*>ans;
    Node*TreeBuild(int start, int end){
        // if(!temp){
        //     Node*newroot = new Node();
        //     return newroot;
        // }
        if(start > end) return NULL;

        int mid = (start + end)/2;
        TreeNode*temp = ans[mid];
        temp ->left = TreeBuild(start,mid-1);
        temp -> right = TreeBuild(mid+1,end);

        return temp;

    }
    // vector<int>ans;
    void Inorder(Node*root){
        if(!root) return;

        Inorder(root->left);
        ans.push_back(root);
        Inorder(root->right);
    }
    Node* balanceBST(Node* root) {
        // vector<int>ans;
        if(!root) return NULL;

        Inorder(root);
        int len = ans.size();
        root = TreeBuild(0,len-1);
        return root;

        // for(int i=0;i<ans.size();i++){
        //     return TreeBuild(root->left,ans[i]);
        //     return TreeBuild(root->right,ans[i]);
        // }

    }
};