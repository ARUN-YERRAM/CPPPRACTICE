#include<bits/stdc++.h>
using namespace std;
// using ..............adjacency Matrix and adjacency List..........
int main(){
    int v,e;
    cin>>v>>e;

    vector<vector<bool>>adj(v,vector<bool>(v,0));
    int a,b;

    for(int i=0;i<v;i++){
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<adj[i][j]<<" ";
        }cout<<endl;
    }


    return 0;
}
