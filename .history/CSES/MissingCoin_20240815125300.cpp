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

    sort(coins.begin(), coins.end());

    int smallest_sum = 1;
    
    for (int i = 0; i < n; i++) {
        if (coins[i] > smallest_sum)
            break;
        
        smallest_sum += coins[i];
    }
    
    // Output the result
    cout << smallest_sum << endl;
    
    return 0;
}
