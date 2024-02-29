// #include<iostream>
// #include<stack>
// using namespace std;

// class Stack {
//     int capacity;
//     int *arr;
//     int top;
// public:
//     Stack(int c) {
//         this->capacity = c;
//         arr = new int[c];
//         this->top = -1;
//     }

//     void push(int data) {
//         if(this->top == this->capacity - 1) {
//             cout << "Overflow\n";
//             return;
//         }
//         this->top++;
//         this->arr[this->top] = data;
//     }

//     int pop() {
//         if(this->top == -1){
//             cout << "Underflow\n";
//             return INT_MIN;
//         }
//         return this->arr[this->top--];
//     }

//     int getTop() {
//         if(this->top == -1) {
//             cout << "Underflow\n";
//             return INT_MIN;
//         }
//         return this->arr[this->top];
//     }

//     bool isEmpty() {
//         return this->top == -1;
//     }

//     void display() {
//         int i = 0;
//         while(i <= top) {
//             cout << arr[i] << " ";
//             i++;
//         }
//         cout << endl;
//     }

//     int size() {
//         return this->top + 1;
//     }

//     bool isFull() {
//         return this->top == this->capacity - 1;
//     }
// };

// int main() {
//     Stack st(5);
//     int ele, data;

//     while(true) {
//         cout << "1.push 2.pop 3.display 4.peek 5.exit Enter your choice: ";
//         cin >> ele;
//         switch (ele) {
//             case 1:
//                 cout << "Enter the element: ";
//                 cin >> data;
//                 st.push(data);
//                 break;
//             case 2:
//                 st.pop();
//                 break;
//             case 3:
//                 st.display();
//                 break;
//             case 4:
//                 cout << st.getTop() << endl;
//                 break;
//             case 5:
//                 cout << "Exiting..." << endl;
//                 exit(0);
//             default:
//                 cout << "Invalid choice. Please enter a valid option." << endl;
//                 break;
//         }
//     }
//     return 0;
// }







// .....................Stacks using linkedlists.........................





// #include<iostream>
// #include<stack>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int d){
//         this->data = d;
//         this->next = NULL;
//     }
// };

// class Stack{
//     Node* head;
//     int capacity;
//     int currSize;
//     public:
//     Stack(int c){
//         this->capacity = c;
//         this->currSize = 0;
//         head = NULL;
//     }

//     bool isEmpty() {
//         return this->head == NULL;
//     }

//     bool isFull(){
//         return this->currSize == this->capacity;
//     }
//     void push(int data){
//         if(this->currSize == this->capacity) {
//             cout<<"Overflow\n";
//             return;
//         }
//         Node* new_node = new Node(data);
//         new_node->next = this->head;
//         this->head = new_node;
//         this->currSize++;
// }
//     void display(){
//         Node* temp = this->head;
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         } cout<<endl;
//     }

//     int pop(){
//         if(this->head == NULL){
//             cout<<"Underflow\n";
//             return INT_MIN;
//         }
//         Node* new_head = this->head->next;
//         this->head->next = NULL;
//         Node* tobeRemoved = this->head;
//         int result = tobeRemoved->data;
//         delete tobeRemoved;
//         this->head = new_head;
//         this->currSize--;
//         return result;
//     }

//     int getTop(){
//         if(this->head == NULL){
//             cout<<"Underflow\n";
//             return INT_MIN;
//         }
//         return this->head->data;
//     }

//     int size() {
//         return this->currSize;
//     }
// };

// int main() {
//     Stack st(5);

//     int ele, data;

//     while(true) {
//         cout << "1.push 2.pop 3.display 4.peek 5.exit 6.size Enter your choice: ";
//         cin >> ele;
//         switch (ele) {
//             case 1:
//                 cout << "Enter the element: ";
//                 cin >> data;
//                 st.push(data);
//                 break;
//             case 2:
//                 st.pop();
//                 break;
//             case 3:
//                 st.display();
//                 break;
//             case 4:
//                 cout << st.getTop() << endl;
//                 break;
//             case 5:
//                 cout << "Exiting..." << endl;
//                 exit(0);
//             case 6:
//                 cout<<st.size()<<endl;
//                 break;
//             default:
//                 cout << "Invalid choice. Please enter a valid option." << endl;
//                 break;
//         }
//     }

//     // st.push(1);
//     // st.push(2);
//     // st.push(3);
//     // cout<<st.getTop()<<endl;
//     // st.push(4);
//     // st.push(5);
//     // cout<<st.getTop()<<"\n";
//     // st.push(6);

//     // cout<<st.pop()<<endl;
//     // cout<<st.pop()<<endl;

//     // cout<<st.getTop()<<"\n";
//     // cout<<st.isEmpty()<<endl;
//     // cout<<st.isFull()<<endl;
//     // cout<<st.size()<<endl;
//     return 0;
// }





//  .....................Queues using arrays.....................


// ......................Queues using Linkedlists...................

#include<iostream>
using namespace std;

class Queue{
    
}
int main() {

    return 0;
}