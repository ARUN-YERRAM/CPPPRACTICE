#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<pair<int,vector<int>int>>adj[m];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        // adj[v].push_back({u,w});
    }
    vector<int>res;
    res.push_back(0);

    return 0;
}