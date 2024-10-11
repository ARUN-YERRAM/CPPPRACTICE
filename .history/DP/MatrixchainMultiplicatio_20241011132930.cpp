#include <iostream>
#include <climits>
using namespace std;

// Recursive function to find the minimum cost of matrix chain multiplication
int matrixChainRecursive(int arr[], int i, int j) {
    if (i == j)
        return 0; // No multiplication is needed for a single matrix

    int minCost = INT_MAX;

    // Try all possible partitions between i and j
    for (int k = i; k < j; k++) {
        // Cost of multiplying the matrices A[i..k] and A[k+1..j]
        int cost = matrixChainRecursive(arr, i, k) +
                   matrixChainRecursive(arr, k + 1, j) +
                   arr[i - 1] * arr[k] * arr[j];

        // Find the minimum cost
        if (cost < minCost)
            minCost = cost;
    }

    return minCost;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum number of multiplications is "
         << matrixChainRecursive(arr, 1, n - 1) << endl;

    return 0;
}
