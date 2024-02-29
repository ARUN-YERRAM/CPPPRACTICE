#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void printInorder(Node* root) {
    if (root == NULL) return;

    printInorder(root->left);

    cout << root->data << " ";

    printInorder(root->right);
}

void printPostorder(Node* root) {

    if (root == NULL) return;

    printPostorder(root->left);

    printPostorder(root->right);

    cout << root->data << " ";

}
void printPreorder(Node* root) {

    if (root == NULL) return;

    cout << root->data << " ";

    printPreorder(root->left);

    printPreorder(root->right);
}

int height(Node* node) {
    if (node == NULL)
        return 0;
    else {
        int lHeight = height(node->left);
        int rHeight = height(node->right);

    return 1 + max(lHeight,rHeight);

    }
}
void printGivel

void printLevelOrder(Node* root) {
    int h = height(root);
    for (int i = 1; i <= h; i++) {
        printGivenLevel(root, i);
    }
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    cout << "Inorder Traversal: ";
    printInorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    printPostorder(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    printPreorder(root);
    cout << endl;

    cout << "Levelorder Traversal: ";
    printLevelOrder(root);
    cout << endl;

    return 0;
}
