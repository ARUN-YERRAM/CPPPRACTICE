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
    Node* prev;


    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class CircularLinkedList{
public:
    Node* head;
    Node* tail;

    // tail->next = head;

    CircularLinkedList(){
        head = NULL;
        // tail->next = head;
        tail = NULL;
    }

    void display(){
        if(head == NULL){
            cout<<"Empty Circular Linkedlist "<<endl;
            return;
        }

        Node* temp = head;
        do{
            cout<<temp->val<<"->";
            temp = temp->next;
        }while(temp!=head);
        cout<<endl;
    }

    void printCircular(){
        Node* temp = head;
        for(int i=0;i<15;i++){
            cout<<temp->val<<"->";
            temp = temp->next;
        } cout<<endl;
    }

    void insertAtStart(int val) {

        Node* new_node = new Node(val);
        if(head ==NULL){
            head = new_node;
            // new_node->next = head;  // circular linkedlist...
            tail = new_node;
            new_node->next = head;
            return;
            }

            Node* tail = head;
            while(tail->next != head){
                tail = tail->next;
            }
            //  now tail is pointing to last Node

            tail->next = new_node;
            new_node->next = head;
            head = new_node;

        // new_node->next = head;
        // head = new_node;
        // tail->next = head;
}

    void insertAtEnd(int val){

        Node* new_node = new Node(val);

        if(head==NULL){
            head = new_node;
            tail = new_node;
            new_node->next = head;
            return;
        }

        Node*tail = head;
        while(tail->next!=head){
            tail = tail->next;
        }
        //  here tail is pointing to last node

        tail->next = new_node;
        new_node->next = head;
        tail = new_node;
    }

    void insertAtPosition(int val, int pos){
        if(pos==0){
            insertAtStart(val);
            return;
        }
        Node* new_node = new Node(val);
        Node* temp = head;
        int curr_pos = 0;
        while(curr_pos!=pos-2){
            temp = temp->next;
            curr_pos++;
        }
        //  temp pointing to node at pos-1
        new_node->next = temp->next;
        temp->next = new_node;
}

    void deleteAtStart(){

        if(head==NULL){
            return;
        }

        Node* temp = head;
        Node* tail = head;
        while(tail->next!=head){
            tail = tail->next;
        }

        head=head->next;
        tail->next = head;
        free(temp);
    }

    void deleteAtEnd(){

        if(head==NULL){
            return;
        }

        
    if (head == tail) {
        // Only one node in the list
        delete head;
        head = tail = NULL;  // Reset both head and tail
        return;
    }

    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }

    // temp is pointing to the second last node
    delete tail;
    temp->next = head;  // Update the link
    tail = temp;  // Update tail to the second last node


        // Node* tail = head;
        // while(tail->next->next!=head){
        //         tail=tail->next;
        // }
        // //  here tail is pointing to second last node

        // Node* temp = tail->next;
        // tail->next = head;
        // free(temp);
    }

    void deleteAtPosition(int pos){
        
        if (head == NULL) {
            return;
    }   
        if(pos==0){
            // deleteAtStart();
            // If deleting the head, update both head and tail
            Node* temp = head;
            head = head->next;
            tail->next = head; // Update tail->next
            free(temp);
            return;
        }

        Node* temp = head;
        int curr_pos = 1;

        while(curr_pos!=pos-1 and temp->next != head){
            temp = temp->next;
            curr_pos++;
        }
        //  prev will be pointing to node at pos-1
        Node* todelete = temp->next; // Node to be deleted
        temp->next = temp->next->next;

        // If the node to be deleted is the tail, update tail
        if (todelete == tail) {
            tail = temp;
    }
        // delete todelete;
        free(todelete);
    }

    int countNodes() {
        if (head == NULL) {
            return 0; // Empty list
        }

        int count = 0;
        Node* current = head;

        do {
            count++;
            current = current->next;
        } while (current != head);

        return count;
    }
};

// int size(Node* &head){
//     Node* temp = head;

//     int count = 0;
//     while(temp!=head){
//         count++;
//         temp=temp->next;
//     } return count;
// }
int main(){
    CircularLinkedList cll;
    cll.insertAtStart(3);
        cll.display();
    cll.insertAtStart(2);
        cll.display();
    cll.insertAtStart(1);
        cll.display();
    cll.insertAtStart(1);
        cll.display();
    cll.insertAtStart(123);
        cll.display();
    cll.insertAtStart(234);
        cll.display();

    // cll.display();
    // cll.printCircular();
    cll.insertAtEnd(8);
    cll.display();
    cll.insertAtPosition(23,2);
    cll.display();
    cll.deleteAtStart();
    cll.display();
    cll.deleteAtEnd();
    cll.display();
    // cll.deleteAtPosition(2);
    // cll.display();
    // cout<<cll.size();
    int numberOfNodes = cll.countNodes(); // Assuming "cll" is an instance of CircularLinkedList
    cout << "Number of nodes in the circular linked list: " << numberOfNodes << endl;


    return 0;
}