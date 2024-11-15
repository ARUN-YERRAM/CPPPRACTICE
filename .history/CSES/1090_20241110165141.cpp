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

    
    
    return 0;
}
