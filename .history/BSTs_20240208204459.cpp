#include<iostream>
#include<queue>
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

class BST {
private:
    Node* root;

    // Helper function to insert a value into the BST
    Node* insertUtil(Node* root, int val) {
        if (root == NULL) {
            root = new Node(val);
            return root;
        }
        if (val < root->data)
            root->left = insertUtil(root->left, val);
        else if (val > root->data)
            root->right = insertUtil(root->right, val);
        return root;
    }

    void inorderUtil(Node* root) {
        if (root == NULL) return;
        inorderUtil(root->left);
        cout << root->data << " ";
        inorderUtil(root->right);
    }

    void preorderUtil(Node* root) {
        if (root == NULL) return;
        cout << root->data << " ";
        preorderUtil(root->left);
        preorderUtil(root->right);
    }


    void postorderUtil(Node* root) {
        if (root == NULL) return;
        postorderUtil(root->left);
        postorderUtil(root->right);
        cout << root->data << " ";
    }


    void levelOrderUtil(Node* root) {
        if (root == NULL) return;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* current = q.front();
            q.pop();
            cout << current->data << " ";
            if (current->left != NULL) q.push(current->left);
            if (current->right != NULL) q.push(current->right);
        }
    }

    // Helper function to calculate height of the tree
    int heightUtil(Node* root) {
        if (root == NULL) return 0;
        int leftHeight = heightUtil(root->left);
        int rightHeight = heightUtil(root->right);
        return max(leftHeight, rightHeight) + 1;
    }


    bool searchUtil(Node* root, int val) {
        if (root == NULL) return false;
        if (root->data == val) return true;
        if (val < root->data) return searchUtil(root->left, val);
        return searchUtil(root->right, val);
    }

    // Helper function to find minimum value node in the subtree rooted at "node"
    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != NULL)
            current = current->left;
        return current;
    }

public:
    BST() {
        root = NULL;
    }

    // Function to insert a value into the BST
    void insert(int val) {
        root = insertUtil(root, val);
    }

    // Function to perform inorder traversal
    void inorderTraversal() {
        cout << "Inorder Traversal: ";
        inorderUtil(root);
        cout << endl;
    }

    // Function to perform preorder traversal
    void preorderTraversal() {
        cout << "Preorder Traversal: ";
        preorderUtil(root);
        cout << endl;
    }

    // Function to perform postorder traversal
    void postorderTraversal() {
        cout << "Postorder Traversal: ";
        postorderUtil(root);
        cout << endl;
    }

    // Function to perform level-order traversal
    void levelOrderTraversal() {
        cout << "Levelorder Traversal: ";
        levelOrderUtil(root);
        cout << endl;
    }

    // Function to calculate height of the tree
    int height() {
        return heightUtil(root);
    }

    // Function to search for a value in the BST
    bool search(int val) {
        return searchUtil(root, val);
    }

    // Function to delete a node with given key
    void remove(int key) {
        root = removeUtil(root, key);
    }

    // Helper function to delete a node with given key
    Node* removeUtil(Node* root, int key) {
        if (root == NULL) return root;
        if (key < root->data)
            root->left = removeUtil(root->left, key);
        else if (key > root->data)
            root->right = removeUtil(root->right, key);
        else {
            if (root->left == NULL) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == NULL) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            Node* temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = removeUtil(root->right, temp->data);
        }
        return root;
    }
};

int main() {
    BST tree;

    // Insert elements into the BST
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    // Perform traversals
    tree.inorderTraversal();
    tree.preorderTraversal();
    tree.postorderTraversal();
    tree.levelOrderTraversal();

    // Calculate height
    cout << "Height of the BST: " << tree.height() << endl;

    // Search for elements
    int searchKey = 60;
    if (tree.search(searchKey))
        cout << searchKey << " is present in the BST." << endl;
    else
        cout << searchKey << " is not present in the BST." << endl;

    // Delete elements
    // tree.remove(20);
    // tree.remove(30);

    // Perform traversals after deletion
    tree.inorderTraversal();

    return 0;
}
