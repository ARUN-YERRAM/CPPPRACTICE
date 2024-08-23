#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    int rounds = 0;
    int current = 1;
    int lastIndex = -1;

    while (current <= n) {
        auto it = find(t.begin() + lastIndex + 1, t.end(), current);

        if (it != t.end()) {
            // If we found the current number, move to the next one
            lastIndex = distance(t.begin(), it); // Update the index
            current++; // Increment to search for the next number
        } else {
            // If the current number is not found, increment rounds
            rounds++;
            lastIndex = -1; // Restart search from the beginning
        }
    }

    cout << rounds << endl;

    return 0;
}
