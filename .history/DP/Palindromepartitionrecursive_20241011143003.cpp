#include <iostream>
#include <climits>
#include <cstring>
using namespace std;

const int MAX = 100;  // Set a constant limit for the maximum string length

// Function to check if the substring s[i..j] is a palindrome
bool isPalindrome(string s, int i, int j) {
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

// Recursive function to find the minimum cuts needed for palindrome partitioning
int palindromePartitionRecursive(string s, int i, int j) {
    if (i >= j || isPalindrome(s, i, j))
        return 0;  // No cuts needed if the substring is a palindrome

    int minCuts = INT_MAX;

    // Try all possible partitions between i and j
    for (int k = i; k < j; k++) {
        int cuts = palindromePartitionRecursive(s, i, k) +
                   palindromePartitionRecursive(s, k + 1, j) +
                   1;  // Add 1 cut after partition

        // Find the minimum number of cuts
        if (cuts < minCuts)
            minCuts = cuts;
    }

    return minCuts;
}

// Function to find the minimum cuts using memoization
int palindromePartitionMemoized(string s, int i, int j, int dp[MAX][MAX]) {
    if (i >= j )
        return 0;  // No cuts needed if the substring is a palindrome

    // If the subproblem has already been solved, return the result
    if (dp[i][j] != -1)
    return dp[i][j];

    int minCuts = INT_MAX;

    // Try all possible partitions between i and j
    for (int k = i; k < j; k++) {
        int cuts = palindromePartitionMemoized(s, i, k, dp) +
                   palindromePartitionMemoized(s, k + 1, j, dp) +
                   1;

        if (cuts < minCuts)
            minCuts = cuts;
    }

    // Store the result in the dp table
    return dp[i][j] = minCuts;
}

// Function to find the minimum cuts using bottom-up dynamic programming
int palindromePartitionBottomUp(string s) {
    int n = s.size();
    int dp[MAX][MAX] = {0};  // DP table to store minimum cuts

    // isPalindrome[i][j] will be true if substring s[i..j] is a palindrome
    bool isPalindrome[MAX][MAX] = {false};

    // Fill the isPalindrome table
    for (int i = 0; i < n; i++) {
        isPalindrome[i][i] = true;  // Single character substrings are palindromes
    }

    for (int L = 2; L <= n; L++) {
        for (int i = 0; i <= n - L; i++) {
            int j = i + L - 1;
            if (s[i] == s[j] && (L == 2 || isPalindrome[i + 1][j - 1])) {
                isPalindrome[i][j] = true;
            }
        }
    }

    // Now calculate the minimum cuts using dynamic programming
    for (int i = 0; i < n; i++) {
        if (isPalindrome[0][i]) {
            dp[0][i] = 0;  // No cuts needed if the substring is already a palindrome
        } else {
            dp[0][i] = INT_MAX;
            for (int j = 0; j < i; j++) {
                if (isPalindrome[j + 1][i]) {
                    dp[0][i] = min(dp[0][i], dp[0][j] + 1);
                }
            }
        }
    }
    return dp[0][n - 1];
}

int main() {
    string s = "ababbbabbababa";  // Example string

    // Recursive solution
    cout << "Minimum cuts (Recursive): "
         << palindromePartitionRecursive(s, 0, s.size() - 1) << endl;

    // Initialize the memoization table with -1
    int dp[MAX][MAX];
    memset(dp, -1, sizeof(dp));

    // Memoized solution
    cout << "Minimum cuts (Memoization): "
         << palindromePartitionMemoized(s, 0, s.size() - 1, dp) << endl;

    // Bottom-up DP solution
    cout << "Minimum cuts (Bottom-Up DP): "
         << palindromePartitionBottomUp(s) << endl;

    return 0;
}
