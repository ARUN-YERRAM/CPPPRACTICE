#include <bits/stdc++.h>
using namespace std;

int countOneBits(int n) {
    vector<int> dp(n + 1, 0); // dp[i] will store the number of 1's in the binary representation of i.
    
    for (int i = 1; i <= n; ++i) {
        // Use the relation: dp[i] = dp[i >> 1] + (i & 1)
        // i >> 1 is the number i divided by 2 (right shift), essentially removing the least significant bit
        // i & 1 is 1 if the least significant bit is 1, otherwise 0
        dp[i] = dp[i >> 1] + (i & 1);
    }
    
    return accumulate(dp.begin(), dp.end(), 0); // Sum all the counts from 1 to n.
}

int main() {
    int n;
    cin >> n;
    cout << countOneBits(n) << endl;
    return 0;
}
