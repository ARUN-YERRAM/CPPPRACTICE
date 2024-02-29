#include<iostream>
using namespace std;

class Node{
    int data;
    Node * left;
    Node *  right;

    Node(int val){
        data = val;
        Node*left = NULL;
        Node*right = NULL;
    }
}

int main(){

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    

    return 0;
}