#include<bits/stdc++.h>
using namespace std;

string RecrseTab(string s1, string s2, int n, int m) {
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    // Fill dp array
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i-1] == s2[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    // Reconstruct the Shortest Common Supersequence (SCS)
    int i = n, j = m;
    string scs = "";
    
    while (i > 0 && j > 0) {
        if (s1[i-1] == s2[j-1]) {
            scs += s1[i-1];
            i--; j--;
        } else if (dp[i-1][j] > dp[i][j-1]) {
            scs += s1[i-1];
            i--;
        } else {
            scs += s2[j-1];
            j--;
        }
    }

    // Add remaining characters from s1 or s2
    while (i > 0) {
        scs += s1[i-1];
        i--;
    }
    while (j > 0) {
        scs += s2[j-1];
        j--;
    }

    reverse(scs.begin(), scs.end());
    return scs;
}

int main() {
    string s1 = "abcdef";
    string s2 = "abcdgh";

    int n = s1.length();
    int m = s2.length();

    string scs = RecrseTab(s1, s2, n, m);
    cout << "Shortest Common Supersequence: " << scs << endl;
    cout << "Length of SCS: " << scs.length() << endl;

    return 0;
}
