#include<bits/stdc++.h>
using namespace std;

// Recursive Solution
int solveRecursive(int n, int k) {
    if (n == 1 || k == 0 || k == 1) {
        return k;  // Base case: 1 egg or 0/1 floor
    }

    int minTrials = INT_MAX;
    for (int i = 1; i <= k; i++) {
        int temp = max(solveRecursive(n - 1, i - 1), solveRecursive(n, k - i));
        minTrials = min(minTrials, temp);
    }
    return minTrials + 1;  // +1 for current trial
}

// Memoized Solution (Top-down DP)
int solveMemo(int n, int k, vector<vector<int>>& dp) {
    if (n == 1 || k == 0 || k == 1) {
        return k;  // Base case: 1 egg or 0/1 floor
    }

    if (dp[n][k] != -1) {
        return dp[n][k];  // Return precomputed result
    }

    int minTrials = INT_MAX;
    int low,high;
    for (int i = 1; i <= k; i++) {
        if(dp[n-1][i-1] != -1){
            low = dp[n-1][i-1];
        }else{
            low = solveMemo(n - 1, i - 1, dp);
        }

        if(dp[n][k-i] != -1){
            high = dp[n][k-i];
        }else{
            
        }
        int temp = max(solveMemo(n - 1, i - 1, dp), solveMemo(n, k - i, dp));
        minTrials = min(minTrials, temp);
    }

    return dp[n][k] = minTrials + 1;  // Store result and return
}

// Tabulation (Bottom-up DP)
int solveTabulation(int n, int k) {
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    // Base cases: If there's 1 egg, we need 'k' trials for 'k' floors.
    for (int i = 1; i <= k; i++) {
        dp[1][i] = i;
    }

    // Base cases: If there's 0 or 1 floor.
    for (int i = 1; i <= n; i++) {
        dp[i][0] = 0;  // 0 floors, 0 trials
        dp[i][1] = 1;  // 1 floor, 1 trial
    }

    // Fill the dp table
    for (int i = 2; i <= n; i++) {  // Eggs
        for (int j = 2; j <= k; j++) {  // Floors
            dp[i][j] = INT_MAX;
            for (int x = 1; x <= j; x++) {
                int temp = 1 + max(dp[i - 1][x - 1], dp[i][j - x]);
                dp[i][j] = min(dp[i][j], temp);
            }
        }
    }

    return dp[n][k];  // Return result for n eggs and k floors
}

int main() {
    int n, k, choice;
    cout << "Enter number of eggs (n): ";
    cin >> n;
    cout << "Enter number of floors (k): ";
    cin >> k;

    // cout << "Choose approach:\n";
    // cout << "1. Recursive\n";
    // cout << "2. Memoized\n";
    // cout << "3. Tabulation\n";
    // cout << "Enter your choice: ";
    // cin >> choice;

    // if (choice == 1) {
        // Recursive approach
        cout << "Result using Recursive approach: " << solveRecursive(n, k) << endl;
    // }
    // else if (choice == 2) {
        // Memoization approach
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));
        cout << "Result using Memoization approach: " << solveMemo(n, k, dp) << endl;
    // }
    // else if (choice == 3) {
        // Tabulation approach
        cout << "Result using Tabulation approach: " << solveTabulation(n, k) << endl;
    // }
    // else {
        // cout << "Invalid choice!" << endl;
    // }

    return 0;
}
