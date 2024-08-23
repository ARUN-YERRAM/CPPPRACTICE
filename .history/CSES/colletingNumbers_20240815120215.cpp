#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int>t;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        t.push_back(a);
    }
    map<int,int>mp;
    for(int i = 0;i<n;i++)
        mp[t[i]] = i;
    vector<int>idx;
    for(auto it:mp)
        idx.push_back(it.second);
    int cnt = 0;
    for(int i=0;i<idx.size();i++){
        if(idx[i] < idx[i+1]){
            continue;
        }else cnt++;
    }cout<<cnt<<endl;
}
