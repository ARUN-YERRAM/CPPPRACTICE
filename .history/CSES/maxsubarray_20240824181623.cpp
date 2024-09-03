#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    
    vector<long long> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    long long sum = 0;
    long long maxi = LLONG_MIN;
    set<long long> s;

    for (int i = 0; i < n; i++) {
        sum += t[i];

        if (i >= a - 1) {
            // Find maximum subarray sum in the valid range
            if (!s.empty()) {
                maxi = max(maxi, sum - *s.begin());
            }
            if (i >= b) {
                // Remove the prefix sum that goes out of the valid range
                s.erase(s.find(sum - t[i - b]));
            }
        }

        // Add current sum to the set
        s.insert(sum);
    }

    cout << maxi << endl;
    return 0;
}
