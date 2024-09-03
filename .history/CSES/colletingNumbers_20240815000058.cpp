#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int rounds = 1;  // At least one round is needed
    int max_collected = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max_collected + 1) {
            // If the current number is greater than the next expected number
            rounds++;  // Start a new round
            max_collected = arr[i];  // Update the max collected number
        } else {
            // Otherwise, continue in the same round
            max_collected = max(max_collected, arr[i]);
        }
    }

    cout << rounds << endl;

    return 0;
}
