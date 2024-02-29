#include<iostream>
#include<vector>
#include<queue>
#include<climits>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int value) : val(value), left(NULL), right(NULL) {}
};

int findSecondMinimumValue(TreeNode* root) {
    if (!root) {
        return -1;  // Invalid input or no nodes in the tree
    }

    int firstMin = root->val;
    long long secondMin = LLONG_MAX;

    queue<TreeNode*>
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        if (current->val > firstMin && current->val < secondMin) {
            secondMin = current->val;
        }

        if (current->left) {
            q.push(current->left);
            q.push(current->right);
        }
    }

    return (secondMin == LLONG_MAX) ? -1 : secondMin;
}

int main() {
    // Sample Input: {2, 2, 5, NULL, NULL, 5, 7}
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->right->left = NULL;
    root->right->right = NULL;
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);

    int secondMin = findSecondMinimumValue(root);

    if (secondMin != -1) {
        cout << "The second minimum node in the binary tree is: " << secondMin << endl;
    } else {
        cout << "No second minimum node found." << endl;
    }

    return 0;
}
