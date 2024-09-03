#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;

    cin>>n>>m;

    vector<int>t;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        t.push_back(a);
    }
    vector<pair<int,int>>vp;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        vp.push_back({a,b});
    }
    map<int,int>mp;
    for(int i=0;i<n;i++)
        mp[t[i]] = i;
    vector<int>idx;
    for(auto it:mp)
        idx.push_back(it.second);
    for(auto it:vp){
        int l = it.first;
        int s = it.second;
        int f = mp[t[l-1]];
        int S = mp[t[s-1]];
        swap(t[l-1],t[s-1]);
        mp[t[l-1]] = S;
        mp[t[s-1]] = f;

        swap(idx[t[l-1]],idx[t[s-1]]);
        
        int cnt = 0;
        for(int i=0;i<idx.size()-1;i++){
            if(idx[i] < idx[i+1])
                continue;
            else cnt++;
        }cout<<cnt<<endl;
        // swap(t[l-1],t[s-1]);
    }
    return 0;
}
// 5 3
// 4 2 1 5 3
// 2 3
// 1 5
// 2 3