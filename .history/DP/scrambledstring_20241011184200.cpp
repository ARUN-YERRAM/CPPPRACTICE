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
            RecurseScramb(s1.substr(i), s2.substr(i))) {
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



