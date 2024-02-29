

// #include<iostream>
// using namespace std;

// class Graph{
//     public:
//     int a[5][5];
//     int size;
//     Graph(int size){
//         this->size = size;

//         for(int i=0;i<size;i++)
//             for(int j=0;j<size;j++)
//                 a[i][j] = 0;
//     }

//     void insertEdge(int startPoint,int endPoint){
//             a[startPoint][endPoint] = 1;
//             a[endPoint][startPoint] = 1;
//         }

//     void printMatrix(){
//             for(int i=0;i<size;i++){
//                 for(int j=0;j<size;j++)
//                     cout<<a[i][j]<<" ";
//                 cout<<endl;
//             }
//         }
// };

// class Node{
//     public:
//     int val;
//     Node*next;

//     Node(int val){
//         this -> val = val;
//         next = NULL;
//     }
// };

// void insertAtStart(Node* & head, int val){
//     Node* newNode = new Node(val);

//     newNode->next = head;
//     head = newNode;
// }

// void insertAtTail(Node* & head, int val){
//     Node* newNode = new Node(val);
//     Node* temp = head;

//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

// void insertAtPosition(Node* &head,int val, int pos){
//     if(pos==0){
//         insertAtStart(head,val);
//         return;
//     }
//     Node* new_node = new Node(val);
//     Node* temp = head;
//     int curr_pos = 0;
//     while(curr_pos!=pos-1){
//         temp = temp->next;
//         curr_pos++;
//     }
//     //  temp pointing to node at pos-1
//     new_node->next = temp->next;
//     temp->next = new_node;
// }

// void display(Node* &head){
//     Node*temp = head;
//     while(temp!=NULL){
//         cout<<temp->val<<"->";
//         temp=temp->next;
//     } cout<<"NULL"<<endl;
// }



// int main(){
//     Node*head = NULL;
//     insertAtStart(head,3);
//     insertAtStart(head,2);
//     display(head);
//     Graph g(5);
//     g.insertEdge(0,1);
//     g.insertEdge(0,4);
//     g.insertEdge(2,4);
//     g.insertEdge(2,3);
//     g.printMatrix();

// }


















#include <iostream>
#include<bits/stdc++.h>
#include <vector>

using namespace std;

class Graph {
public:
    int vertices;
    vector<vector<int>> adjacencyList;

    
    Graph(int v) : vertices(v), adjacencyList(v) {}

    
    void addEdge(int u, int v) {
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u); 
    }

    
    void printGraph() {
        for (int i = 0; i < vertices; ++i) {
            cout << "Adjacency list of vertex " << i << ": ";
            for (int j = 0; j < adjacencyList[i].size(); ++j)
                cout << adjacencyList[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {

    Graph graph(5);

    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);
    
    graph.printGraph();

    return 0;
}


































