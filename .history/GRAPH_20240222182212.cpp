#include<bits/stdc++.h>
using namespace std;

class Graph{
    private:
        int V;
        vector<vector<int>>adj;

    public:
        Graph(int V){
            this->V = V;
            adj.resize(V,vector<int>())
        }

}