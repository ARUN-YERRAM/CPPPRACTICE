#include<bits/stdc++.h>
using namespace std;

class Graph{
    private:
        int V;
        vector<vector<int>>adj;

    public:
        Graph(int V){
            this->V = V;
            adj.resize(V,vector<int>(V,0));
        }


        void addEdge(int u,int v){
            adj[u][v] = 1;
            adj[v][u] = 1;
        }

        void print(){
            for(int i=0;i<V;i++){
                for(int j=0;j<V;j++){
                    cout<<adj[i][j]<<" ";
                } cout<<endl;
            }
        }

}