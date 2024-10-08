#include <bits/stdc++.h>
using namespace std;

// Top-down (Recursive with Memoization)
bool RecrseMemo(vector<int>& arr, int n, int sum, vector<vector<int>>& dp) {
    if (sum == 0) return true;  // If sum becomes 0, we found a subset
    if (n == 0) return false;   // If no elements left and sum is not 0, no solution exists

    // If already calculated, return the stored result
    if (dp[n][sum] != -1) return dp[n][sum];

    // If the current element is greater than the sum, ignore it
    if (arr[n - 1] > sum) {
        return dp[n][sum] = RecrseMemo(arr, n - 1, sum, dp);
    }

    // Check including or excluding the current element
    return dp[n][sum] = RecrseMemo(arr, n - 1, sum - arr[n - 1], dp) || RecrseMemo(arr, n - 1, sum, dp);
}

// Bottom-up (Tabulation)
bool SubsetSumTabulation(vector<int>& arr, int n, int sum) {
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

    // Initialize the table for base cases
    for (int i = 0; i <= n; i++) {
        dp[i][0] = true;  // If sum is 0, empty subset is always a solution
    }

    // Fill the table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (arr[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];  // Include or exclude the current element
            } else {
                dp[i][j] = dp[i - 1][j];  // Exclude the current element
            }
        }
    }

    // The result will be in dp[n][sum]
    return dp[n][sum];
}

int main() {
    int n, sum;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the sum to check for: ";
    cin >> sum;

    // Memoization table initialization with -1
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));

    // Solve using top-down approach (memoization)
    if (RecrseMemo(arr, n, sum, dp)) {
        cout << "Subset with given sum exists (Memoization).\n";
    } else {
        cout << "Subset with given sum does not exist (Memoization).\n";
    }

    // Solve using bottom-up approach (tabulation)
    if (SubsetSumTabulation(arr, n, sum)) {
        cout << "Subset with given sum exists (Tabulation).\n";
    } else {
        cout << "Subset with given sum does not exist (Tabulation).\n";
    }

    return 0;
}
