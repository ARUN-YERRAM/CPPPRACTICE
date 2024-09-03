#include <iostream>
#include <vector>

using namespace std;

void divideIntoTwoSets(int n) {
    long long total_sum = (long long)n * (n + 1) / 2;
    

    if (total_sum % 2 != 0) {
        cout << "NO" << endl;
        return;
    }
    
    cout << "YES" << endl;
    
    long long half_sum = total_sum / 2;
    vector<int> set1, set2;
    

    for (int i = n; i >= 1; --i) {
        if (half_sum >= i) {
            set1.push_back(i);
            half_sum -= i;
        } else {
            set2.push_back(i);
        }
    }
    
    // Output the first set
    cout << set1.size() << endl;
    for (int x : set1) {
        cout << x << " ";
    }
    cout << endl;
    
    // Output the second set
    cout << set2.size() << endl;
    for (int x : set2) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    divideIntoTwoSets(n);
    return 0;
}
