#include <bits/stdc++.h>
using namespace std;

// void Recrse(string &str, vector<string> &vec, int n, int i, string st) {
//     if (i == n) {
//         if (find(vec.begin(), vec.end(), st) == vec.end()) {
//             vec.push_back(st);
//         }
//         return;
//     }

//     // Include the current character
//     st += str[i];
//     Recrse(str, vec, n, i + 1, st);
    
//     // Exclude the current character
//     st.pop_back();
//     Recrse(str, vec, n, i + 1, st);
// }

int main() {
    string str;
    cin >> str;
    vector<string> vec;
    int n = str.size();

    // Recrse(str, vec, n, 0, "");

    do{
        
    }while(next_permutation(str.begin(),str.end()));

    cout << vec.size() << endl;
    for (auto it : vec) {
        cout << it << endl;
    }
    cout << endl;

    return 0;
}
