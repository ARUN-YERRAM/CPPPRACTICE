#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<long long int, long long int>> vp;
    for (int i = 0; i < n; i++) {
        long long int a, b;
        cin >> a >> b;
        vp.push_back({a, b});
    }
    
    // Sort intervals by their end times to ensure we check non-overlapping sequences
    sort(vp.begin(), vp.end(), [](pair<long long int, long long int> &a, pair<long long int, long long int> &b) {
        return a.second < b.second;
    });
    
    int mx = 1;  // Maximum count of non-overlapping intervals
    int cnt = 1; // Current count of non-overlapping intervals
    long long int last_end = vp[0].second; // End of the last added interval in non-overlapping sequence
    
    for (int i = 1; i < n; i++) {
        // Check if the current interval starts after or exactly when the last interval ended
        if (vp[i].first >= last_end) {
            cnt++;
            last_end = vp[i].second; // Update end of the current sequence
        } else {
            mx = max(mx, cnt); // Update maximum if the current sequence is longer
            cnt = 1;           // Reset counter for a new sequence
            last_end = vp[i].second;
        }
    }
    
    // Ensure to update mx for the last sequence checked
    mx = max(mx, cnt);
    
    cout << mx << endl;
}
