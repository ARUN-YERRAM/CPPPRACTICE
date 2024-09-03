#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    long long int cnt = 0;
    long long int divisor = 5;
    
    while (n / divisor > 0) {
        cnt += n / divisor;
        divisor *= 5;
    }

    cout << cnt << endl;
    return 0;
}
