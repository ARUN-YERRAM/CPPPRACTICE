#include <iostream>

using namespace std;

// A binary tree node has data,
// pointer to left child
// and a pointer to right child
struct Node {
	int data;
	Node* left;
	Node* right;
};

// Create a binary tree
// using an array
Node* createBinaryTree(int arr[], int n) {

	// Create a queue
	// to store the nodes of
	// the binary tree
	queue<Node*> q;

	// Create the root node
	Node* root = new Node(arr[0]);
	q.push(root);

	// Store the remaining nodes
	// of the binary tree
	// in the queue
	for (int i = 1; i < n; i++) {

		// Get the current node
		// from the queue
		Node* node = q.front();
		q.pop();

		// Create the left child
		// of the current node
		if (arr[i] != -1) {
			Node* leftChild = new Node(arr[i]);
			node->left = leftChild;
			q.push(leftChild);
		}

		// Create the right child
		// of the current node
		if (arr[i + 1] != -1) {
			Node* rightChild = new Node(arr[i + 1]);
			node->right = rightChild;
			q.push(rightChild);
		}

		// Move to the next node
		i++;
	}

	// Return the root node
	return root;
}

// Print the binary tree
// using an inorder traversal
void printInorder(Node* root) {
	if (root != NULL) {
		printInorder(root->left);
		cout << root->data << " ";
		printInorder(root->right);
	}
}

// Driver code
int main() {
	int arr[] = {1, 2, 3, 4, 5, -1, 6, -1, -1, 7, -1, 8};
	int n = sizeof(arr) / sizeof(arr[0]);

	// Create the binary tree
	Node* root = createBinaryTree(arr, n);

	// Print the binary tree
	cout << "Inorder traversal of the binary tree: ";
	printInorder(root);

	return 0;
}