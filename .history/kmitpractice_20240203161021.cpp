#include <iostream>
using namespace std;

const int MAX = 10;  // Assuming a maximum size for the matrix

class SparseMatrix {
public:
    int row, col, value;
};

void createSparseMatrix(int matrix[MAX][MAX], int row, int col, SparseMatrix sparseMatrix[]) {
    int k = 0;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (matrix[i][j] != 0) {
                sparseMatrix[k].row = i;
                sparseMatrix[k].col = j;
                sparseMatrix[k].value = matrix[i][j];
                ++k;
            }
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int row, int col) {
    cout << "The matrix is:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int countZeros(int matrix[MAX][MAX], int row, int col) {
    int count = 0;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (matrix[i][j] == 0) {
                ++count;
            }
        }
    }
    return count;
}

bool isSparseMatrix(int matrix[MAX][MAX], int row, int col) {
    int zerosCount = countZeros(matrix, row, col);
    return (zerosCount > (row * col) / 2);
}

int main() {
    int row, col;

    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> row >> col;

    int matrix[MAX][MAX];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> matrix[i][j];
        }
    }

    printMatrix(matrix, row, col);

    int zerosCount = countZeros(matrix, row, col);
    cout << "The number of zeros in the matrix are " << zerosCount << endl;

    if (isSparseMatrix(matrix, row, col)) {
        cout << "This is a sparse matrix" << endl;
    } else {
        cout << "This is not a sparse matrix" << endl;
    }

    return 0;
}
