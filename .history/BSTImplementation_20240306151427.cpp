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
    if(val<root->val){
        root->left = insert(root->left,val);
    } else{
        root->right = insert(root->right,val);
    } return root;
}

void inOrder(Node*root){
    if(!root)
}
int main() {
    int arr[8] = {1,2,4,5,6,7,8,9};
    Node*root = NULL;
    for(int i=0;i<8;i++)
        root = insert(root,arr[i]);

    InOrder(root);
}