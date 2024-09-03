#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    stack<int> s;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {

        while (!s.empty() && t[s.top()] >= t[i]) {
            s.pop();
        }

        if (s.empty()) {
            // ans[i] = 0;
            cout<<0<<" ";
        } else {
            // ans[i] = s.top() + 1;
        }

        s.push(i);
    }

    // for (int i = 0; i < n; i++) {
        // cout << ans[i] << " ";
    // }
    // cout << endl;

    return 0;
}
