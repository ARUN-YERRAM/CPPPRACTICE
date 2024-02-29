#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
    // static int cnt = 0;
    public:
        int data;
        Node *left, *right;
         static int cnt = 0;
        Node(int v)
        {
            data = v;
            left = right = NULL;
        }
};

// Function to print preorder traversal
void printPreorder(Node* node)
{
    if (node == NULL)
        return;
    
    cout << node->data << " ";
    \

    printPreorder(node->left);
    printPreorder(node->right);
}

// Driver code
int main()
{   
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

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

