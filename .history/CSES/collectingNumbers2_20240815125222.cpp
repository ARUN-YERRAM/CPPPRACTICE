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

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[t[i]] = i;
    }

    vector<int> idx;
    for (auto it : mp) {
        idx.push_back(it.second);
    }

    for (auto it : vp) {
        int l = it.first - 1;
        int s = it.second - 1;

        int f = mp[t[l]];
        int S = mp[t[s]];

        swap(t[l], t[s]);

        mp[t[l]] = S;
        mp[t[s]] = f;

        swap(idx[t[l]], idx[t]);

        int cnt = 0;
        for (int i = 0; i < idx.size() - 1; i++)
            if (idx[i] > idx[i + 1])
                cnt++;
        cout << cnt << endl;
    }
    return 0;
}
