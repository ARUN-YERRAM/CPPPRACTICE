#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long Recurse(long long n, long long sum, int i, vector<vector<long long>> &dp) {
    if (sum == n) return 1;
    if (sum > n || i > 6) return 0;
    if (dp[sum][i] != -1) return dp[sum][i];
    
    // Include current number `i` or move to the next number
    dp[sum][i] = (Recurse(n, sum + i, i, dp) + Recurse(n, sum + i, i + 1, dp)) % MOD;
    return dp[sum][i];
}

int main() {
    long long n;
    cin >> n;

    vector<vector<long long>> dp(n + 1, vector<long long>(7, -1));
    long long cnt = Recurse(n, 0, 1, dp);
    
    cout << cnt << endl;
    return 0;
}
