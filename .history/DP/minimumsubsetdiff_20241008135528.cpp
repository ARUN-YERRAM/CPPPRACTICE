#include<bits/stdc++.h>
using namespace std;

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
int main(){

    int n =6;
    int arr[] = {1,2,3,4,5,6};

    int sum = 0;

    for(int i=0;i<n;i++){
        sum += arr[i];
    }

    int ans = INT_MAX;
    // minimize s2 - s1......

    for(int i=0;i<n;i++)
        ans = min(ans,sum - 2*arr[i]);
    
    return ans;
}