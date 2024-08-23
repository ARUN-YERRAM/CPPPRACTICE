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
    for(auto it:vp){
        int l = it.first;
        int s = it.second;
        swap(t[l-1],t[s-1]);
        map<int,int>mp;
        
    }
    return 0;
}
