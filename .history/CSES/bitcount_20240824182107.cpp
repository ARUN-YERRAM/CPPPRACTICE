#include <bits/stdc++.h>
using namespace std;

long long int countOneBits(long long int n) {
    vector<long long int> dp(n + 1, 0); 
    
    for (long long int i = 1; i <= n; ++i) {
        dp[i] = dp[i >> 1] + (i & 1);
    }
    
    return accumulate(dp.begin(), dp.end(), 0); 
}

int main() {
    long long int n;
    cin >> n;
    cout << countOneBits(n) << endl;
    return 0;
}
