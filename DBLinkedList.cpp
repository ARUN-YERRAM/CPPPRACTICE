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
    Node* prev;
    Node* next;

    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void insertAtStart(int val){
        
        Node* new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            tail = new_node;
            return;
        }

        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }

    void insertAtEnd(int val){

    Node* new_node = new Node(val);
    if(tail==NULL){
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
    return;
    }

    void insertAtPosition(int val, int k){

        // assuming k is less than or equal to length of doubly linked list
        Node*temp = head;
        int count = 1;
        while(count<k-1){
            temp = temp->next;
            count++;
        }

        //  temp will be pointing to node at (k-1)th position......
        Node* new_node = new Node(val);
        new_node->next = temp->next;
        temp->next = new_node;

        new_node->prev = temp;
        new_node->next->prev = new_node;
        return;

    }

    void deleteAtStart(){

        if(head==NULL){
            return;
        }

        Node* temp = head;
        head = head->next; 
        if(head==NULL){ // if doubly linkedlist had only 1 node
            tail = NULL;
        } else{
            head->prev = NULL;
        }
        free(temp);
    }

    void deleteAtEnd(){
        if(tail==NULL){
            return;
        }

        Node*temp = tail;
        tail = tail->prev;
        if(tail==NULL){
            head=NULL;
        }
        else{
            tail->next=NULL;
        }
        free(temp);
    }

    void deleteAtPosition(int k){
        //  assuming k is less than or equal to length of DoublyLinkedlist
        Node* temp = head;
        int count = 0;
        while(count<k-1){
            temp = temp->next;
            count++;
        }
        // now temp is pointing to node at kth position
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
};

void reversed(Node* &head, Node* &tail){

    Node* &currPtr = head;
    while(currPtr){

        Node* temp = currPtr->next;
        currPtr->next = currPtr->prev;
        currPtr->prev = temp;
        currPtr = temp;
    }

    // swapping head and tail pointers...
    Node* newHead = tail;
    tail = head;
    head = newHead;
}

bool isPalindromeDLL(Node* head, Node* tail){

    while(head!=tail && tail!=head->prev){
        if(head->val!=tail->val){
            return false;
        }
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

void deleteSameNeighbourNode(Node* &head,Node* tail){

    Node* currNode = tail->prev; //second last Node
    while(currNode!=head){
        Node* prevNode = currNode->prev;
        Node* nextNode = currNode-> next;
        if(prevNode->val==nextNode->val){
            // i need to delete the curr Node
            prevNode->next = nextNode;
            nextNode->prev = prevNode;
            free(currNode);
        }
        currNode = prevNode;
    }
}

bool isCriticalPoint(Node* &currNode){
    if(currNode->prev->val < currNode->val && currNode->next->val < currNode->val){
        return true;
    }
    if(currNode->prev->val > currNode->val && currNode->next->val > currNode->val){
        return true;
    }
    return false;
}

vector<int> distanceBetweenCriticalPoints(Node*head, Node*tail){
    vector<int> ans(2,INT_MAX);
    int firstCP = -1, lastCP = -1;

    Node* currNode = tail->prev;
    if(currNode==NULL){
        ans[0]=ans[1]=-1;
        return ans;
    }
    int currPos = 0;
    while(currNode->prev!=NULL){
        if(isCriticalPoint(currNode)){
            if(firstCP==-1){
                firstCP=lastCP=currPos;
            }
            else{
                ans[0] = min(ans[0],currPos-lastCP); //min distance
                ans[1] = currPos - firstCP; // max distance
                lastCP = currPos;
            }
        }
        currPos++;
        currNode = currNode->prev;
    }
        if(ans[0]==INT_MAX){
            ans[0]=ans[1]=-1;
        }
        return ans;
}

vector<int> pairSumDLL(Node* head, Node* tail, int x){

    vector<int> ans(2,-1);
    while(head!=tail){
        int sum = head->val + tail->val;
        if(sum==x){
            ans[0] = head->val;
            ans[1] = tail->val;
            return ans;
        }
        if(sum>x){ // i need small values , i will move tail back
            tail = tail->prev;
        }
        else{ // i need bigger values, i will move head forward
            head = head->next;
        }
    }
    return ans;
}
int main() {
    Node* new_node = new Node(3);

    DoublyLinkedList dll;
    // dll.head = new_node;
    // dll.tail = new_node;
    // cout<<dll.head->val<<endl;

    dll.insertAtStart(1);
    dll.display();
    dll.insertAtStart(2);
    dll.display();
    dll.insertAtStart(3);
    dll.display();
    dll.insertAtStart(4);

    dll.display();

    dll.insertAtEnd(1);
    dll.display();
    // dll.deleteAtStart();
    // dll.display();

    // dll.insertAtEnd(2);
    // dll.display();
    // dll.insertAtEnd(3);
    // dll.display();

    dll.insertAtPosition(4,2);
    dll.insertAtPosition(3,3);
    dll.insertAtPosition(1,3);
    dll.insertAtPosition(2,4);

    dll.display();
    // dll.deleteAtStart();
    // dll.display();
    dll.deleteAtEnd();
    dll.display();

    dll.deleteAtPosition(2);
    dll.display();

    // dll.insertAtEnd(1);
    // dll.insertAtEnd(2);
    // dll.insertAtEnd(2);
    // dll.insertAtEnd(5);
    // dll.insertAtEnd(6);
    // dll.insertAtEnd(7);
    // dll.insertAtEnd(8);

    // dll.insertAtEnd(3);
    // dll.display();
    reversed(dll.head,dll.tail);
    dll.display();
    // cout<<isPalindromeDLL(dll.head,dll.tail)<<endl;
    // dll.display();
    // deleteSameNeighbourNode(dll.head,dll.tail);
    // vector<int> ans = distanceBetweenCriticalPoints(dll.head, dll.tail);
    // cout<<ans[0]<<" "<<ans[1]<<endl;
    // vector<int> res = pairSumDLL(dll.head,dll.tail,11);
    // cout<<res[0]<<" "<<res[1]<<endl;

    // dll.display();



    
    return 0;
}