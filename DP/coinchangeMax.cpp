#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    // Memoization (Top-Down)
    int countWays(int coins[], int n, int sum, vector<vector<int>>& dp) {
        if (sum == 0) return 1; // There's 1 way to make sum 0, by selecting no coins
        if (n == 0) return 0;   // No coins left, no way to form the sum

        if (dp[n][sum] != -1) return dp[n][sum]; // Return already computed value

        // If the current coin can be included
        if (coins[n-1] <= sum) {
            // Include the coin or skip it and sum the results
            return dp[n][sum] = countWays(coins, n, sum - coins[n-1], dp) + countWays(coins, n-1, sum, dp);
        } else {
            // Skip the current coin
            return dp[n][sum] = countWays(coins, n-1, sum, dp);
        }
    }

    // Tabulation (Bottom-Up)
    int countWaysTabulation(int coins[], int n, int sum) {
        vector<vector<int>> dp(n+1, vector<int>(sum+1, 0));

        // Base case: there's 1 way to make sum 0 (by selecting no coins)
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }

        // Fill the table
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= sum; j++) {
                if (coins[i-1] <= j) {
                    // Include the coin or skip it
                    dp[i][j] = dp[i][j - coins[i-1]] + dp[i-1][j];
                } else {
                    // Exclude the coin
                    dp[i][j] = dp[i-1][j];
                }
            }
        }

        return dp[n][sum];
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

    // Memoization table initialization
    vector<vector<int>> dp(n+1, vector<int>(sum+1, -1));

    // Solve using memoization (top-down)
    int resultMemo = sol.countWays(coins, n, sum, dp);
    cout << "Number of ways (Memoization): " << resultMemo << endl;

    // Solve using tabulation (bottom-up)
    int resultTab = sol.countWaysTabulation(coins, n, sum);
    cout << "Number of ways (Tabulation): " << resultTab << endl;

    return 0;
}
