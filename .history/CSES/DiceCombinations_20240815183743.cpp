#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long Recurse(long long n, long long sum, int i) {
    if (sum == n) return 1;
    if (sum > n || i > 6) return 0;

    // Include current number `i` or move to the next number
    return (Recurse(n, sum + i, i) + Recurse(n, sum + i, i + 1)) % MOD;
}

int main() {
    long long n;
    cin >> n;

    long long cnt = Recurse(n, 0, 1);
    cout << cnt << endl;

    return 0;
}
