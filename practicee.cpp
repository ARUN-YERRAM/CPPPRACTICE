#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<string.h>
#include<algorithm>
#include<unordered_map>
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

void insertAtHead(Node* &head, int data){
    Node* new_node = new Node(data);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(Node* &head, int val){
    Node* new_node = new Node(val);
    Node*temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertAtPosition(Node* & head, int pos, int data){
    if(pos==0){
        insertAtHead(head,data);
        return;
    }

    Node* new_node = new Node(data);
    Node*temp = head;
    int curr_pos = 0;
    while(curr_pos!=pos-1){
        temp=temp->next;
        curr_pos++;
    } new_node->next = temp->next;
    temp->next = new_node;
}
void display(Node* &head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    } cout<<"NULL"<<endl;
}
int main(){
    Node* head = NULL;

    insertAtHead(head,3);
    display(head);
    insertAtHead(head,5);
    display(head);
    insertAtTail(head,2);
    display(head);

    insertAtPosition(head,1,19);
    display(head);
}