

#include<iostream>
using namespace std;

class Graph{
    public:
    int a[5][5];
    int size;
    Graph(int size){
        this->size = size;

        for(int i=0;i<size;i++)
            for(int j=0;j<size;j++)
                a[i][j] = 0;
    }

    void insertEdge(int startPoint,int endPoint){
            a[startPoint][endPoint] = 1;
            a[endPoint][startPoint] = 1;
        }

    void printMatrix(){
            for(int i=0;i<size;i++){
                for(int j=0;j<size;j++)
                    cout<<a[i][j]<<" ";
                cout<<endl;
            }
        }
};

class Node{
    public:
    int val;
    Node*next;

    Node(int val){
        this -> val = val;
        next = NULL;
    }
};

void insertAtStart(Node* & head, int val){
    Node* newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* & head, int val){
    Node* newNode = new Node(val);
    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(Node* &head,int val, int pos){
    if(pos==0){
        insertAtStart(head,val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp = head;
    int curr_pos = 0;
    while(curr_pos!=pos-1){
        temp = temp->next;
        curr_pos++;
    }
    //  temp pointing to node at pos-1
    new_node->next = temp->next;
    temp->next = new_node;
}

void display(Node* &head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    } cout<<"NULL"<<endl;
}


void deleteAtHead(Node* &head){
    // 
    Node* todelete = head;
    head = head->next;
    // delete todelete;
    free(todelete);
}

void deleteAtTail(Node* &head){
    
    Node* second_last = head;
    while(second_last->next->next!=NULL){
        second_last = second_last->next;
    }
    // second_last will be pointing to last node
    Node *temp = second_last->next;  // Node to be deleted
    second_last->next = NULL;
    // delete temp;
    free(temp);
}

void deleteAtPosition(Node* &head,int pos){
    
    if(pos==0){
        deleteAtHead(head);
        return;
    }
    Node* prev = head;
    int curr_pos = 0;
    while(curr_pos!=pos-1){
        prev = prev->next;
        curr_pos++;
    }
    //  prev will be pointing to node at pos-1
    Node* todelete = prev->next; // Node to be deleted
    prev->next = prev->next->next;
    // delete todelete;
    free(todelete);
}



int main(){
    Node*head = NULL;
    insertAtStart(head,3);
    insertAtStart(head,2);
    display(head);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    insertAtPosition(head,12,2);
    display(head);
    insertAtPosition(head,123,1);
    display(head);

    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    deleteAtPosition(head,2);
    display(head);

    Graph g(5);
    g.insertEdge(0,1);
    g.insertEdge(0,4);
    g.insertEdge(2,4);
    g.insertEdge(2,3);
    g.printMatrix();

}
















// 
// 
// #include <iostream>
// #include<bits/stdc++.h>
// #include <vector>
// 
// using namespace std;
// 
// class Graph {
// public:
    // int vertices;
    // vector<vector<int>> adjacencyList;
// 
    // 
    // Graph(int v) : vertices(v), adjacencyList(v) {}
// 
    // 
    // void addEdge(int u, int v) {
        // adjacencyList[u].push_back(v);
        // adjacencyList[v].push_back(u); 
    // }
// 
    // 
    // void printGraph() {
        // for (int i = 0; i < vertices; ++i) {
            // cout << "Adjacency list of vertex " << i << ": ";
            // for (int j = 0; j < adjacencyList[i].size(); ++j)
                // cout << adjacencyList[i][j] << " ";
            // cout << endl;
        // }
    // }
// };
// 
// int main() {
// 
    // Graph graph(5);
// 
    // graph.addEdge(0, 1);
    // graph.addEdge(0, 4);
    // graph.addEdge(1, 2);
    // graph.addEdge(1, 3);
    // graph.addEdge(1, 4);
    // graph.addEdge(2, 3);
    // graph.addEdge(3, 4);
    // 
    // graph.printGraph();
// 
    // return 0;
// }
// 
// 
// 




