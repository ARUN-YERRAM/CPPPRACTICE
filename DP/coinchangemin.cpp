#include<bits/stdc++.h>
using namespace std;
#define s 10001

class Solution {
    public:

    // Memoization (Top-Down)
    int solve(int coins[], int n, int sum, int t[][s]) {
        if (sum == 0) return 0;  // No coins needed if sum is 0
        if (n == 0) return INT_MAX - 1;  // No coins available, impossible to form sum

        if (t[n][sum] != -1) return t[n][sum];  // Use memoized result if available

        // If current coin can be included
        if (coins[n-1] <= sum) {
            // Include the coin and reduce the remaining sum, or skip the coin
            return t[n][sum] = min(1 + solve(coins, n, sum - coins[n-1], t), solve(coins, n-1, sum, t));
        } else {
            // Skip the current coin
            return t[n][sum] = solve(coins, n-1, sum, t);
        }
    }

    // Tabulation (Bottom-Up)
    int minCoins(int coins[], int n, int sum) {
        int t[n+1][sum+1];

        // Initialize the table
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {
                if (j == 0) {
                    t[i][j] = 0;  // Zero coins needed for sum 0
                } else if (i == 0) {
                    t[i][j] = INT_MAX - 1;  // Impossible to make sum without any coins
                }
            }
        }

        // Fill the table based on the coin inclusion/exclusion logic
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= sum; j++) {
                if (coins[i-1] <= j) {
                    // Include the coin or skip it
                    t[i][j] = min(1 + t[i][j - coins[i-1]], t[i-1][j]);
                } else {
                    // Exclude the coin
                    t[i][j] = t[i-1][j];
                }
            }
        }

        // If the value remains INT_MAX-1, it means it's impossible to form the sum
        return (t[n][sum] == INT_MAX - 1) ? -1 : t[n][sum];
    }
};

int main() {
    Solution sol;
    int n, sum;
    
    cout << "Enter the number of coin denominations: ";
    cin >> n;
    
    int coins[n];
    cout << "Enter the coin denominations: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    cout << "Enter the sum to be formed: ";
    cin >> sum;

    // Memoization Table initialization
    int t[n+1][s];
    memset(t, -1, sizeof(t));  // Fill the table with -1 for memoization

    // Solve using memoization (top-down)
    int resultMemo = sol.solve(coins, n, sum, t);
    cout << "Minimum coins needed (Memoization): " << (resultMemo == INT_MAX - 1 ? -1 : resultMemo) << endl;

    // Solve using tabulation (bottom-up)
    int resultTab = sol.minCoins(coins, n, sum);
    cout << "Minimum coins needed (Tabulation): " << resultTab << endl;

    return 0;
}
