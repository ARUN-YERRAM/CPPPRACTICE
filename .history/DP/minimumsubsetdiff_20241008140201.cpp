#include<bits/stdc++.h>
using namespace std;

// Function to fill DP table for subset sum
void SubsetSumTabulation(vector<vector<bool>>& dp, vector<int>& arr, int n, int sum) {
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
}

int main() {
    int n = 6;
    vector<int> arr = {1, 2, 3, 4, 5, 6};  // Convert array to vector

    int sum = accumulate(arr.begin(), arr.end(), 0);  // Calculate the sum of the array

    // Create DP table
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

    // Variable to store the minimum difference between two subsets
    int ans = INT_MAX;

    // Fill DP table using tabulation
    SubsetSumTabulation(dp, arr, n, sum);

    // Iterate over possible sums to find minimum difference
    for (int i = 0; i <= sum / 2; i++) {
        if (dp[n][i]) {
            ans = min(ans, sum - 2 * i);
        }
    }

    // Print the result
    cout << "The minimum difference between two subsets is: " << ans << endl;

    return 0;
}
