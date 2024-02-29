// #include<bits/stdc++.h>
// using namespace std;

// class Graph{
//     private:
//         int V;
//         vector<vector<int>>adj;

//     public:
//         Graph(int V){
//             this->V = V;
//             adj.resize(V,vector<int>(V,0));
//         }


//         void addEdge(int u,int v){
//             adj[u][v] = 1;
//             adj[v][u] = 1;
//         }

//         void print(){
//             for(int i=0;i<V;i++){
//                 for(int j=0;j<V;j++){
//                     cout<<adj[i][j]<<" ";
//                 } cout<<endl;
//             }
//         }
// };

// int main(){
//     Graph graph(5);

//     graph.addEdge(0,1);
//     graph.addEdge(0,4);
//     graph.addEdge(1,2);
//     graph.addEdge(1,3);
//     graph.addEdge(1,4);
//     graph.addEdge(2,3);
//     graph.addEdge(3,4);

//     graph.print();
// }

#include<bits/stdc++.h>
using namespace std;
class Graph{
    private:
    int V;
    vector<vector<int>>vec;

    public:
    Graph(int V){
        this->V = V;
        vec.resize(V);
    }

    void addEdge(int u,int v){
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    void print(){
        cout<<"Adjacency List:"<<endl;
        for(int i=0;i<V;i++){
            cout<<"Vertex "<<i<<" :"
            for(int j=0;j<vec[i].size();j++){
                cout<<"->"<<vec[i][j]<<" ";
            } cout<<endl;
        }
    }
};