#include <iostream>
using namespace std;

const int MAX = 10; 

// class SparseMatrix {
// public:
//     int row, col, value;
// };

// void createSparseMatrix(int matrix[MAX][MAX], int row, int col, SparseMatrix sparseMatrix[]) {
    // int k = 0;
    // for (int i = 0; i < row; ++i) {
        // for (int j = 0; j < col; ++j) {
            // if (matrix[i][j] != 0) {
                // sparseMatrix[k].row = i;
                // sparseMatrix[k].col = j;
                // sparseMatrix[k].value = matrix[i][j];
                // ++k;
            // }
        // }
    // }
// }
// 
// void printMatrix(int matrix[MAX][MAX], int row, int col) {
    // cout << "The matrix is:" << endl;
    // for (int i = 0; i < row; ++i) {
        // for (int j = 0; j < col; ++j) {
            // cout << matrix[i][j] << " ";
        // }
        // cout << endl;
    // }
// }
// 
// int countZeros(int matrix[MAX][MAX], int row, int col) {
    // int count = 0;
    // for (int i = 0; i < row; ++i) {
        // for (int j = 0; j < col; ++j) {
            // if (matrix[i][j] == 0) {
                // ++count;
            // }
        // }
    // }
    // return count;
// }
// 
// bool isSparseMatrix(int matrix[MAX][MAX], int row, int col) {
    // int zerosCount = countZeros(matrix, row, col);
    // return (zerosCount > (row * col) / 2);
// }
// 
// int main() {
    // int row, col;
// 
    // cout << "Enter the number of rows and columns of the matrix: ";
    // cin >> row >> col;
// 
    // int matrix[MAX][MAX];
// 
    // cout << "Enter the elements of the matrix:" << endl;
    // for (int i = 0; i < row; ++i) {
        // for (int j = 0; j < col; ++j) {
            // cin >> matrix[i][j];
        // }
    // }
// 
    // printMatrix(matrix, row, col);
// 
    // int zerosCount = countZeros(matrix, row, col);
    // cout << "The number of zeros in the matrix are " << zerosCount << endl;
// 
    // if (isSparseMatrix(matrix, row, col)) {
        // cout << "This is a sparse matrix" << endl;
    // } else {
        // cout << "This is not a sparse matrix" << endl;
    // }
// 
    // return 0;
// }
// 
// 
// 
// 












class Node{
    public:
    int val;
    Node*left ;
    Node*right;

    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

string Inorder(Node*root){
    if(root == NULL) return "";

    Inorder(root->left);

    cout<<

}

int main() {
    Node *root = new Node(10);

    cout << "Inserted key 10. BST Inorder: " << Inorder(root) << endl;

    root->left = new Node(5);
    cout << "Inserted key 5. BST Inorder: " << Inorder(root) << endl;

    root->right = new Node(15);
    cout << "Inserted key 15. BST Inorder: " << Inorder(root) << endl;

    root->left->left = new Node(3);
    cout << "Inserted key 3. BST Inorder: " << Inorder(root) << endl;

    root->left->right = new Node(7);
    cout << "Inserted key 7. BST Inorder: " << Inorder(root) << endl;

    root->right->left = new Node(12);
    cout << "Inserted key 12. BST Inorder: " << Inorder(root) << endl;

    root->right->right = new Node(18);
    cout << "Inserted key 18. BST Inorder: " << Inorder(root) << endl;

    return 0;
}
