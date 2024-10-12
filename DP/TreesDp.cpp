#include<bits/stdc++.h>
using namespace std;

// Definition of the Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Function to calculate the diameter and return the height
int diameterUtil(Node* root, int &ans) {
    if (root == nullptr) {
        return 0;
    }

    // Recursively get the height of left and right subtrees
    int l = diameterUtil(root->left, ans);
    int r = diameterUtil(root->right, ans);

    // Update the diameter. The diameter is the maximum value of (left height + right height + 1)
    ans = max(ans, l + r + 1);

    // Return the height of the tree
    return 1 + max(l, r);
}

// Function to return the diameter of the tree
int diameter(Node* root) {
    int ans = 0;  // This will store the result (diameter)
    diameterUtil(root, ans);
    return ans;
}

int main() {
    // Construct the tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Calculate the diameter
    int result = diameter(root);
    cout << "Diameter of the tree: " << result << endl;

    return 0;
}
