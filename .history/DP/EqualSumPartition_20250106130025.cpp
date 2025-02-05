#include<bits/stdc++.h>
using namespace std;

// Recursive solution
bool Recrse(int arr[], int tot, int i) {
    if(tot == 0) return true;   // If the remaining total is 0, we found a valid subset
    if(i == 0) return false;    // If no elements left and total is not 0, it's not possible

    if(arr[i-1] <= tot) 
        return Recrse(arr, tot-arr[i-1], i-1) || Recrse(arr, tot, i-1); // Include or exclude
    else 
        return Recrse(arr, tot, i-1); // Exclude the current element if it's greater than total
}

bool RecseMem(int arr[], int tot, int i, vector<vector<bool>>& dp) {
    if(tot == 0) return true;   // If the remaining total is 0
    
}
// DP tabulation solution
bool RecrseDP(int arr[], int tot, int n) {
    vector<vector<bool>> dp(n+1, vector<bool>(tot+1, false));

    // Initialize the first column: sum 0 is possible with any number of elements
    for(int i = 0; i <= n; i++) dp[i][0] = true;

    // Fill the DP table
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= tot; j++) {
            if(arr[i-1] <= j) {
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];  // Include or exclude the element
            } else {
                dp[i][j] = dp[i-1][j]; // Exclude the current element
            }
        }
    }

    // Return whether it's possible to form sum 'tot' with 'n' elements
    return dp[n][tot];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int tot = 0;

    // Calculate total sum
    for(int i = 0; i < n; i++) tot += arr[i];

    // If total sum is odd, partitioning into two equal subsets is impossible
    if(tot & 1) {
        cout << "No, cannot partition into two equal subsets." << endl;
    } else {
        // Recursive approach
        if(Recrse(arr, tot / 2, n)) {
            cout << "Yes (Recursive), can partition into two equal subsets." << endl;
        } else {
            cout << "No (Recursive), cannot partition into two equal subsets." << endl;
        }

        // DP tabulation approach
        if(RecrseDP(arr, tot / 2, n)) {
            cout << "Yes (DP), can partition into two equal subsets." << endl;
        } else {
            cout << "No (DP), cannot partition into two equal subsets." << endl;
        }
    }

    return 0;
}
