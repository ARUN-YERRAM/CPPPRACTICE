#include <bits/stdc++.h>
using namespace std;

bool Recrse(vector<int>& t, int i, int n, int target, vector<int>& result) {
    // Base cases
    if (target == 0) {
        result = t;
        return true;
    }
    if (i > n || target < 0) {
        return false;
    }

    // Include the current element
    t.push_back(i);
    if (Recrse(t, i + 1, n, target - i, result)) {
        return true;
    }

    // Exclude the current element
    t.pop_back();
    if (Recrse(t, i + 1, n, target, result)) {
        return true;
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    long long int tot = 0;

    // Calculate the total sum of numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        tot += i;
    }

    // If the total sum is not divisible by 2, we cannot partition into two subsets with equal sum
    if (tot % 2 != 0) {
        cout << "NO" << endl;
    } else {
        vector<int> t;
        vector<int> ans;
        bool found = Recrse(t, 1, n, tot / 2, ans);

        if (found) {
            cout << "YES" << endl;
            cout << ans.size() << endl;
            for (auto it : ans) cout << it << " ";
            cout << endl;

            cout << n - ans.size() << endl;
            for (int i = 1; i <= n; i++) {
                if (find(ans.begin(), ans.end(), i) == ans.end()) cout << i << " ";
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
