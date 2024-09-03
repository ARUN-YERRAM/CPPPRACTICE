#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, k;
    cin >> n >> k;

    vector<long long int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    long long int cnt = 0;
    unordered_map<long long int, int> freq;
    int left = 0, distinct_count = 0;

    for (int right = 0; right < n; right++) {
        freq[t[right]]++;

        if (freq[t[right]] == 1) {
            distinct_count++;
        }

        while (distinct_count > k) {
            freq[t[left]]--;
            if (freq[t[left]] == 0) {
                distinct_count--;
            }
            left++;
        }

        if (distinct_count == k) {
            cnt += (right - left + 1);
        }
    }

    cout << cnt << endl;
    return 0;
}
