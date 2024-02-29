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

void insertAtTail(Node*head,int val){
    Node*new_node= new Node(val);

    Node*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertAtPosition(Node*head,int pos,int val){
    Node*new_node 
    if(pos==0){
        insertAtHead(head,val);
    }
    else {
        int curr_pos = 0;
        Node*temp = head;
        while(curr_pos!=pos-1){
            temp = temp->next;
            curr_pos++;
        }
        new_node = temp->next;
        temp->next = new_node;
    }
}
int main(){

    

    return 0;
}