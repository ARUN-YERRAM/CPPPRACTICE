#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    *right;

    Node(int val){
        data = val;
        left=right=NULL;
    }
};

int main(){
    Node*root = new Node(10);
    root->left = new Node(20);
    root>right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

}