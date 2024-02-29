// #include <iostream>
// #include <vector>

// using namespace std;

// class BinaryTree {
// private:
//     vector<int> tree;
//     int MAX_SIZE;
// public:
//     BinaryTree(int size) : MAX_SIZE(size) {
//         tree.resize(size, -1); 
//     }

//     bool insert(int value) {
//         if (tree[0] == -1) {
//             tree[0] = value;
//             return true;
//         }

//         for (int i = 0; i < MAX_SIZE; ++i) {
//             if (tree[i] == -1) {
//                 int parent_index = (i - 1) / 2;
//                 if (i % 2 == 1) { 
//                     tree[i] = value;
//                     return true;
//                 } else { 
//                     tree[i] = value;
//                     return true;
//                 }
//             }
//         }
//         return false; 
//     }

//     void display() {
//         cout << "Binary Tree:" << endl;
//         for (int i = 0; i < MAX_SIZE; ++i) {
//             if (tree[i] != -1) {
//                 cout << tree[i] << " ";
//             } else {
//                 cout << "- ";
//             }
//         }
//         cout << endl;
//     }
// };

// int main() {
//     BinaryTree binaryTree(15);
//     binaryTree.insert(5);
//     binaryTree.insert(3);
//     binaryTree.insert(7);
//     binaryTree.insert(1);
//     binaryTree.insert(4);
//     binaryTree.insert(6);
//     binaryTree.insert(9);

//     binaryTree.display();

//     return 0;
// }







#include <iostream>

using namespace std;

// Define the structure for each node in the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node

Node* createNode(int data){
    Node* newNode = new Node();

    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;

    return newNode;
}

// Function to insert a new node in the binary tree
Node* insert(Node*root, int data){
    if(root == NULL){
        root = createNode(data);
    }

    else if(root->data <= data){
        root->right = insert(root->right, data);
    } else{
        root->left = insert(root->left, data);
    }
    return root;
}

// Function to search for a node in the binary tree
bool search(Node*root,int data){
    if(root==NULL) return false;

    if(root->data == data){
        return true;
    } else if(root->data < data) {
        return search(root->right, data);
    } else{
        return search(root->left, data);
    }
    return false;
}

void displayInorder(Node*root){
    if(root==NULL) return ;

    
}
int main() {
    Node* root = nullptr;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);

    displayInorder(root);

    cout << "Searching for 10: " << search(root, 10) << endl;
    cout << "Searching for 20: " << search(root, 20) << endl;

    return 0;
}
