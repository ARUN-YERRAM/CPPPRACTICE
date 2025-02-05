#include <bits/stdc++.h>
using namespace std;

// Recursive function to find LCS (used to find LPS)
int LCS_Recursive(string &s1, string &s2, int n, int m) {
    if (n == 0 || m == 0) // Base case: if either string is empty
        return 0;

    if (s1[n - 1] == s2[m - 1]) // If characters match
        return 1 + LCS_Recursive(s1, s2, n - 1, m - 1);
    else // If characters don't match
        return max(LCS_Recursive(s1, s2, n - 1, m), LCS_Recursive(s1, s2, n, m - 1));
}


// Memoization function to find LCS (used to find LPS)
int LCS_Memoization(string &s1, string &s2, int n, int m, vector<vector<int>> &dp) {
    if (n == 0 || m == 0)
        return 0;

    if (dp[n][m] != -1)
        return dp[n][m];

    if (s1[n - 1] == s2[m - 1])
        return dp[n][m] = 1 + LCS_Memoization(s1, s2, n - 1, m - 1, dp);
    else
        return dp[n][m] = max(LCS_Memoization(s1, s2, n - 1, m, dp), LCS_Memoization(s1, s2, n, m - 1, dp));
}

// Tabulation function to find LCS (used to find LPS)
int LCS_Tabulation(string s1, string s2, int n, int m, vector<vector<int>> &dp) {
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
string reconstructLPS(string s1, string s2, vector<vector<int>> &dp, int n, int m) {
    string lps;
    int i = n, j = m;

    while (i > 0 && j > 0) {
        if (s1[i - 1] == s2[j - 1]) {
            lps.push_back(s1[i - 1]);
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    reverse(lps.begin(), lps.end()); // Reverse to get the correct order
    return lps;
}

int main() {
    string s1 = "abcdbaabba";
    int n = s1.length();
    string s2 = s1;
    reverse(s2.begin(), s2.end());

    // Recursive approach
    int lpsLengthRecursive = LCS_Recursive(s1, s2, n, n);

    // Memoization approach
    vector<vector<int>> dpMem(n + 1, vector<int>(n + 1, -1));
    int lpsLengthMem = LCS_Memoization(s1, s2, n, n, dpMem);
    string lpsMem = reconstructLPS(s1, s2, dpMem, n, n);

    // Tabulation approach
    vector<vector<int>> dpTab(n + 1, vector<int>(n + 1, 0));
    int lpsLengthTab = LCS_Tabulation(s1, s2, n, n, dpTab);
    string lpsTab = reconstructLPS(s1, s2, dpTab, n, n);

    // Print results
    cout << "LPS Length (Recursive): " << lpsLengthRecursive << endl;

    cout << "LPS Length (Memoization): " << lpsLengthMem << endl;
    cout << "Longest Palindromic Subsequence (Memoization): " << lpsMem << endl;

    cout << "LPS Length (Tabulation): " << lpsLengthTab << endl;
    cout << "Longest Palindromic Subsequence (Tabulation): " << lpsTab << endl;

    return 0;
}
