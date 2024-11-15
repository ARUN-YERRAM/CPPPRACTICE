#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    // Sort the children's weights
    sort(p.begin(), p.end());

    int i = 0, j = n - 1;
    int gondolas = 0;

    while (i <= j) {
        if (p[i] + p[j] <= x) {
            // Pair the lightest and heaviest child within the weight limit
            i++;
        }
        // The heaviest child at `j` always gets a gondola (alone or with `i`)
        j--;
        gondolas++;
    }

    cout << gondolas << endl;
    return 0;
}
