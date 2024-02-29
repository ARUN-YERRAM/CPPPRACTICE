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
};

int main(){
    Graph graph(5);

    graph.addEdge(0,1);
    graph.addEdge(0,4);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(1,4);
    graph.addEdge(2,3);
    graph.addEdge(3,4);

    graph.print();
}


#include <iostream>
#include <vector>

using namespace std;

class Graph {
private:
    int V; // Number of vertices
    vector<vector<int>> adjList;

public:
    // Constructor to initialize the graph with V vertices
    Graph(int vertices) {
        V = vertices;
        adjList.resize(V);
    }

    // Function to add an edge between vertex u and vertex v
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // Assuming undirected graph
    }

    // Function to print the adjacency list representation of the graph
    void printGraph() {
        cout << "Adjacency List:" << endl;
        for (int i = 0; i < V; i++) {
            cout << "Vertex " << i << " :";
            for (int j = 0; j < adjList[i].size(); j++) {
                cout << " -> " << adjList[i][j];
            }
            cout << endl;
        }
    }
};

int main() {
    // Create a graph with 5 vertices
    Graph graph(5);

    // Add edges
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    // Print the adjacency list
    graph.printGraph();

    return 0;
}
