#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long int x;
    cin >> n >> x;

    vector<long long int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    vector<long long int> t1 = t;
    sort(t.begin(), t.end());

    long long int cnt = 0, cnt1 = 0;
    long long int tot = 0;
    int i = 0;

    // Counting using sorted array 't'
    while (i < n) {
        tot = 0;
        int c = 0;
        while (i < n && tot + t[i] <= x) {
            tot += t[i];
            i++;
            c++;
            if (c == 2) break;
        }
        cnt++;
    }

    // Counting using original unsorted array 't1'
    i = 0;
    while (i < n) {
        tot = 0;
        int c = 0;
        while (i < n && tot + t1[i] <= x) {
            tot += t1[i];
            i++;
            c++;
            if (c == 2) break;
        }
        cnt1++;
    }

    cout << min(cnt, cnt1) << endl;
    return 0;
}
