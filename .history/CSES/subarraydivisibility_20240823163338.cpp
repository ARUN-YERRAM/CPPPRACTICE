#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<long long, long long> remainder_count;
    remainder_count[0] = 1; 
    long long sum = 0;
    long long count = 0;

    for (long long i = 0; i < n; i++) {
        sum += a[i];

        long long remainder = ((sum % n) + n) % n;

        if (remainder_count.find(remainder) != remainder_count.end()) {
            count += remainder_count[remainder];
        }
        remainder_count[remainder]++;
    }

    cout << count << endl;

    return 0;
}
