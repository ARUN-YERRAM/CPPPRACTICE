#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Structure of a Binary Tree Node
struct Node {
    int data;
    struct Node *left, *right;
    Node(int v)
    {
        data = v;
        left = right = NULL;
    }
};

// Function to print preorder traversal
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;

    // Deal with the node
    cout << node->data << " ";

    // Recur on left subtree
    printPreorder(node->left);

    // Recur on right subtree
    printPreorder(node->right);
}

// Driver code
int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    // Function call
    cout << "Preorder traversal of binary tree is: \n";
    printPreorder(root);

    return 0;
}

// class Node{
//     public:
//     int data;
//     Node * left;
//     Node *  right;

//     Node(int val){
//         data = val;
//         Node*left = NULL;
//         Node*right = NULL;
//     }
// }

// int main(){

//     Node* root = new Node(1);

//     root->left = new Node(2);
//     root->right = new Node(3);

//     root->left->left = new Node(4);
//     root->right->right = new Node(5);
//     cout<<"Preorder Traversal of binary tree is \n";
//     preorder(root);


//     return 0;
// }

