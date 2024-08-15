#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> p(n);
    
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    long long total_sum = accumulate(p.begin(), p.end(), 0LL);
    long long min_diff = LLONG_MAX;

    // There are 2^n possible ways to divide the apples into two groups.
    for (int mask = 0; mask < (1 << n); mask++) {
        long long group1_sum = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                group1_sum += p[i];
            }
        }
        long long group2_sum = total_sum - group1_sum;
        min_diff = min(min_diff, abs(group1_sum - group2_sum));
    }

    cout << min_diff << endl;

    return 0;
}
