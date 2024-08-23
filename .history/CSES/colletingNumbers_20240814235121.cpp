#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    int rounds = 0;
    int maxCollected = 0;

    for (int i = 0; i < n; i++) {
        if (x[i] == maxCollected + 1) {
            maxCollected++;
        } else if (x[i] > maxCollected) {
            rounds++;
            maxCollected = x[i];
        }
    }
    
    cout << rounds << endl;
    
    return 0;
}
