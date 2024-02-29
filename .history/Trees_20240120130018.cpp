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

    printInorder(node->left);

    cout << node->data << " ";

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
    cout<<"\n";

    cout<<"count is "<<cnt;

    return 0;
}




#include <bits/stdc++.h>
using namespace std;
 
// Class describing a node of tree
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int v)
    {
        this->data = v;
        this->left = this->right = NULL;
    }
};
 
// Inorder Traversal
void printInorder(Node* node)
{
    if (node == NULL)
        return;
 
    // Traverse left subtree
    printInorder(node->left);
 
    // Visit node
    cout << node->data << " ";
 
    // Traverse right subtree
    printInorder(node->right);
}
 
// Driver code
int main()
{
    // Build the tree
    Node* root = new Node(100);
    root->left = new Node(20);
    root->right = new Node(200);
    root->left->left = new Node(10);
    root->left->right = new Node(30);
    root->right->left = new Node(150);
    root->right->right = new Node(300);
 
    // Function call
    cout << "Inorder Traversal: ";
    printInorder(root);
    return 0;
}