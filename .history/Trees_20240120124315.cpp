#include<iostream>
#include<bits/stdc++.h>
using namespace std;

static int cnt = 0;

class Node {
    // static int cnt = 0;
    public:
        int data;
        Node *left, *right;
        // static int cnt;
        Node(int v)
        {
            data = v;
            left = right = NULL;
            cnt = 0;
        }
};

void printPostorder(Node* node)
{
    if (node == NULL)
        return;

    printPostorder(node->left);
    printPostorder(node->right);

   
    cout << node->data << " ";
}

void printPreorder(Node* node)
{   
    cnt++;
    if (node == NULL)
        return;
    
    cout << node->data << " ";

    printPreorder(node->left);
    printPreorder(node->right);
}

void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    // First recur on left child
    printInorder(node->left);
 
    // Then print the data of node
    cout << node->data << " ";
 
    // Now recur on right child
    printInorder(node->right);
}
 

// Driver code
int main()
{   
    // static int cnt = 0;
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);


    cout << "Preorder traversal of binary tree is: \n";
    printPreorder(root);
    cout<<"\n";
    cout << "Postorder traversal of binary tree is: \n";
    printPostorder(root);
    cout<<"\n";

    cout << "Inorder traversal of binary tree is \n";
    printInorder(root);

    cout<<"count is "<<cnt;

    return 0;
}





// C++ program for different tree traversals
#include <bits/stdc++.h>
using namespace std;
 
// A binary tree node has data, pointer to left child
// and a pointer to right child
struct Node {
    int data;
    struct Node *left, *right;
};
 
// Utility function to create a new tree node
Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
 
// Given a binary tree, print its nodes in inorder
void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    // First recur on left child
    printInorder(node->left);
 
    // Then print the data of node
    cout << node->data << " ";
 
    // Now recur on right child
    printInorder(node->right);
}
 
// Driver code
