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
    if (i >= j)
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
    return dp[i][j] = minCost;

    // return dp[i][j];
}


// Function to find the minimum cost of matrix chain multiplication using bottom-up DP
int matrixChainMultiplication(int arr[], int n) {
    int dp[MAX][MAX];  // DP table to store the minimum number of multiplications

    // Cost is zero when multiplying one matrix
    for (int i = 1; i < n; i++)
        dp[i][i] = 0;

    // L is the chain length (number of matrices being multiplied)
    for (int L = 2; L < n; L++) {
        for (int i = 1; i <= n - L; i++) {
            int j = i + L - 1;
            dp[i][j] = INT_MAX;

            // Try all possible places to split between i and j
            for (int k = i; k < j; k++) {
                int cost = dp[i][k] + dp[k + 1][j] + arr[i - 1] * arr[k] * arr[j];

                // Update the minimum cost
                if (cost < dp[i][j])
                    dp[i][j] = cost;
            }
        }
    }

    // dp[1][n-1] contains the minimum number of multiplications needed for matrices A1...An-1
    return dp[1][n - 1];
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
    
     // Bottom-up DP solution
    cout << "Minimum number of multiplications (Bottom-Up DP): "
         << matrixChainMultiplication(arr, n) << endl;

    return 0;
}
