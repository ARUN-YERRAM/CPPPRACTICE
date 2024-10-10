#include <bits/stdc++.h>
using namespace std;

// Memoization function to find LCS (used to find LPS)
int RecrseMem(string &s1, string &s2, int n, int m, vector<vector<int>> &dp) {
    if (n == 0 || m == 0)
        return 0;

    if (dp[n][m] != -1)
        return dp[n][m];

    if (s1[n - 1] == s2[m - 1])
        return dp[n][m] = 1 + RecrseMem(s1, s2, n - 1, m - 1, dp);
    else
        return dp[n][m] = max(RecrseMem(s1, s2, n - 1, m, dp), RecrseMem(s1, s2, n, m - 1, dp));
}

// Tabulation function to find LCS (used to find LPS)
int RecrseTab(string s1, string s2, int n, int m, vector<vector<int>> &dp) {
    // Fill dp array using tabulation
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][m];
}

// Function to reconstruct and print the longest palindromic subsequence
string printLPS(string s1, string s2, vector<vector<int>> &dp, int n, int m) {
    string lps;
    int i = n, j = m;

    // Traverse the dp table backwards to reconstruct the LPS
    while (i > 0 && j > 0) {
        if (s1[i - 1] == s2[j - 1]) {
            lps.push_back(s1[i - 1]);  // If characters match, include them in the result
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;  // Move up
        } else {
            j--;  // Move left
        }
    }

    return lps;  // This will be in reverse order of the LPS
}

int main() {
    string s1 = "abcdbaabba";

    int n = s1.length();
    string s2 = s1;
    reverse(s2.begin(), s2.end());

    int m = s2.length();

    // Tabulation approach to find LPS length
    vector<vector<int>> dpTab(n + 1, vector<int>(m + 1, 0));
    int lpsLengthTab = RecrseTab(s1, s2, n, m, dpTab);
    string lpsTab = printLPS(s1, s2, dpTab, n, m);
    reverse(lpsTab.begin(), lpsTab.end());  // Since the result is in reverse order, reverse it

    // Memoization approach to find LPS length
    vector<vector<int>> dpMem(n + 1, vector<int>(m + 1, -1));
    int lpsLengthMem = RecrseMem(s1, s2, n, m, dpMem);
    string lpsMem = printLPS(s1, s2, dpMem, n, m);
    reverse(lpsMem.begin(), lpsMem.end());  // Reverse the result

    // Print results
    cout << "LPS Length (Tabulation): " << lpsLengthTab << endl;
    cout << "Longest Palindromic Subsequence (Tabulation): " << lpsTab << endl;

    cout << "LPS Length (Memoization): " << lpsLengthMem << endl;
    cout << "Longest Palindromic Subsequence (Memoization): " << lpsMem << endl;

    return 0;
}
