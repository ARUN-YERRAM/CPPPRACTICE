#include <bits/stdc++.h>
using namespace std;

// Function to find and print the LCS using DP
string printLCS(string s1, string s2, int n, int m) {
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    // Fill the dp table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i-1] == s2[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    // Now, let's reconstruct the LCS from the dp table
    int i = n, j = m;
    string lcs = "";

    while (i > 0 && j > 0) {
        if (s1[i-1] == s2[j-1]) {
            lcs += s1[i-1];  // If characters match, include it in the LCS
            i--;
            j--;
        } else if (dp[i-1][j] > dp[i][j-1]) {
            i--;  // Move upwards
        } else {
            j--;  // Move leftwards
        }
    }

    // The LCS is built backwards, so reverse it
    reverse(lcs.begin(), lcs.end());
    return lcs;
}

int main() {
    string s1 = "abcdef";
    string s2 = "abcdgh";

    int n = s1.length();
    int m = s2.length();

    // Print the LCS
    string lcs = printLCS(s1, s2, n, m);
    cout << "Longest Common Subsequence: " << lcs << endl;

    return 0;
}
