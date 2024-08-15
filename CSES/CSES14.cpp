#include <bits/stdc++.h>
using namespace std;

void solve(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 0) return;
    
    // Move n-1 disks from 'from_rod' to 'aux_rod' using 'to_rod'
    solve(n - 1, from_rod, aux_rod, to_rod);
    
    // Move the nth disk from 'from_rod' to 'to_rod'
    // cout << "Move disk " << n << " from " << from_rod << " to " << to_rod << endl;
    
    // Move the n-1 disks from 'aux_rod' to 'to_rod' using 'from_rod'
    solve(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n;
    cin >> n;
    solve(n, 'L', 'R', 'M');
    return 0;
}
