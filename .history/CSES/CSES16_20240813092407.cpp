#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    vector<long long int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    sort(t.begin(), t.end());

    long long int total_sum = accumulate(t.begin(), t.end(), 0LL);

    long long int half_sum = total_sum / 2;
    long long int s1 = 0;
    
    for (int i = n - 1; i >= 0; --i) {
        if (s1 + t[i] <= half_sum) {
            s1 += t[i];
        }
    }

    long long int s2 = total_sum - s1;
    cout << abs(s1 - s2) << endl;

    return 0;
}
