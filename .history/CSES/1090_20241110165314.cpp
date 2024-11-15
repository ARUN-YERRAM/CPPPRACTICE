#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long int x;
    cin >> n >> x;

    vector<long long int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    // vector<long long int> t1 = t;
    sort(t.begin(), t.end());

    int i = 0,j = n-1;
    long long int cnt = 0;
    while(t.size() != 0){
        while(i < j){
            if(t[i] + t[j] <= x){
                
            }
        }
    }

    cout<<cnt<<endl;

    return 0;
}
