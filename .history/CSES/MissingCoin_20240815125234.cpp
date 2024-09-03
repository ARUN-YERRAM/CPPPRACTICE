#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    
    // Sort the coins in increasing order
    sort(coins.begin(), coins.end());
    
    // Initialize the smallest sum that cannot be created
    int smallest_sum = 1;
    
    for (int i = 0; i < n; i++) {
        // If the current coin is greater than the smallest_sum,
        // we can't create smallest_sum, so break out of the loop
        if (coins[i] > smallest_sum) {
            break;
        }
        // Otherwise, add the current coin to the smallest_sum
        smallest_sum += coins[i];
    }
    
    // Output the result
    cout << smallest_sum << endl;
    
    return 0;
}
