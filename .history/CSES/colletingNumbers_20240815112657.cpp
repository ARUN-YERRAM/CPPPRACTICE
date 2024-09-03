#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    int cnt = 0, c = 0, i = 1, idx = 0;
    vector<bool> vis(n, false);

    while (cnt < n) {
        if (!vis[idx] && t[idx] == i) {
            vis[idx] = true;
            cnt++;
            i++;
        }
        idx++;
        
        if (idx == n) {
            idx = 0;
            if (cnt < n) c++;
        }
    }
    cout << c + 1 << endl;
}
