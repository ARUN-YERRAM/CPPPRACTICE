#include<bits/stdc++.h>
using namespace std;
// using ..............adjacency Matrix and adjacency List..........
int main(){
    int v,e;
    cin>>v>>e;
// undirected and unweighted graph..........
re
    vector<vector<bool>>adj(v,vector<bool>(v,0));
    // int a,b;

    for(int i=0;i<v;i++){
        int a,b;
        cin>>a>>b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }

    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<adj[i][j]<<" ";
        }cout<<endl;
    }


    return 0;
}
