#include <iostream>
#include <vector>

using namespace std;

class BinaryTree {
private:
    vector<int> tree;
    int MAX_SIZE;
public:
    BinaryTree(int size) : MAX_SIZE(size) {
        tree.resize(size, -1); // Initialize all elements to -1 (assuming -1 represents empty node)
    }

    bool insert(int value) {
        if (tree[0] == -1) {
            tree[0] = value;
            return true;
        }

        for (int i = 0; i < MAX_SIZE; ++i) {
            if (tree[i] == -1) {
                int parent_index = (i - 1) / 2;
                if (i % 2 == 1) { // left child
                    tree[i] = value;
                    return true;
                } else { // right child
                    tree[i] = value;
                    return true;
                }
            }
        }
        return false; // Tree is full
    }

    void display() {
        cout << "Binary Tree:" << endl;
        for (int i = 0; i < MAX_SIZE; ++i) {
            if (tree[i] != -1) {
                cout << tree[i] << " ";
            } else {
                cout << "- ";
            }
        }
        cout << endl;
    }
};

int main() {
    BinaryTree binaryTree(15);
    binaryTree.insert(5);
    binaryTree.insert(3);
    binaryTree.insert(7);
    binaryTree.insert(1);
    binaryTree.insert(4);
    binaryTree.insert(6);
    binaryTree.insert(9);

    binaryTree.display();

    return 0;
}
