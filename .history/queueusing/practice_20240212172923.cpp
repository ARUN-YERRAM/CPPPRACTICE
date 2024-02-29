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

void insertAtHead(Node*&head,int val){
    Node* new_node = new Node(val);


    new_node->next = head;
    head = new_node;
    return;
}

void insertAtTail(Node*&head,int val){
    Node*new_node= new Node(val);

    Node*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertAtPosition(Node*&head,int pos,int val){
    Node*new_node = new Node(val);

    if(pos==0)
        insertAtHead(head,val);
        // return;

    else {
        int curr_pos = 0;
        Node*temp = head;
        while(curr_pos!=pos-1){
            temp = temp->next;
            curr_pos++;
        }
        new_node->next = temp->next;
        temp->next = new_node;
        return;
    }
}

void updateAtPosition(Node*&head,int pos,int val){
    Node*new_node = new Node(val);
    Node*temp = head;

    if(pos==0)
        insertAtHead(head,val);
    else{
        int curr_pos = 0;
        while(curr_pos!=pos-1){
            temp = temp->next;
            curr_pos++;
        }
        temp->val = val;
        return;
    }
}

void display(Node*&head){
    Node*temp = head;
    while(temp){
        cout<<temp->val<<"->";
        temp = temp->next;
    } cout<<endl;
}

void deleteAtHead(Node*&head){
    if(!head) return;

    Node*temp = head;
    head=head->next;

    free(temp);
    return;
}

void deleteAtPosition(Node*&head,int pos){
        if(pos==0)
            deleteAtPosition(head,pos);
        else{
            int curr_pos = 0;
            Node*temp = head;
            while(curr_pos!=pos-1){
                temp = temp->next;
                curr_pos++;
            }
            Node*todelete = temp->next;
            temp->next = todelete->next;
            free(todelete);
        }
}

void deleteAtTail(Node*&head){
    // Node* 
    Node*temp = head;

    while(temp->next->next!=NULL){
        temp = temp->next;
    } temp->next = NULL;
}

int size(Node*&head){
    Node*temp = head;
    int cnt = 0;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}


int main(){

    Node*head = NULL;

    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    display(head);
    insertAtTail(head,20);
    insertAtPosition(head,2,100);
    display(head);
    deleteAtHead(head);
    deleteAtTail(head);
    deleteAtPosition(head,);
    display(head);
    
    

    return 0;
}