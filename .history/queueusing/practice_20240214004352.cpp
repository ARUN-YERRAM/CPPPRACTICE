#include<iostream>
using namespace std;

// // class Node{
// //     public:
// //     int val;
// //     Node* next;

// //     Node(int data){
// //         val = data;
// //         next = NULL;
// //     }
// // };

// // void insertAtHead(Node*&head,int val){
// //     Node* new_node = new Node(val);


// //     new_node->next = head;
// //     head = new_node;
// //     return;
// // }

// // void insertAtTail(Node*&head,int val){
// //     Node*new_node= new Node(val);

// //     Node*temp = head;
// //     while(temp->next!=NULL){
// //         temp = temp->next;
// //     }
// //     temp->next = new_node;
// // }

// // void insertAtPosition(Node*&head,int pos,int val){
// //     Node*new_node = new Node(val);

// //     if(pos==0)
// //         insertAtHead(head,val);
// //         // return;

// //     else {
// //         int curr_pos = 0;
// //         Node*temp = head;
// //         while(curr_pos!=pos-1){
// //             temp = temp->next;
// //             curr_pos++;
// //         }
// //         new_node->next = temp->next;
// //         temp->next = new_node;
// //         return;
// //     }
// // }

// // void updateAtPosition(Node*&head,int pos,int val){
// //     Node*new_node = new Node(val);
// //     Node*temp = head;

// //     if(pos==0)
// //         insertAtHead(head,val);
// //     else{
// //         int curr_pos = 0;
// //         while(curr_pos!=pos-1){
// //             temp = temp->next;
// //             curr_pos++;
// //         }
// //         temp->val = val;
// //         return;
// //     }
// // }

// // void display(Node*&head){
// //     Node*temp = head;
// //     while(temp){
// //         cout<<temp->val<<"->";
// //         temp = temp->next;
// //     } cout<<endl;
// // }

// // void deleteAtHead(Node*&head){
// //     if(!head) return;

// //     Node*temp = head;
// //     head=head->next;

// //     free(temp);
// //     return;
// // }

// // void deleteAtPosition(Node*&head,int pos){
// //         if(pos==0)
// //             deleteAtPosition(head,pos);
// //         else{
// //             int curr_pos = 0;
// //             Node*temp = head;
// //             while(curr_pos!=pos-1){
// //                 temp = temp->next;
// //                 curr_pos++;
// //             }
// //             Node*todelete = temp->next;
// //             temp->next = todelete->next;
// //             free(todelete);
// //         }
// // }

// // void deleteAtTail(Node*&head){
// //     // Node* 
// //     Node*temp = head;

// //     while(temp->next->next!=NULL){
// //         temp = temp->next;
// //     } temp->next = NULL;
// // }

// // int size(Node*&head){
// //     Node*temp = head;
// //     int cnt = 0;
// //     while(temp){
// //         temp=temp->next;
// //         cnt++;
// //     }
// //     return cnt;
// // }


// // int main(){

// //     Node*head = NULL;

// //     insertAtHead(head,10);
// //     insertAtHead(head,20);
// //     insertAtHead(head,30);
// //     insertAtHead(head,40);
// //     insertAtHead(head,50);
// //     display(head);
// //     insertAtTail(head,20);
// //     insertAtPosition(head,2,100);
// //     display(head);
// //     deleteAtHead(head);
// //     deleteAtTail(head);
// //     deleteAtPosition(head,3);
// //     display(head);
// //     cout<<size(head);
    
    

// //     return 0;
// // }








// // #include<iostream>
// // #include<bits/stdc++.h>
// // #include<vector>
// // #include<cmath>
// // #include<string.h>
// // #include<algorithm>
// // #include<unordered_map>
// // using namespace std;

// // class Node{
// //     public:
// //     int val;
// //     Node*prev;
// //     Node*next;

// //     Node(int data){
// //         val = data;
// //         prev = NULL;
// //         next = NULL;
// //     }
// // };
// // class DoublyLinkedList{
// //     public:
// //     Node* head;
// //     Node* tail;

// //     DoublyLinkedList(){
// //         head = NULL;
// //         tail = NULL;
// //     }

// //     void display(){
// //         Node* temp = head;
// //         while(temp!=NULL){
// //             cout<<temp->val<<"<->";
// //             temp = temp->next;
// //         }
// //         cout<<"NULL"<<endl;
// //     }
// //     void insertAtStart(int val){
        
// //         Node* new_node = new Node(val);
// //         if(head==NULL){
// //             head = new_node;
// //             tail = new_node;
// //             return;
// //         }

// //         new_node->next = head;
// //         head->prev = new_node;
// //         head = new_node;
// //     }

// //     void insertAtEnd(int val){

// //     Node* new_node = new Node(val);
// //     if(tail==NULL){
// //         head = new_node;
// //         tail = new_node;
// //         return;
// //     }

// //     tail->next = new_node;
// //     new_node->prev = tail;
// //     tail = new_node;
// //     return;
// //     }

// //     void insertAtPosition(int val, int k){

// //         // assuming k is less than or equal to length of doubly linked list
// //         Node*temp = head;
// //         int count = 1;
// //         while(count<k-1){
// //             temp = temp->next;
// //             count++;
// //         }

// //         //  temp will be pointing to node at (k-1)th position......
// //         Node* new_node = new Node(val);
// //         new_node->next = temp->next;
// //         temp->next = new_node;

// //         new_node->prev = temp;
// //         new_node->next->prev = new_node;
// //         return;

// //     }

// //     void deleteAtStart(){

// //         if(head==NULL){
// //             return;
// //         }

// //         Node* temp = head;
// //         head = head->next; 
// //         if(head==NULL){ // if doubly linkedlist had only 1 node
// //             tail = NULL;
// //         } else{
// //             head->prev = NULL;
// //         }
// //         free(temp);
// //     }

// //     void deleteAtEnd(){
// //         if(tail==NULL){
// //             return;
// //         }

// //         Node*temp = tail;
// //         tail = tail->prev;
// //         if(tail==NULL){
// //             head=NULL;
// //         }
// //         else{
// //             tail->next=NULL;
// //         }
// //         free(temp);
// //     }

// //     void deleteAtPosition(int k){
// //         //  assuming k is less than or equal to length of DoublyLinkedlist
// //         Node* temp = head;
// //         int count = 0;
// //         while(count<k-1){
// //             temp = temp->next;
// //             count++;
// //         }
// //         // now temp is pointing to node at kth position
// //         temp->prev->next = temp->next;
// //         temp->next->prev = temp->prev;
// //         free(temp);
// //     }
// // };

// // void reversed(Node* &head, Node* &tail){

// //     Node* &currPtr = head;
// //     while(currPtr){

// //         Node* temp = currPtr->next;
// //         currPtr->next = currPtr->prev;
// //         currPtr->prev = temp;
// //         currPtr = temp;
// //     }

// //     // swapping head and tail pointers...
// //     Node* newHead = tail;
// //     tail = head;
// //     head = newHead;
// // }

// // bool isPalindromeDLL(Node* head, Node* tail){

// //     while(head!=tail && tail!=head->prev){
// //         if(head->val!=tail->val){
// //             return false;
// //         }
// //         head = head->next;
// //         tail = tail->prev;
// //     }
// //     return true;
// // }

// // void deleteSameNeighbourNode(Node* &head,Node* tail){

// //     Node* currNode = tail->prev; //second last Node
// //     while(currNode!=head){
// //         Node* prevNode = currNode->prev;
// //         Node* nextNode = currNode-> next;
// //         if(prevNode->val==nextNode->val){
// //             // i need to delete the curr Node
// //             prevNode->next = nextNode;
// //             nextNode->prev = prevNode;
// //             free(currNode);
// //         }
// //         currNode = prevNode;
// //     }
// // }

// // bool isCriticalPoint(Node* &currNode){
// //     if(currNode->prev->val < currNode->val && currNode->next->val < currNode->val){
// //         return true;
// //     }
// //     if(currNode->prev->val > currNode->val && currNode->next->val > currNode->val){
// //         return true;
// //     }
// //     return false;
// // }

// // vector<int> distanceBetweenCriticalPoints(Node*head, Node*tail){
// //     vector<int> ans(2,INT_MAX);
// //     int firstCP = -1, lastCP = -1;

// //     Node* currNode = tail->prev;
// //     if(currNode==NULL){
// //         ans[0]=ans[1]=-1;
// //         return ans;
// //     }
// //     int currPos = 0;
// //     while(currNode->prev!=NULL){
// //         if(isCriticalPoint(currNode)){
// //             if(firstCP==-1){
// //                 firstCP=lastCP=currPos;
// //             }
// //             else{
// //                 ans[0] = min(ans[0],currPos-lastCP); //min distance
// //                 ans[1] = currPos - firstCP; // max distance
// //                 lastCP = currPos;
// //             }
// //         }
// //         currPos++;
// //         currNode = currNode->prev;
// //     }
// //         if(ans[0]==INT_MAX){
// //             ans[0]=ans[1]=-1;
// //         }
// //         return ans;
// // }

// // vector<int> pairSumDLL(Node* head, Node* tail, int x){

// //     vector<int> ans(2,-1);
// //     while(head!=tail){
// //         int sum = head->val + tail->val;
// //         if(sum==x){
// //             ans[0] = head->val;
// //             ans[1] = tail->val;
// //             return ans;
// //         }
// //         if(sum>x){ // i need small values , i will move tail back
// //             tail = tail->prev;
// //         }
// //         else{ // i need bigger values, i will move head forward
// //             head = head->next;
// //         }
// //     }
// //     return ans;
// // }
// // int main() {
// //     // Node* new_node = new Node(3);

// //     DoublyLinkedList dll;
   
   
   

// //     dll.insertAtStart(1);
// //     dll.display();
// //     dll.insertAtStart(2);
// //     dll.display();
// //     dll.insertAtStart(3);
// //     dll.display();
// //     dll.insertAtStart(4);

// //     dll.display();

// //     dll.insertAtEnd(1);
// //     dll.display();
    
    

    
    
    
    

// //     dll.insertAtPosition(4,2);
// //     dll.insertAtPosition(3,3);
// //     dll.insertAtPosition(1,3);
// //     dll.insertAtPosition(2,4);

// //     dll.display();
// //     // dll.deleteAtStart();
// //     // dll.display();
// //     dll.deleteAtEnd();
// //     dll.display();

// //     dll.deleteAtPosition(2);
// //     dll.display();
// //     reversed(dll.head,dll.tail);
// //     dll.display();
    
// //     return 0;
// // }

















// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// #include<cmath>
// #include<string.h>
// #include<algorithm>
// #include<unordered_map>
// using namespace std;

// class Node{
// public:
//     int val;
//     Node* next;
//     Node* prev;


//     Node(int data){
//         val = data;
//         prev = NULL;
//         next = NULL;
//     }
// };

// class CircularLinkedList{
// public:
//     Node* head;
//     Node* tail;

//     // tail->next = head;

//     CircularLinkedList(){
//         head = NULL;
//         // tail->next = head;
//         tail = NULL;
//     }

//     void display(){
//         if(head == NULL){
//             cout<<"Empty Circular Linkedlist "<<endl;
//             return;
//         }

//         Node* temp = head;
//         do{
//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }while(temp!=head);
//         cout<<endl;
//     }

//     void printCircular(){
//         Node* temp = head;
//         for(int i=0;i<15;i++){
//             cout<<temp->val<<"->";
//             temp = temp->next;
//         } cout<<endl;
//     }

//     void insertAtStart(int val) {

//         Node* new_node = new Node(val);
//         if(head ==NULL){
//             head = new_node;
//             // new_node->next = head;  // circular linkedlist...
//             tail = new_node;
//             new_node->next = head;
//             return;
//             }

//             Node* tail = head;
//             while(tail->next != head){
//                 tail = tail->next;
//             }
//             //  now tail is pointing to last Node

//             tail->next = new_node;
//             new_node->next = head;
//             head = new_node;

//         // new_node->next = head;
//         // head = new_node;
//         // tail->next = head;
// }

//     void insertAtEnd(int val){

//         Node* new_node = new Node(val);

//         if(head==NULL){
//             head = new_node;
//             tail = new_node;
//             new_node->next = head;
//             return;
//         }

//         Node*tail = head;
//         while(tail->next!=head){
//             tail = tail->next;
//         }
//         //  here tail is pointing to last node

//         tail->next = new_node;
//         new_node->next = head;
//         tail = new_node;
//     }

//     void insertAtPosition(int val, int pos){
//         if(pos==0){
//             insertAtStart(val);
//             return;
//         }
//         Node* new_node = new Node(val);
//         Node* temp = head;
//         int curr_pos = 0;
//         while(curr_pos!=pos-2){
//             temp = temp->next;
//             curr_pos++;
//         }
//         //  temp pointing to node at pos-1
//         new_node->next = temp->next;
//         temp->next = new_node;
// }

//     void deleteAtStart(){

//         if(head==NULL){
//             return;
//         }

//         Node* temp = head;
//         Node* tail = head;
//         while(tail->next!=head){
//             tail = tail->next;
//         }

//         head=head->next;
//         tail->next = head;
//         free(temp);
//     }

//     void deleteAtEnd(){

//         if(head==NULL){
//             return;
//         }

        
//     if (head == tail) {
//         // Only one node in the list
//         delete head;
//         head = tail = NULL;  // Reset both head and tail
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != tail) {
//         temp = temp->next;
//     }

//     // temp is pointing to the second last node
//     delete tail;
//     temp->next = head;  // Update the link
//     tail = temp;  // Update tail to the second last node


//         // Node* tail = head;
//         // while(tail->next->next!=head){
//         //         tail=tail->next;
//         // }
//         // //  here tail is pointing to second last node

//         // Node* temp = tail->next;
//         // tail->next = head;
//         // free(temp);
//     }

//     void deleteAtPosition(int pos){
        
//         if (head == NULL) {
//             return;
//     }   
//         if(pos==0){
//             // deleteAtStart();
//             // If deleting the head, update both head and tail
//             Node* temp = head;
//             head = head->next;
//             tail->next = head; // Update tail->next
//             free(temp);
//             return;
//         }

//         Node* temp = head;
//         int curr_pos = 1;

//         while(curr_pos!=pos-1 and temp->next != head){
//             temp = temp->next;
//             curr_pos++;
//         }
//         //  prev will be pointing to node at pos-1
//         Node* todelete = temp->next; // Node to be deleted
//         temp->next = temp->next->next;

//         // If the node to be deleted is the tail, update tail
//         if (todelete == tail) {
//             tail = temp;
//     }
//         // delete todelete;
//         free(todelete);
//     }

//     int countNodes() {
//         if (head == NULL) {
//             return 0; // Empty list
//         }

//         int count = 0;
//         Node* current = head;

//         do {
//             count++;
//             current = current->next;
//         } while (current != head);

//         return count;
//     }
// };

// // int size(Node* &head){
// //     Node* temp = head;

// //     int count = 0;
// //     while(temp!=head){
// //         count++;
// //         temp=temp->next;
// //     } return count;
// // }
// int main(){
//     CircularLinkedList cll;
//     cll.insertAtStart(3);
//         cll.display();
//     cll.insertAtStart(2);
//         cll.display();
//     cll.insertAtStart(1);
//         cll.display();
//     cll.insertAtStart(1);
//         cll.display();
//     cll.insertAtStart(123);
//         cll.display();
//     cll.insertAtStart(234);
//         cll.display();

//     // cll.display();
//     // cll.printCircular();
//     cll.insertAtEnd(8);
//     cll.display();
//     cll.insertAtPosition(23,2);
//     cll.display();
//     cll.deleteAtStart();
//     cll.display();
//     cll.deleteAtEnd();
//     cll.display();
//     // cll.deleteAtPosition(2);
//     // cll.display();
//     // cout<<cll.size();
//     int numberOfNodes = cll.countNodes(); // Assuming "cll" is an instance of CircularLinkedList
//     cout << "Number of nodes in the circular linked list: " << numberOfNodes << endl;


//     return 0;
// }


#include<vector>

using namespace std;


void countSort(vector<int> &v){
    int n = v.size();

    //  find the max element

    int max_ele = INT_MIN;
    for (int i=0;i<n;i++)
        max_ele = max(v[i],max_ele);
    

    //  create a freq array
    vector<int> freq(max_ele+1,0);
    for (int i=0;i<n;i++)
        freq[v[i]]++;
    

    //  calculate cumulative freq
    for (int i=1;i<=max_ele;i++)
        freq[i]+=freq[i-1];
    

    // calculate sorted array
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--)
        ans[--freq[v[i]]]=v[i];
    

    // copy back the ans to original array
    for (int i=0;i<n;i++)
        v[i]=ans[i];
}


int main(){

    // int n;
    // cin>>n;
    vector<int>a = {3,45,36,56,3224,54,26,75};

    // for (int i=0;i<n;i++){
        // cin>>a[i];
    // }

    countSort(a);
    int n = 8;

    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}





 
void countSort(vector<int> &v, int pos){
// 
    int n = v.size();
    // create  freq array
    vector<int> freq(10,0);
    
    for (int i=0;i<n;i++){
        freq[(v[i]/pos)%10]++;
    }
// 
    //  cumulative freq
    for (int i=1;i<10;i++){
        freq[i]+=freq[i-1];
    }
// 
    //  ans array
    vector<int> ans(n);
    for (int i=n-1;i>=0;i--){
        ans[--freq[(v[i]/pos)%10]] = v
    }
// 
    // copy it to original array..
    for (int i=0;i<n;i++){
        v[i]=ans[i];
    }
}
// 
// 
void radixSort(vector<int> &v){
// 
    int max_ele = INT_MIN;
    for (auto x:v){
        max_ele = max(x,max_ele);
    }
// 
    for(int pos = 1;max_ele/pos > 0;pos*=10)
        countSort(v,pos);
}
// 
int main() {
    // int n;
    // cin>>n;
// 
    vector<int> v = {34,65,34,32,37,875,63,47};
    // for (int i=0;i<n;i++){
        // cin>>v[i];
    // }
// 
    radixSort(v);
    int n = 8;
    for (int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}







