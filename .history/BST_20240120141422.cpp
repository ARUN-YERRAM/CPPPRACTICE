#include<iostream>
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


void printInorder(Node* node)
{
    if (node == NULL)
        return;
    
    printInorder(node->left);

    cout << node->data << " ";

    printInorder(node->right);
}

int main()
{
    Node* root = new Node(100);
    root->left = new Node(20);
    root->right = new Node(200);
    root->left->left = new Node(10);
    root->left->right = new Node(30);
    root->right->left = new Node(150);
    root->right->right = new Node(300);
    
    cout << "Inorder Traversal: ";
    printInorder(root);
    cout<<"\n";

    cout<<"Preorder Traversal: ";
    printPreorder(root);
    cout<<"\n";

    cout<<"PostOrder Traversal: ";
    printPostorder()
    return 0;
}