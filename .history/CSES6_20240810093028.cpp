#include<bits/stdc++.h>
using namespace std;

vector<int> Recrse(vector<int> t, int i, int n, int sum){
    // If the sum is greater than n/2, return the empty vector
    if(sum > n i) return {};

    // If the current sum equals n/2, return the current subset
    if(sum == n){
        return t;
    }

    // If we've reached the last element, return an empty vector
    if(i > n) return {};

    // Include the current element and recur
    t.push_back(i);
    vector<int> res1 = Recrse(t, i + 1, n, sum + i);

    // If the subset was found, return it
    if(!res1.empty()) return res1;

    // Exclude the current element and recur
    t.pop_back();
    vector<int> res2 = Recrse(t, i + 1, n, sum);

    // Return the result from excluding the element
    return res2;
}

int main(){
    int n;
    cin >> n;

    long long int tot = 0;
    vector<int> t;

    // Calculate the total sum of numbers from 1 to n
    for(int i = 1; i <= n; i++){
        tot += i;
    }

    // If the total sum is not divisible by 2, we cannot partition into two subsets with equal sum
    if(tot % 2 != 0) {
        cout << "NO" << endl;
    } else {
        vector<int> ans = Recrse(t, 1, tot / 2, 0);
        cout << "YES" << endl;
        cout << ans.size() << endl;
        for(auto it : ans) cout << it << " ";
        cout << endl;

        cout << n - ans.size() << endl;
        for(int i = 1; i <= n; i++)
            if(find(ans.begin(), ans.end(), i) == ans.end()) cout << i << " ";
        cout << endl;
    }
    return 0;
}
