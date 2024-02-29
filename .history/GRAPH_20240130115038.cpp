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
    
}


int main(){
    Node*head = NULL;
    insertAtStart(head,3);
    Graph g(5);
    g.insertEdge(0,1);
    g.insertEdge(0,4);
    g.insertEdge(2,4);
    g.insertEdge(2,3);
    g.printMatrix();

}

































