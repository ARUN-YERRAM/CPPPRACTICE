#include<bits/stdc++.h>
using namespace std;

// Tabulation method
int RecrseTab(string s1, string s2, int n, int m) {
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    int mx = 0; // Track the maximum length

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i-1] == s2[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
                mx = max(mx, dp[i][j]); // Update maximum length
            } else {
                dp[i][j] = 0; // Reset if characters don't match
            }
        }
    }
    return mx;
}

// Memoization method
int RecrseMem(string s1, string s2, int n, int m, vector<vector<int>>& dp, int& mx) {
    if (n == 0 || m == 0) return 0;

    if (dp[n][m] != -1) return dp[n][m];

    if (s1[n-1] == s2[m-1]) {
        dp[n][m] = 1 + RecrseMem(s1, s2, n-1, m-1, dp, mx);
        mx = max(mx, dp[n][m]); // Update maximum length
    } else {
        dp[n][m] = 0; // Reset if characters don't match
    }
    RecrseMem(s1, s2, n-1, m, dp, mx);
    RecrseMem(s1, s2, n, m-1, dp, mx);

    return dp[n][m];
}

// Simple recursive method
int Recrse(string s1, string s2, int n, int m, int& mx) {
    if (n == 0 || m == 0) return 0;

    int len = 0;
    if (s1[n-1] == s2[m-1]) {
        len = 1 + Recrse(s1, s2, n-1, m-1, mx);
        mx = max(mx, len); // Update maximum length
    }

    Recrse(s1, s2, n-1, m, mx);
    Recrse(s1, s2, n, m-1, mx);

    return len;
}

int main() {
    string s1 = "abcdef";
    string s2 = "abcdgh";

    int n = s1.length();
    int m = s2.length();

    vector<vector<int>> dp(n+1, vector<int>(m+1, -1)); // Initialize with -1 for memoization

    int mx = 0;
    Recrse(s1, s2, n, m, mx);
    cout << "Recursive solution: " << mx << endl;

    mx = 0;
    RecrseMem(s1, s2, n, m, dp, mx);
    cout << "Memoization solution: " << mx << endl;

    cout << "Tabulation solution: " << RecrseTab(s1, s2, n, m) << endl;

    return 0;
}
