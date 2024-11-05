#include<bits/stdc++.h>
using namespace std;

int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        vector<int>vis(V,0);
        
        pq.push({0,0});
        
        int sum = 0;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            
            int node = it.second;
            int value = it.first;
            
            if(vis[node] == 1)continue;
            
            vis[node] = 1;
            
            sum += value;
            
            for(auto it:adj[node]){
                int adjnode = it[0];
                int edW = it[1];
                if(!vis[adjnode]){
                    pq.push({edW,adjnode});
                }
            }
        }
        return sum;
    }