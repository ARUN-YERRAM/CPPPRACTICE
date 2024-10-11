#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Recursive solution (without memoization)
int solveRecursive(string str, int i, int j, bool isTrue) {
    // Base condition
    if (i > j) return 0;  // Invalid case

    // If there's only one character
    if (i == j) {
        if (isTrue) {
            return str[i] == 'T' ? 1 : 0;  // If we expect True, return 1 if it's 'T', else 0
        } else {
            return str[i] == 'F' ? 1 : 0;  // If we expect False, return 1 if it's 'F', else 0
        }
    }

    int ans = 0;

    // Try all operators between i and j
    for (int k = i + 1; k < j; k += 2) {
        // Solve left and right subproblems
        int leftTrue = solveRecursive(str, i, k - 1, true);
        int leftFalse = solveRecursive(str, i, k - 1, false);
        int rightTrue = solveRecursive(str, k + 1, j, true);
        int rightFalse = solveRecursive(str, k + 1, j, false);

        // Evaluate the operator at position k
        if (str[k] == '&') {
            if (isTrue) {
                ans += leftTrue * rightTrue;
            } else {
                ans += leftTrue * rightFalse + leftFalse * rightTrue + leftFalse * rightFalse;
            }
        } else if (str[k] == '|') {
            if (isTrue) {
                ans += leftTrue * rightTrue + leftTrue * rightFalse + leftFalse * rightTrue;
            } else {
                ans += leftFalse * rightFalse;
            }
        } else if (str[k] == '^') {
            if (isTrue) {
                ans += leftTrue * rightFalse + leftFalse * rightTrue;
            } else {
                ans += leftTrue * rightTrue + leftFalse * rightFalse;
            }
        }
    }
    return ans;
}

// Memoization table (DP)
int dp[100][100][2];

// Memoized solution
int solveMemoized(string str, int i, int j, bool isTrue) {
    // Base condition
    if (i > j) return 0;  // Invalid case

    // If there's only one character
    if (i == j) {
        if (isTrue) {
            return str[i] == 'T' ? 1 : 0;
        } else {
            return str[i] == 'F' ? 1 : 0;
        }
    }

    // Check if result is already computed
    if (dp[i][j][isTrue] != -1) {
        return dp[i][j][isTrue];
    }

    int ans = 0;

    // Try all operators between i and j
    for (int k = i + 1; k < j; k += 2) {
        int leftTrue, leftFalse, rightTrue, rightFalse;

        // Left subproblem: True
        if (dp[i][k - 1][true] != -1) {
            leftTrue = dp[i][k - 1][true];
        } else {
            leftTrue = solveMemoized(str, i, k - 1, true);
            dp[i][k - 1][true] = leftTrue;
        }

        // Left subproblem: False
        if (dp[i][k - 1][false] != -1) {
            leftFalse = dp[i][k - 1][false];
        } else {
            leftFalse = solveMemoized(str, i, k - 1, false);
            dp[i][k - 1][false] = leftFalse;
        }

        // Right subproblem: True
        if (dp[k + 1][j][true] != -1) {
            rightTrue = dp[k + 1][j][true];
        } else {
            rightTrue = solveMemoized(str, k + 1, j, true);
            dp[k + 1][j][true] = rightTrue;
        }

        // Right subproblem: False
        if (dp[k + 1][j][false] != -1) {
            rightFalse = dp[k + 1][j][false];
        } else {
            rightFalse = solveMemoized(str, k + 1, j, false);
            dp[k + 1][j][false] = rightFalse;
        }

        // Evaluate the operator at position k
        if (str[k] == '&') {
            if (isTrue) {
                ans += leftTrue * rightTrue;
            } else {
                ans += leftTrue * rightFalse + leftFalse * rightTrue + leftFalse * rightFalse;
            }
        } else if (str[k] == '|') {
            if (isTrue) {
                ans += leftTrue * rightTrue + leftTrue * rightFalse + leftFalse * rightTrue;
            } else {
                ans += leftFalse * rightFalse;
            }
        } else if (str[k] == '^') {
            if (isTrue) {
                ans += leftTrue * rightFalse + leftFalse * rightTrue;
            } else {
                ans += leftTrue * rightTrue + leftFalse * rightFalse;
            }
        }
    }

    // Store the result and return
    dp[i][j][isTrue] = ans;
    return ans;
}

// Tabulation solution (bottom-up dynamic programming)
int solveTabulation(string str) {
    int n = str.length();

    // dp[i][j][0] -> number of ways to evaluate subexpression str[i..j] to False
    // dp[i][j][1] -> number of ways to evaluate subexpression str[i..j] to True
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(2, 0)));

    // Fill the base cases (subexpressions of length 1)
    for (int i = 0; i < n; i++) {
        if (str[i] == 'T') {
            dp[i][i][1] = 1;  // True
            dp[i][i][0] = 0;  // False
        } else if (str[i] == 'F') {
            dp[i][i][1] = 0;  // True
            dp[i][i][0] = 1;  // False
        }
    }

    // Fill the DP table for subexpressions of length greater than 1
    for (int length = 3; length <= n; length += 2) {  // Only odd-length subexpressions
        for (int i = 0; i <= n - length; i++) {
            int j = i + length - 1;
            dp[i][j][0] = dp[i][j][1] = 0;  // Initialize for this subexpression

            // Try every operator in the subexpression str[i..j]
            for (int k = i + 1; k < j; k += 2) {
                int leftTrue = dp[i][k - 1][1];
                int leftFalse = dp[i][k - 1][0];
                int rightTrue = dp[k + 1][j][1];
                int rightFalse = dp[k + 1][j][0];

                // Evaluate the operator at position k
                if (str[k] == '&') {
                    dp[i][j][1] += leftTrue * rightTrue;
                    dp[i][j][0] += leftTrue * rightFalse + leftFalse * rightTrue + leftFalse * rightFalse;
                } else if (str[k] == '|') {
                    dp[i][j][1] += leftTrue * rightTrue + leftTrue * rightFalse + leftFalse * rightTrue;
                    dp[i][j][0] += leftFalse * rightFalse;
                } else if (str[k] == '^') {
                    dp[i][j][1] += leftTrue * rightFalse + leftFalse * rightTrue;
                    dp[i][j][0] += leftTrue * rightTrue + leftFalse * rightFalse;
                }
            }
        }
    }

    // Return the number of ways to evaluate the whole expression to True
    return dp[0][n - 1][1];
}

int main() {
    string str = "T^F&T";  // Example boolean expression
    bool isTrue = true;    // We want to find the number of ways to get True

    // Recursive approach (without memoization)
    cout << "Number of ways (Recursive): " << solveRecursive(str, 0, str.size() - 1, isTrue) << endl;

    // Initialize the memoization table with -1
    memset(dp, -1, sizeof(dp));

    // Memoized approach (with memoization)
    cout << "Number of ways (Memoized): " << solveMemoized(str, 0, str.size() - 1, isTrue) << endl;

    // Tabulation approach (Bottom-up DP)
    cout << "Number of ways (Tabulation): " << solveTabulation(str) << endl;

    return 0;
}







// ....................using map...................


#include <iostream>
#include <string>
#include <map>
using namespace std;

// Map for memoization
map<pair<pair<int, int>, bool>, int> memo;

// Recursive solution (without memoization)
int solveRecursive(string str, int i, int j, bool isTrue) {
    // Base condition
    if (i > j) return 0;  // Invalid case

    // If there's only one character
    if (i == j) {
        if (isTrue) {
            return str[i] == 'T' ? 1 : 0;  // If we expect True, return 1 if it's 'T', else 0
        } else {
            return str[i] == 'F' ? 1 : 0;  // If we expect False, return 1 if it's 'F', else 0
        }
    }

    int ans = 0;

    // Try all operators between i and j
    for (int k = i + 1; k < j; k += 2) {
        // Solve left and right subproblems
        int leftTrue = solveRecursive(str, i, k - 1, true);
        int leftFalse = solveRecursive(str, i, k - 1, false);
        int rightTrue = solveRecursive(str, k + 1, j, true);
        int rightFalse = solveRecursive(str, k + 1, j, false);

        // Evaluate the operator at position k
        if (str[k] == '&') {
            if (isTrue) {
                ans += leftTrue * rightTrue;
            } else {
                ans += leftTrue * rightFalse + leftFalse * rightTrue + leftFalse * rightFalse;
            }
        } else if (str[k] == '|') {
            if (isTrue) {
                ans += leftTrue * rightTrue + leftTrue * rightFalse + leftFalse * rightTrue;
            } else {
                ans += leftFalse * rightFalse;
            }
        } else if (str[k] == '^') {
            if (isTrue) {
                ans += leftTrue * rightFalse + leftFalse * rightTrue;
            } else {
                ans += leftTrue * rightTrue + leftFalse * rightFalse;
            }
        }
    }
    return ans;
}

// Memoized solution using map
int solveMemoized(string str, int i, int j, bool isTrue) {
    // Base condition
    if (i > j) return 0;  // Invalid case

    // If there's only one character
    if (i == j) {
        if (isTrue) {
            return str[i] == 'T' ? 1 : 0;
        } else {
            return str[i] == 'F' ? 1 : 0;
        }
    }

    // Check if result is already computed
    if (memo.find({{i, j}, isTrue}) != memo.end()) {
        return memo[{{i, j}, isTrue}];
    }

    int ans = 0;

    // Try all operators between i and j
    for (int k = i + 1; k < j; k += 2) {
        int leftTrue = solveMemoized(str, i, k - 1, true);
        int leftFalse = solveMemoized(str, i, k - 1, false);
        int rightTrue = solveMemoized(str, k + 1, j, true);
        int rightFalse = solveMemoized(str, k + 1, j, false);

        // Evaluate the operator at position k
        if (str[k] == '&') {
            if (isTrue) {
                ans += leftTrue * rightTrue;
            } else {
                ans += leftTrue * rightFalse + leftFalse * rightTrue + leftFalse * rightFalse;
            }
        } else if (str[k] == '|') {
            if (isTrue) {
                ans += leftTrue * rightTrue + leftTrue * rightFalse + leftFalse * rightTrue;
            } else {
                ans += leftFalse * rightFalse;
            }
        } else if (str[k] == '^') {
            if (isTrue) {
                ans += leftTrue * rightFalse + leftFalse * rightTrue;
            } else {
                ans += leftTrue * rightTrue + leftFalse * rightFalse;
            }
        }
    }

    // Store the result in the map and return
    memo[{{i, j}, isTrue}] = ans;
    return ans;
}

// Tabulation solution using map (bottom-up dynamic programming)
int solveTabulation(string str) {
    int n = str.length();

    // Map to store the number of ways to evaluate subexpressions
    map<pair<pair<int, int>, bool>, int> dp;

    // Fill the base cases (subexpressions of length 1)
    for (int i = 0; i < n; i++) {
        dp[{{i, i}, true}] = (str[i] == 'T') ? 1 : 0;
        dp[{{i, i}, false}] = (str[i] == 'F') ? 1 : 0;
    }

    // Fill the DP table for subexpressions of length greater than 1
    for (int length = 3; length <= n; length += 2) {  // Only odd-length subexpressions
        for (int i = 0; i <= n - length; i++) {
            int j = i + length - 1;
            dp[{{i, j}, true}] = dp[{{i, j}, false}] = 0;  // Initialize for this subexpression

            // Try every operator in the subexpression str[i..j]
            for (int k = i + 1; k < j; k += 2) {
                int leftTrue = dp[{{i, k - 1}, true}];
                int leftFalse = dp[{{i, k - 1}, false}];
                int rightTrue = dp[{{k + 1, j}, true}];
                int rightFalse = dp[{{k + 1, j}, false}];

                // Evaluate the operator at position k
                if (str[k] == '&') {
                    dp[{{i, j}, true}] += leftTrue * rightTrue;
                    dp[{{i, j}, false}] += leftTrue * rightFalse + leftFalse * rightTrue + leftFalse * rightFalse;
                } else if (str[k] == '|') {
                    dp[{{i, j}, true}] += leftTrue * rightTrue + leftTrue * rightFalse + leftFalse * rightTrue;
                    dp[{{i, j}, false}] += leftFalse * rightFalse;
                } else if (str[k] == '^') {
                    dp[{{i, j}, true}] += leftTrue * rightFalse + leftFalse * rightTrue;
                    dp[{{i, j}, false}] += leftTrue * rightTrue + leftFalse * rightFalse;
                }
            }
        }
    }

    // Return the number of ways to evaluate the whole expression to True
    return dp[{{0, n - 1}, true}];
}

int main() {
    string str = "T^F&T";  // Example boolean expression
    bool isTrue = true;    // We want to find the number of ways to get True

    // Recursive approach (without memoization)
    cout << "Number of ways (Recursive): " << solveRecursive(str, 0, str.size() - 1, isTrue) << endl;

    // Memoized approach (with memoization)
    cout << "Number of ways (Memoized): " << solveMemoized(str, 0, str.size() - 1, isTrue) << endl;

    // Tabulation approach (Bottom-up DP)
    cout << "Number of ways (Tabulation): " << solveTabulation(str) << endl;

    return 0;
}
