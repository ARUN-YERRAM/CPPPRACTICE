#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

void printInorder(Node*root){
    if(root == NULL) return;

    printInorder(root->left);

    cout<<root->data<<" ";

    printInorder(root->right);
}

void printPostorder(Node*root){
    
    if(root == NULL) return;

    printPostorder(root->left);

    printPostorder(root->right);

    cout<<root->data<<" ";

}
    void printPostorder(Node*root){

    printPostorder(root->left);

    cout<<root->data<<" ";

    printPostorder(root->right);
}


int main(){
    Node*root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    printInorder(root);

    printPostorder(root);

    printPreorder(root);

}