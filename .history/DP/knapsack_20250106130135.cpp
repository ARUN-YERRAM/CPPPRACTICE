#include<bits/stdc++.h>
using namespace std;

int Recrse()
// Top-down Memoization (Recursive)
int Recrse(int wt[], int val[], int n, int W, vector<vector<int>>& t) {
    if (n == 0 || W == 0) return 0; // Base case: no items left or no capacity left
    
    if (t[n][W] != -1) return t[n][W]; // Return already computed value

    // If weight of the current item is less than or equal to remaining capacity
    if (wt[n-1] <= W) {
        // Include the current item or exclude it, and take the maximum
        return t[n][W] = max(val[n-1] + Recrse(wt, val, n-1, W-wt[n-1], t), 
                             Recrse(wt, val, n-1, W, t));
    } else {
        // Exclude the current item
        return t[n][W] = Recrse(wt, val, n-1, W, t);
    }
}

// Bottom-up Tabulation (Iterative)
int Tabulation(int wt[], int val[], int n, int W) {
    vector<vector<int>> t(n+1, vector<int>(W+1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= W; j++) {
            if (wt[i-1] <= j) {
                // Include the current item or exclude it
                t[i][j] = max(val[i-1] + t[i-1][j-wt[i-1]], t[i-1][j]);
            } else {
                // Exclude the current item
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][W]; // The maximum value we can achieve with n items and capacity W
}

int main() {
    int n, W;
    cout << "Enter number of items and capacity of the knapsack: ";
    cin >> n >> W;

    int wt[n], val[n];
    
    cout << "Enter weights of items: ";
    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    cout << "Enter values of items: ";
    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }

    // Memoization Table initialization
    vector<vector<int>> t(n+1, vector<int>(W+1, -1));

    // Solve using top-down (memoization) approach
    int maxProfitMemoization = Recrse(wt, val, n, W, t);
    cout << "Maximum value (Memoization): " << maxProfitMemoization << endl;

    // Solve using bottom-up (tabulation) approach
    int maxProfitTabulation = Tabulation(wt, val, n, W);
    cout << "Maximum value (Tabulation): " << maxProfitTabulation << endl;

    return 0;
}
