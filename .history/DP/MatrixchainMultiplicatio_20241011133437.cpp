#include <iostream>
#include <climits>
#include <cstring>
using namespace std;

const int MAX = 100;  // Set a constant limit for the maximum matrix chain length

// Recursive function to find the minimum cost of matrix chain multiplication
int matrixChainRecursive(int arr[], int i, int j) {
    if (i == j)
        return 0;  // No multiplication needed for a single matrix

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

// Function to find the minimum cost using memoization
int matrixChainMemoized(int arr[], int i, int j, int dp[MAX][MAX]) {
    if (i == j)
        return 0;  // No multiplication needed for a single matrix

    // If this subproblem has already been solved, return the result
    if (dp[i][j] != -1)
        return dp[i][j];

    int minCost = INT_MAX;

    // Try all possible partitions between i and j
    for (int k = i; k < j; k++) {
        int cost = matrixChainMemoized(arr, i, k, dp) +
                   matrixChainMemoized(arr, k + 1, j, dp) +
                   arr[i - 1] * arr[k] * arr[j];

        if (cost < minCost)
            minCost = cost;
    }

    // Store the result in the dp table
    dp[i][j] = minCost;

    return dp[i][j];
}

int main() {
    int arr[] = {1, 2, 3, 4};  // Example matrix dimensions: A1(1x2), A2(2x3), A3(3x4)
    int n = sizeof(arr) / sizeof(arr[0]);

    // Recursive solution
    cout << "Minimum number of multiplications (Recursive): "
         << matrixChainRecursive(arr, 1, n - 1) << endl;

    // Initialize the memoization table with -1
    int dp[MAX][MAX];
    memset(dp, -1, sizeof(dp));

    // Memoized solution
    cout << "Minimum number of multiplications (Memoization): "
         << matrixChainMemoized(arr, 1, n - 1, dp) << endl;

    return 0;
}
