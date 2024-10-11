#include <bits/stdc++.h>
using namespace std;

// Recursive approach
bool RecurseScramb(string s1, string s2) {
    if (s1 == s2) return true;
    if (s1.size() != s2.size()) return false;
    if (s1.size() <= 1) return false;

    int n = s1.size();
    for (int i = 1; i < n; i++) {
        // Case 1: No swap
        if (RecurseScramb(s1.substr(0, i), s2.substr(0, i)) && 
            RecurseScramb(s1.substr(i,n-i), s2.substr(i,n-i))) {
            return true;
        }
        // Case 2: Swap
        if (RecurseScramb(s1.substr(0, i), s2.substr(n - i)) && 
            RecurseScramb(s1.substr(i), s2.substr(0, n - i))) {
            return true;
        }
    }
    return false;
}

// Memoization approach
unordered_map<string, bool> memo;
bool RecurseScrambMemo(string s1, string s2) {
    if (s1 == s2) return true;
    if (s1.size() != s2.size()) return false;
    if (s1.size() <= 1) return false;

    string key = s1 + " " + s2;
    if (memo.find(key) != memo.end()) return memo[key];

    int n = s1.size();
    for (int i = 1; i < n; i++) {
        // Case 1: No swap
        if (RecurseScrambMemo(s1.substr(0, i), s2.substr(0, i)) && 
            RecurseScrambMemo(s1.substr(i), s2.substr(i))) {
            return memo[key] = true;
        }
        // Case 2: Swap
        if (RecurseScrambMemo(s1.substr(0, i), s2.substr(n - i)) && 
            RecurseScrambMemo(s1.substr(i), s2.substr(0, n - i))) {
            return memo[key] = true;
        }
    }
    return memo[key] = false;
}

// Tabulation (bottom-up DP) approach
bool ScrambleBottomUp(string s1, string s2) {
    int n = s1.size();
    if (n != s2.size()) return false;
    if (s1 == s2) return true;

    vector<vector<vector<bool>>> dp(n, vector<vector<bool>>(n, vector<bool>(n + 1, false)));

    // Base case: single character comparison
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dp[i][j][1] = (s1[i] == s2[j]);
        }
    }

    // Solve for all lengths > 1
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            for (int j = 0; j <= n - len; j++) {
                for (int k = 1; k < len; k++) {
                    // Case 1: No swap
                    if (dp[i][j][k] && dp[i + k][j + k][len - k]) {
                        dp[i][j][len] = true;
                        break;
                    }
                    // Case 2: Swap
                    if (dp[i][j + len - k][k] && dp[i + k][j][len - k]) {
                        dp[i][j][len] = true;
                        break;
                    }
                }
            }
        }
    }

    return dp[0][0][n];
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    // Recursive approach
    if (RecurseScramb(s1, s2)) {
        cout << "true (Recursive)" << endl;
    } else {
        cout << "false (Recursive)" << endl;
    }

    // Memoization approach
    memo.clear();  // Clear memoization map
    if (RecurseScrambMemo(s1, s2)) {
        cout << "true (Memoization)" << endl;
    } else {
        cout << "false (Memoization)" << endl;
    }

    // Tabulation approach (Bottom-up DP)
    if (ScrambleBottomUp(s1, s2)) {
        cout << "true (Tabulation)" << endl;
    } else {
        cout << "false (Tabulation)" << endl;
    }

    return 0;
}





#include <bits/stdc++.h>
using namespace std;

// Recursive approach without memoization
bool RecurseScrambRec(string s1, string s2) {
    if (s1 == s2) return true; // Base case: If strings are identical
    if (s1.size() <= 1) return false; // Base case: If length <= 1 and not identical

    int n = s1.size();
    for (int i = 1; i < n; i++) {
        // Case 1: No swap
        if (RecurseScrambRec(s1.substr(0, i), s2.substr(0, i)) &&
            RecurseScrambRec(s1.substr(i, n - i), s2.substr(i, n - i))) {
            return true;
        }
        // Case 2: Swap
        if (RecurseScrambRec(s1.substr(0, i), s2.substr(n - i, i)) &&
            RecurseScrambRec(s1.substr(i, n - i), s2.substr(0, n - i))) {
            return true;
        }
    }
    return false;
}

// Memoization approach using a 3D table
bool RecurseScrambMemoTable(string s1, string s2, vector<vector<vector<int>>>& dp, int i1, int i2, int length) {
    if (dp[i1][i2][length] != -1) return dp[i1][i2][length]; // Memoized result

    if (s1.substr(i1, length) == s2.substr(i2, length)) {
        return dp[i1][i2][length] = 1; // True if substrings are identical
    }
    if (length <= 1) return dp[i1][i2][length] = 0; // False if length <= 1 and substrings not equal

    for (int i = 1; i < length; i++) {
        // Case 1: No swap
        if (RecurseScrambMemoTable(s1, s2, dp, i1, i2, i) &&
            RecurseScrambMemoTable(s1, s2, dp, i1 + i, i2 + i, length - i)) {
            return dp[i1][i2][length] = 1;
        }
        // Case 2: Swap
        if (RecurseScrambMemoTable(s1, s2, dp, i1, i2 + length - i, i) &&
            RecurseScrambMemoTable(s1, s2, dp, i1 + i, i2, length - i)) {
            return dp[i1][i2][length] = 1;
        }
    }
    return dp[i1][i2][length] = 0;
}

// Tabulation (bottom-up DP) approach using table (3D DP table)
bool ScrambleBottomUpTable(string s1, string s2) {
    int n = s1.size();
    if (n != s2.size()) return false; // If sizes are not equal, return false
    if (s1 == s2) return true; // If strings are identical, return true

    vector<vector<vector<bool>>> dp(n, vector<vector<bool>>(n, vector<bool>(n + 1, false)));

    // Base case: single character comparison
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dp[i][j][1] = (s1[i] == s2[j]);
        }
    }

    // Solve for all lengths > 1
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            for (int j = 0; j <= n - len; j++) {
                for (int k = 1; k < len; k++) {
                    // Case 1: No swap
                    if (dp[i][j][k] && dp[i + k][j + k][len - k]) {
                        dp[i][j][len] = true;
                        break;
                    }
                    // Case 2: Swap
                    if (dp[i][j + len - k][k] && dp[i + k][j][len - k]) {
                        dp[i][j][len] = true;
                        break;
                    }
                }
            }
        }
    }

    return dp[0][0][n];
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    // Recursive approach without memoization
    cout << "Using Recursion (no memoization): ";
    if (RecurseScrambRec(s1, s2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    // Memoization approach using table
    cout << "Using Memoization with Table: ";
    int n = s1.size();
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(n + 1, -1)));
    
    if (RecurseScrambMemoTable(s1, s2, dp, 0, 0, n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    // Tabulation approach (Bottom-up DP using table)
    cout << "Using Tabulation with Table: ";
    if (ScrambleBottomUpTable(s1, s2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
