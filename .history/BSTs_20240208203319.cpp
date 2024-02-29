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

    // Private helper function for insertion
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

    // Private helper function for deletion
    Node* deleteUtil(Node* root, int val) {
        if (root == NULL) return root;

        if (val < root->data)
            root->left = deleteUtil(root->left, val);
        else if (val > root->data)
            root->right = deleteUtil(root->right, val);
        else {
            // Node with only one child or no child
            if (root->left == NULL) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == NULL) {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            // Node with two children: Get the inorder successor (smallest in the right subtree)
            Node* temp = minValueNode(root->right);

            // Copy the inorder successor's content to this node
            root->data = temp->data;

            // Delete the inorder successor
            root->right = deleteUtil(root->right, temp->data);
        }
        return root;
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != NULL)
            current = current->left;
        return current;
    }

    // Private helper functions for traversals
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

    // Private helper function for height calculation
    int heightUtil(Node* root) {
        if (root == NULL) return 0;
        int leftHeight = heightUtil(root->left);
        int rightHeight = heightUtil(root->right);
        return max(leftHeight, rightHeight) + 1;
    }

public:
    BST() {
        root = NULL;
    }

    // Function to insert a node in the BST
    void insert(int val) {
        root = insertUtil(root, val);
    }

    // Function to delete a node from the BST
    void remove(int val) {
        root = deleteUtil(root, val);
    }

    // Function to perform inorder traversal of the BST
    void inorderTraversal() {
        cout << "Inorder Traversal: ";
        inorderUtil(root);
        cout << endl;
    }

    // Function to perform preorder traversal of the BST
    void preorderTraversal() {
        cout << "Preorder Traversal: ";
        preorderUtil(root);
        cout << endl;
    }

    // Function to perform postorder traversal of the BST
    void postorderTraversal() {
        cout << "Postorder Traversal: ";
        postorderUtil(root);
        cout << endl;
    }

    // Function to perform level order traversal of the BST
    void levelOrderTraversal() {
        cout << "Levelorder Traversal: ";
        levelOrderUtil(root);
        cout << endl;
    }

    // Function to calculate the height of the BST
    int height() {
        return heightUtil(root);
    }

    // Function to search for a value in the BST
    bool search(int val) {
        Node* current = root;
        while (current != NULL) {
            if (val == current->data)
                return true;
            else if (val < current->data)
                current = current->left;
            else
                current = current->right;
        }
        return false;
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
    tree.remove(20);
    tree.remove(30);

    // Perform traversals after deletion
    tree.inorderTraversal();
    tree.levelOrderTraversal();

    return 0;
}
