#include<bits/stdc++.h>
using namespace std;

// int main(){
//     string line;
//     getline(cin,line);

//     stringstream ss(line);
//     vector<string>vec;
//     string word;

//     while(ss >> word){
//         vec.push_back(word);
//     }

//     for(int i=vec.size()-1;i>=0;i--){
//         cout << vec[i] << " ";
//     }
//     return 0;
// }

int main(){
    int n;
    cin>>n;

    vector<string>vec;
    for(int i=0;i<n;i++){
        string word;
        cin>>word;
        vec.push_back(word);
    }
    int mn = INT_MAX;
    bool f = true;
    string ans = "";
    for(auto it:vec)mn = min(mn,it.size());
    for(int i=0;i<mn;i++){
        char ch = vec[i][0];

        for(auto it:vec){
            if(it[i] != ch){
                f = false;
                break;
            }
        }if(f)ans += ch;
    }return ans;
    return 0;
}