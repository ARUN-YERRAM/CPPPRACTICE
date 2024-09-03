#include <bits/stdc++.h>
using namespace std;

int countOneBits(int n) {
    vector<int> dp(n + 1, 0); 
    
    for (int i = 1; i <= n; ++i) {
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
