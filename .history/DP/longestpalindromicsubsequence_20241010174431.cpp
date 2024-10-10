#include <bits/stdc++.h>
using namespace std;

// Memoization function to find LCS (which gives LPS when used with the reverse of the string)
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

// Tabulation function to find LCS (which gives LPS when used with the reverse of the string)
int RecrseTab(string s1, string s2, int n, int m) {
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

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

int main() {
    string s1 = "abcdbaabba";

    int n = s1.length();
    string s2 = s1;
    reverse(s2.begin(), s2.end());

    int m = s2.length();

    // Tabulation approach to find LPS
    int lpsLengthTab = RecrseTab(s1, s2, n, m);
    cout << "LPS Length (Tabulation): " << lpsLengthTab << endl;

    // Memoization approach to find LPS
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    int lpsLengthMem = RecrseMem(s1, s2, n, m, dp);
    cout << "LPS Length (Memoization): " << lpsLengthMem << endl;

    return 0;
}
