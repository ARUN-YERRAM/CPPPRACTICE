#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node*head,int val){
    Node* new_node = new Node(val);

    if(head==NULL){
        head = new_node;
        return; 
    }
    else{
        new_node->next = head;
        head = new_node;
        return;
    }
}

void insertAt
int main(){

    

    return 0;
}