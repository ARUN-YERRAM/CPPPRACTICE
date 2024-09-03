#include <bits/stdc++.h>
using namespace std;

// Function to count the number of 1s in binary representations from 1 to n
long long countOneBits(long long n) {
    long long count = 0;
    
    for (long long i = 1; i <= n; i <<= 1) {
        long long complete_groups = (n / (i << 1)) * i;
        long long remainder = max(0LL, (n % (i << 1)) - i + 1);
        
        count += complete_groups + remainder;
    }
    
    return count;
}

int main() {
    long long n;
    cin >> n;
    cout << countOneBits(n) << endl;
    return 0;
}
