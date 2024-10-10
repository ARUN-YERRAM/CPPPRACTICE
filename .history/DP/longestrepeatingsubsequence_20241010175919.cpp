#include <bits/stdc++.h>
using namespace std;

// Tabulation method for Longest Repeating Subsequence
int RecrseTab(string s1, int n, string &lrs) {
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    // Fill the dp table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s1[j - 1] && i != j) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // Reconstructing the LRS from the dp table
    int i = n, j = n;
    while (i > 0 && j > 0) {
        if (s1[i - 1] == s1[j - 1] && i != j) {
            lrs.push_back(s1[i - 1]); // Store character in lrs
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    reverse(lrs.begin(), lrs.end()); // Reverse to get the correct order
    return dp[n][n];
}

// Memoization method for Longest Repeating Subsequence
int RecrseMem(string s1, int n, int m, vector<vector<int>>& dp, string &lrs) {
    if (n == 0 || m == 0) return 0;

    if (dp[n][m] != -1) return dp[n][m];

    if (s1[n - 1] == s1[m - 1] && n != m) {
        return dp[n][m] = 1 + RecrseMem(s1, n - 1, m - 1, dp, lrs);
    } else {
        int take_left = RecrseMem(s1, n - 1, m, dp, lrs);
        int take_right = RecrseMem(s1, n, m - 1, dp, lrs);
        return dp[n][m] = max(take_left, take_right);
    }
}

// Function to reconstruct LRS from the dp table
void printLRS(string s1, vector<vector<int>>& dp, string &lrs) {
    int n = s1.length();
    int i = n, j = n;
    while (i > 0 && j > 0) {
        if (s1[i - 1] == s1[j - 1] && i != j) {
            lrs.push_back(s1[i - 1]); // Store character in lrs
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }
    reverse(lrs.begin(), lrs.end()); // Reverse to get the correct order
}

int main() {
    string s1 = "aabb"; // Input string
    int n = s1.length();

    // For Tabulation
    string lrs_tab; // To store LRS for Tabulation
    int length_tab = RecrseTab(s1, n, lrs_tab);
    cout << "Longest Repeating Subsequence (Tabulation): " << length_tab << endl;
    cout << "LRS: " << lrs_tab << endl;

    // For Memoization
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    string lrs_mem; // To store LRS for Memoization
    int length_mem = RecrseMem(s1, n, n, dp, lrs_mem);
    cout << "Longest Repeating Subsequence (Memoization): " << length_mem << endl;
    printLRS(s1, dp, lrs_mem);
    cout << "LRS: " << lrs_mem << endl;

    return 0;
}
