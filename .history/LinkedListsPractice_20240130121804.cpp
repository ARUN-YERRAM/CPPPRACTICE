#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<string.h>
#include<algorithm>
#include<unordered_map>
using namespace std;

//  PRACTICE......


// delete duplicates from linkedlist........which is sorted......
// delete node at alternate position......
// To reversePrint linkedlist.......... // traversing in reverse order.....
// To reverse linkedlist..........
// To reverse linkedlist.......... using recursion......
// To reverse k nodes of linkedlist..........
// To check whether two linkedlist are equal or not.....
// To find intersection of two linkedlist.....
// To remove  Kth node from end of list and return its head.....
// Merge two sorted linkedlist into one linkedlist...
// Merge K linkedlist which are sorted.......
// Find Middle Element of linkedlist....
// To determine cycle is present or not in Linkedlist.....
// To remove cycle from LinkedList.....
// To determine linkedlist is palindrome or not....
// 








class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int val){
        Node* new_node = new Node(val);

        if(head==NULL){
            head = new_node;
            return;
        }
    // 
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display(){
        // 
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

// void deleteAlternateNodes(Node* &head){

//     Node* curr_node = head;
//     while(curr_node!=NULL && curr_node->next!=NULL){
//         Node*temp = curr_node->next;   // this Node to be deleted.....
//         curr_node->next = curr_node->next->next;
//         free(temp);
//         curr_node = curr_node->next;
//     }
// }

// void deleteDuplicates(Node* &head){
    
//     Node*curr_node = head;
//     while(curr_node){
//         while(curr_node->next && curr_node->val == curr_node->next->val){
//             Node* temp = curr_node->next;
//             curr_node->next = curr_node->next->next;
//             free(temp);
//         }
//         //  this loop ends when current node and next node values are different
//         //   (or)   linkedlist ends
//             curr_node = curr_node->next;
//     }
// }

void reversePrint(Node* head){
    
    //  base case
    if(head==NULL)
        return;
    
    reversePrint(head->next);
    cout<<head->val<<" ";
}

Node* reverseLL(Node* &head){

    Node* prev = NULL;
    Node* curr = head;

    while(curr){
        Node* next = curr->next;
        curr->next = prev;
        prev  = curr;
        curr = next;
    }    // When this loop ends then prev will point to last node which is new head....
        Node* new_head = prev;
        return new_head;
}

Node* reverseLLRecursion(Node* &head){
    // base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    //  recursive case
    Node* new_head = reverseLLRecursion(head->next);
    head->next->next = head;
    head->next = NULL;  // head is pointing to last node in reverse ll
    return new_head; 
}

Node* reverseKLL(Node* &head,int k){
    Node* prevptr = NULL;
    Node *currptr = head;

    int counter = 0;  // for counting first K nodes
    while(currptr && counter<k){  // reversing first k nodes
        Node *nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        counter++;
    }

    //  currptr will give us (k+1)th node
    if(currptr!=NULL){
        Node* new_head = reverseKLL(currptr,k);
        head->next = new_head;
    } return prevptr; 
} // prevptr will give the new_head of connected linkedlist


int getlength(Node* head){
    int len = 0;
    Node* ptr = head;
    while(ptr!=NULL){
        len++;
        ptr = ptr->next;
    }
    return len;
}
Node* moveHeadByK(Node* head, int k){
    Node*ptr = head;
    while(k--){
        ptr = ptr->next;
    }
    return ptr;
}

Node * getIntersection(Node* head1, Node* head2){

        //  Calculating length of linkedlist....
        int l1 = getlength(head1);
        int l2 = getlength(head2);

        // step2: find difference k between linkedlist and move longer linkedlist ptr by k steps
        Node* ptr1;
        Node* ptr2;
        if(l1>l2){
            int k = l1-l2;
            ptr1 = moveHeadByK(head1,k);
            ptr2 = head2;
        }
        else{
            int k = l2-l1;
            ptr1 = head1;
            ptr2 = moveHeadByK(head2,k);
        }

        // step3: compare ptr1 and ptr2
        while (ptr1 != NULL && ptr2 != NULL) {
            if (ptr1 == ptr2) {
                // ptr1 and ptr2 are pointing to the intersection node
                return ptr1;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        // If ptr1 and ptr2 do not meet, there is no intersection
        return NULL;
}

// void display(Node* head){
//     Node*temp = head;
//     while(temp!=NULL){
//         cout<<temp->val<<"->";
//         temp = temp->next;
//     } cout<<"NULL"<<endl;
// }

//  assuming k is less than or equal to length of linkedlist 
void removeKthNodeFromEnd(Node* &head, int k){
    Node* ptr1 = head;
    Node*ptr2 = head;

    // Move ptr2 by k steps ahead
    int count = k;
    while(count--){
        ptr2 = ptr2->next;
    }

    if(ptr2==NULL){
        //  we have to delete head Node
        Node* temp = head;
        head = head->next;
        free (temp);
        return;
    }

    //  Now ptr2 is k steps ahead of ptr1
    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    //  now ptr1 is pointing to node before kth node from end
    //  node to be deleted is ptr1->next...
    Node* temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    free (temp);
}

void display(Node* head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    } cout<<"NULL"<<endl;
}


Node *mergeLinkedLists(Node* &head1, Node* &head2){
    Node* dummyHeadNode = new Node(-1);

    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3 = dummyHeadNode;

    while(ptr1 && ptr2){
        if(ptr1->val< ptr2-> val){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    if(ptr1){
        ptr3->next = ptr1;
    } else{
        ptr3->next = ptr2;
    }
    return dummyHeadNode->next;
}

Node* mergeKLinkedLists(vector<Node*> & lists){

    if(lists.size()==0){
        return NULL;
    }

    while(lists.size()>1){
        lists.push_back(mergeLinkedLists(lists[0],lists[1]));
        lists.erase(lists.begin(),lists.begin()+2);  // removing mergedLinkedLists from vector lists.....

    }
    return lists[0];
}

Node* findMiddleNode(Node* &head){

    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

bool detectCycle(Node* head){

    if(!head){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast){
            cout<<slow->val<<endl;
            return true;
        }
    } return false;
}

void removeCycle(Node* &head){

    Node* slow = head;
    Node* fast = head;

    do{
        slow = slow->next;
        fast = fast->next->next;
    } while(slow!=fast);

    fast = head;
    while (fast->next != slow->next) {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = NULL;
}

bool isPalindrome(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    // Now slow is pointing to middle element
    // 2. break the linkedlist in the middle

    Node* curr= slow->next;
    Node*prev = slow;
    slow->next = NULL;

    // 3. reverse the second half
    while(curr){
        Node*nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    // 4.To check if ll1 and ll2 are equal.
    Node* head1 = head;
    Node* head2 = prev;

    while(head2){
        if(head1->val != head2->val){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    } return true;
}

Node* rotateByK(Node* &head, int k){

    // 1. find length of ll
    int len = 0;
    // 2. find tail node
    Node* tail = head;

    while(tail->next){
        len++;
        tail=tail->next; // finding last node
    } len++; // for including last node

    k=k%len;
    if(k==0){
        return head;
    }
    tail->next = head;
    // 3. traverse n-k nodes
    Node* temp = head;
    for(int i=1;i<len-k;i++){
        temp=temp->next;
    }
    //  temp is now pointing to (n-k)th Node

    Node* nHead = temp->next;
    temp->next =NULL;
    return nHead; 
}

Node* oddEvenLinkedList(Node* &head){

    if(!head){
        return head;
    }

    Node* evenHead = head->next;
    Node* oddPtr = head;
    Node* evenPtr = evenHead;

    while(evenPtr && evenPtr->next){
        oddPtr->next = oddPtr->next->next;
        evenPtr->next = evenPtr->next->next;
        oddPtr = oddPtr->next;
        evenPtr = evenPtr->next;
    }

    oddPtr->next = evenHead;
    return head;
}

Node* reorderLinkedList(Node* &head){

    //  1. finding the middle element
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow=slow->next;
        fast = fast->next;
    }

    //  now slow is pointing to middle element
    // 2. separate the linkedlist and reverse second half

    Node* curr = slow->next;
    slow->next=NULL;
    Node*prev = slow;
    while(curr){
        Node* nextPtr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextPtr;
    }

    // 3. merging the two halves of the linked list
    Node* ptr1 = head; // linked list first half
    Node* ptr2 = prev;  // linked list second half

    while(ptr1!=ptr2){
        Node* temp = ptr1->next;
        ptr1->next = ptr2;
        ptr1 = ptr2;
        ptr2 = temp;
    }
    return head;
}

Node* swapAdjacent(Node* &head){

    //  base case
    if(head==NULL && head->next==NULL){
        return head;
    }

    //  recursive case
    Node* secondNode = head->next;
    head->next = swapAdjacent(secondNode->next);
    secondNode->next = head; // reversing the link between first and second node
    return secondNode;
}

// int /* The above code appears to be a comment in C++ programming language. It starts with /* and ends
// with */, indicating that it is a multi-line comment. The content inside the comment is not
// executable code and is used for providing explanations or documentation about the code. */
int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();
    cout<<isPalindrome(ll.head)<<endl;
    ll.head = rotateByK(ll.head,4);
    ll.display();
    ll.head = oddEvenLinkedList(ll.head);
    ll.display();
    ll.head = reorderLinkedList(ll.head);
    ll.display();
    ll.head = swapAdjacent(ll.head);
    ll.display();

    return 0;
}




// int main() {
//     LinkedList ll;
//     ll.insertAtTail(2);
//     ll.insertAtTail(1);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.insertAtTail(6);
//     ll.insertAtTail(3);
//     ll.display();
//     cout<<isPalindrome(ll.head)<<endl;
//     return 0;

    // ll.head->next->next->next->next->next->next->next->next->next = ll.head->next->next;
    // cout<<detectCycle(ll.head)<<endl;
    // removeCycle(ll.head);
    // cout<<"After removing cycle: "<<endl;
    // ll.display();
    // cout<<detectCycle(ll.head)<<endl;

// }
// 


// int main() {

//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.display();

//     Node* middleNode = findMiddleNode(ll.head);
//     cout<<middleNode->val<<endl;
// }

// int main(){

//     LinkedList ll1;
//     ll1.insertAtTail(1);
//     ll1.insertAtTail(2);
//     ll1.insertAtTail(3);
//     ll1.display();

//     LinkedList ll2;
//     ll2.insertAtTail(4);
//     ll2.insertAtTail(5);
//     ll2.display();

//     LinkedList ll3;
//     ll3.insertAtTail(6);
//     ll3.insertAtTail(7);
//     ll3.insertAtTail(8);
//     ll3.display();

//     vector<Node*> lists;
//     lists.push_back(ll1.head);
//     lists.push_back(ll2.head);
//     lists.push_back(ll3.head);

//     LinkedList mergedLL;
//     mergedLL.head = mergeKLinkedLists(lists);
//     return 0;
// }

// int main() {
//     LinkedList ll1;
//     ll1.insertAtTail(1);
//     ll1.insertAtTail(2);
//     ll1.insertAtTail(4);

//     LinkedList ll2;
//     ll2.insertAtTail(3);
//     ll2.insertAtTail(5);
//     ll2.insertAtTail(6);

//     LinkedList ll3;
//     ll3.head = mergeLinkedLists(ll1.head,ll2.head);
//     cout << "Merged linked list: ";
//     ll3.display();
// }

// int main(){
//     LinkedList ll1;
//     ll1.insertAtTail(1);
//     ll1.insertAtTail(2);
//     ll1.insertAtTail(3);
//     ll1.insertAtTail(4);
//     ll1.insertAtTail(5);
//     ll1.insertAtTail(6);
//     ll1.display();

//     removeKthNodeFromEnd(ll1.head,3);
//     ll1.display();

    // LinkedList ll2;
    // ll2.insertAtTail(7);
    // ll2.insertAtTail(8);
    // ll2.head->next->next = ll1.head->next->next->next;
    // ll2.display();

    // Node* intersection = getIntersection(ll1.head,ll2.head);
    // if(intersection){
    //     cout<<intersection->val<<endl;
    // }
    // else{
    //     cout<<"-1"<<endl;
    // }





    // deleteAlternateNodes(ll.head);
    // ll.display();
    // deleteDuplicates(ll.head);
    // ll.display();

    // reversePrint(ll.head);
    // ll.head = reverseLL(ll.head);
    // ll.display();
    // ll.head = reverseLLRecursion(ll.head);
    // ll.display();

    // ll.head = reverseKLL(ll.head,2);
    // ll.display();

//     return 0;
// }




// PRACTICE.................




//  BASICS............

// // ....................
// class Node{
    // public:
    // int val;
    // Node* next;

    // Node(int data){
        // val = data;
        // next = NULL;
    // }
// };

// void insertAtHead(Node* &head,int val) {
    // Node* new_node = new Node(val);
    // new_node-> next = head;
    // head = new_node; 
// }

// void insertAtTail(Node* &head,int val){
    // Node* new_node = new Node(val);
    // Node*temp = head;
    // while(temp->next!=NULL){
        // temp=temp->next;
    // }
    // temp->next = new_node;
// }

// void insertAtPosition(Node* &head,int val, int pos){
    // if(pos==0){
        // insertAtHead(head,val);
        // return;
    // }
    // Node* new_node = new Node(val);
    // Node* temp = head;
    // int curr_pos = 0;
    // while(curr_pos!=pos-1){
        // temp = temp->next;
        // curr_pos++;
    // }
    //  temp pointing to node at pos-1
    // new_node->next = temp->next;
    // temp->next = new_node;
// }

// void updateAtPosition(Node* &head,int val, int pos){
    // Node* temp = head;
    // int curr_pos = 0;
    // while(curr_pos != pos){
        // temp = temp->next;
        // curr_pos++;
    // }
    //  temp will be pointing to curr Node
    // temp->val = val;
// }

void deleteAtHead(Node* &head){
    // 
    Node* todelete = head;
    head = head->next;
    // delete todelete;
    free(todelete);
}

void deleteAtTail(Node* &head){
    // 
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
    // 
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

// void display(Node* &head){
    // Node*temp = head;
    // while(temp!=NULL){
        // cout<<temp->val<<"->";
        // temp = temp->next;
    // } cout<<"NULL"<<endl;
// }



// int main() {
//     Node*head = NULL;
//     insertAtHead(head,2);
//     // display(head);

//     insertAtHead(head,3);
//     // display(head);

//     // insertAtTail(head,3);
//     // display(head);

//     // insertAtPosition(head,4,2);
//     // display(head);

//     // updateAtPosition(head,5,2);
//     // display(head);

//     // deleteAtHead(head);
//     // display(head);

//     // deleteAtTail(head);
//     // display(head);

//     // deleteAtPosition(head,1);
//     // display(head);

//     // deleteAtPosition(head,0);
//     // display(head);

//     // // Node* n = new Node(1);
//     // cout<<n->val<<" "<<n->next<<endl;
//     return 0;
// }
