#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    vector<pair<int, int>> vp(m);
    for (int i = 0; i < m; i++) {
        cin >> vp[i].first >> vp[i].second;
    }

    int inversions = 0;

    // Count initial inversions
    for (int i = 1; i < n; i++) {
        if (t[i] < t[i - 1]) {
            inversions++;
        }
    }

    for (auto it : vp) {
        int l = it.first - 1;
        int r = it.second - 1;

        // Swapping the elements
        swap(t[l], t[r]);

        // Reset the inversions counter
        inversions = 0;

        // Recalculate inversions
        for (int i = 1; i < n; i++) {
            if (t[i] < t[i - 1]) {
                inversions++;
            }
        }

        cout << inversions << endl;
    }

    return 0;
}
