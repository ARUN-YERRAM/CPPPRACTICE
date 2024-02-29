// #include<iostream>
// #include<stack>
// // #include<algorithm>
// // #include<vector>
// // #include<bitset>
// // #include<math.h>
// // #include<cmath>
// // #include<numeric>
// // #include<string>
// // #include<stdlib.h>
// // #include<queue>
// // #include<map>
// // #include<unordered_map>
// // #include<set>
// // #include<list>
// // #include<unordered_set>
// // #include<deque>
// // #include<random>
// // #include<chrono>
// // #include<stack>
// // #include<cctype>
// // #include<cstring>
// // #include<string>
// // #include<sstream>
// // #include<fstream>
// #include<bits/stdc++.h>


// using namespace std;

// // string fun(string ans){
//     // if(ans[i]=='+'||ans[i]=='-'||ans[i]=='*'||ans[i]=='/'){
//         // 
//     // }
// // }
// // int main() {
//     // stack<int>st;
//     // string res = "a*7/8-2+3";

//     // cout<<fun(res)<<endl;

// // }

// // .....................................STACK PROBLEMS..........................

// //  ...................PREFIX TO POSTFIX EXPRESSION...................

// // string eval(string &pre) {
// //     stack<string> st;
// //     reverse(pre.begin(),pre.end());
// //     for(int i=0;i<pre.size();i++){
// //         if(isdigit(pre[i])){
// //             st.push(to_string(pre[i] - '0'));
// //         } else{
// //             string v1 = st.top();
// //             st.pop();
// //             string v2 = st.top();
// //             st.pop();
// //             string newExp = v1 + v2 + pre[i];
// //             st.push(newExp);
// //         }
// //     }
// //     return st.top();
// // }

// // int main() {
// //     string s ="*+31-15";
// //     cout<<eval(s)<<endl;
// //     return 0;
// // }


// // .......................INFIX PROBLEMS..........................
// //  ................Evaluation of INFIX PROBLEMS............

// // int calc(int v1, int v2, char op){
// //     if(op == '^'){
// //         return pow(v1, v2);
// //     }
// //     if(op == '*'){
// //         return v1*v2;
// //     }
// //     if(op == '/'){
// //         return v1/v2;
// //     }
// //     if(op=='+'){
// //         return v1+v2;
// //     }
// //     return v1-v2;
// // }

// // int precedence(char ch){
// //     if(ch == '^') return 3;
// //     else if(ch == '*' or ch == '/') return 2;
// //     else if(ch == '+' or ch == '-') return 1;
// //     else return -1;
// // }

// // int eval(string &str){
// //     stack<int> nums;
// //     stack<char> ops;

// //     for(int i=0;i<str.size();i++){
// //         if(isdigit(str[i]))  nums.push(str[i] - '0');
// //         else if(str[i] == '('){

// //             ops.push('(');

// //         } else if(str[i] == ')'){
// //             while(not ops.empty() and ops.top() != '(') {
// //                 char op = ops.top();
// //                 ops.pop();

// //                 int v2 = nums.top();
// //                 nums.pop();
// //                 int v1 = nums.top();
// //                 nums.pop();
// //                 nums.push(calc(v1,v2,op));
// //             }
// //             if(not ops.empty()) ops.pop();
// //         }
// //             else{
// //                 while(not ops.empty() and precedence(ops.top()) >= precedence(str[i])) {
// //                     char op = ops.top();
// //                     ops.pop();

// //                     int v2 = nums.top();
// //                     nums.pop();
// //                     int v1 = nums.top();
// //                     nums.pop();
// //                     nums.push(calc(v1,v2,op));
// //                 } ops.push(str[i]);
// //             }
// //         }
// //         while(not ops.empty()) {
// //             char op = ops.top();
// //             ops.pop();

// //             int v2 = nums.top();
// //             nums.pop();
// //             int v1 = nums.top();
// //             nums.pop();
// //             nums.push(calc(v1,v2,op));
// //             }
// //         return nums.top();
// //     }

// // int main() {
// //     string str = "1+(2*(3-1))+2";
// //     cout<<eval(str);
// //     return 0;
// // }







// // .....................PREFIX PROBLEMS...................

// // int calc(int v1, int v2, char op){
// //     if(op == '^'){
// //         return pow(v1, v2);
// //     }
// //     if(op == '*'){
// //         return v1*v2;
// //     }
// //     if(op == '/'){
// //         return v1/v2;
// //     }
// //     if(op=='+'){
// //         return v1+v2;
// //     }
// //     return v1-v2;
// // }

// // int eval(string &str){
// //     stack<int> st;
// //     for(int i = str.size()-1;i>=0;i--){
// //         char ch = str[i];
// //         if(isdigit(ch)){
// //             st.push(ch-'0');
// //         } else {
// //             int v2 = st.top();
// //             st.pop();
// //             int v1 = st.top();
// //             st.pop();
// //             st.push(calc(v1,v2,ch));
// //         }
// //     } return st.top();
// // }
// // int main(){

// //     string str = "-9+*531";
// //     cout<<eval(str)<<endl;

// //     return 0;

// // }





// // .....................POSTFIX PROBLEMS...................

// // int calc(int v1, int v2, char op){
// //     if(op == '^'){
// //         return pow(v1, v2);
// //     }
// //     if(op == '*'){
// //         return v1*v2;
// //     }
// //     if(op == '/'){
// //         return v1/v2;
// //     }
// //     if(op=='+'){
// //         return v1+v2;
// //     }
// //     return v1-v2;
// // }

// // int eval(string &str){
// //     stack<int> st;
// //     for(int i=0;i<str.size();i++){
// //         char ch = str[i];
// //         if(isdigit(ch)){
// //             st.push(ch-'0');
// //         } else {
// //             int v2 = st.top();
// //             st.pop();
// //             int v1 = st.top();
// //             st.pop();
// //             st.push(calc(v1,v2,ch));
// //         }
// //     } return st.top();
// // }
// // int main(){

// //     string str = "231*+9-";
// //     cout<<eval(str)<<endl;

// //     return 0;

// // }





// // .....................................STACK PROBLEMS......................


// //  histogram.......
// // similar to below problems.......


// // int Histogram(vector<int> &arr){
// //     int n = arr.size();

// //     stack<int>st; // indexes
// //     int ans = INT_MIN;
// //     st.push(0);
// //     for(int i=1;i<n;i++){
// //         while(!st.empty() and arr[i] < arr[st.top()]) {
// //             int el = arr[st.top()]; // current bar to be removed and whose ans need to be calculated
// //             st.pop();
// //             int nsi = i;
// //             int psi = (st.empty())? -1: st.top();
// //             ans = max(ans,el*(nsi-psi-1));
// //         }
// //         st.push(i);
// //     }

// //     while(not st.empty()) {
// //         int el = arr[st.top()];
// //         st.pop();
// //         int nsi = n;
// //         int psi = (st.empty())? -1: st.top();
// //         ans = max(ans,el*(nsi - psi - 1));
// //         }   
// //         return ans;
// //     }
// // int main(){

// //     int n;
// //     cin>>n;
// //     vector<int> v;
// //     while(n--){
// //         int x;
// //         cin>>x;
// //         v.push_back(x);
// //     }

// //     int ans = Histogram(v);
// //     cout<<ans<<endl;
// //     return 0;
// // }



// //  stack span problem.........
// //  next greater, next smaller, prev greater , prev smaller....... similar.......  with stack


// // vector<int>PGE(vector<int> &arr){
// //     int n = arr.size();
// //     reverse(arr.begin(),arr.end());

// //     vector<int>out(n,-1);
// //     stack<int>st;
// //     st.push(0);
// //     for(int i=1;i<n;i++){
// //         while(!st.empty() and arr[i] > arr[st.top()]) {
// //             out[st.top()] = n-i-1; // because after reverse indexes change
// //             st.pop();
// //         }
// //         st.push(i);
// //     }

// //     while(not st.empty()) {
// //         out[st.top()] = -1;
// //         st.pop();
// //             }   
// //     reverse(out.begin(),out.end());
// //     reverse(arr.begin(),arr.end());

// //     return out;
// //     }
// // int main(){

// //     int n;
// //     cin>>n;
// //     vector<int> v;
// //     while(n--){
// //         int x;
// //         cin>>x;
// //         v.push_back(x);
// //     }
// //     vector<int> res = PGE(v);
// //     for(int i=0;i<res.size();i++){
// //         cout<<(i-res[i])<<" ";
// //         }
// //     return 0;
// // }






// //  next greater element.....



// // vector<int>nextGreaterElement(vector<int> &arr){
// //     int n = arr.size();

// //     vector<int>out(n,-1);
// //     stack<int>st;
// //     st.push(0);
// //     for(int i=1;i<n;i++){
// //         while(!st.empty() and arr[i] > arr[st.top()]) {
// //             out[st.top()] = arr[i];
// //             st.pop();
// //         }
// //         st.push(i);
// //     }

// //     while(not st.empty()) {
// //         out[st.top()] = -1;
// //         st.pop();
// //             }   
// //         return out;
// //     }
// // int main(){

// //     int n;
// //     cin>>n;
// //     vector<int> v;
// //     while(n--){
// //         int x;
// //         cin>>x;
// //         v.push_back(x);
// //     }

// //     vector<int> res = nextGreaterElement(v);
// //     for(int i=0;i<res.size();i++){
// //         cout<<res[i]<<" ";
// //         }
// //     return 0;
// // }





// //  is balanced parentheses or not..........

// // bool isValid(string str){
// //     stack<char> st;
// //     for(int i=0;i<str.size();i++){
// //         char ch = str[i];
        
// //         if(ch == '[' or ch == '{' or ch == '(') {
// //             st.push(ch);
// //         } else{
// //             if(ch = ')' and !st.empty() and st.top() == '('){
// //                 st.pop();
// //             } else if(ch == '}' and !st.empty() and st.top() == '{'){
// //                 st.pop();
// //             } else if(ch == ']' and !st.empty() and st.top() == '['){
// //                 st.pop();
// //             } else{
// //                 return false;
// //             }
// //         }
// //     } return st.empty();
// // }

// // //  balanced bracket sequence......
// // int main(){

// //     string str = "()()())";
// //     cout<<isValid(str)<<endl;

// //     return 0;
// // }


















// //  reverse stack.....
// // using both......

// // void insertAtBottom(stack<int> &st,int x){
// //     stack<int> temp;
// //     while(not st.empty()) {
// //         int curr = st.top();
// //         st.pop();
// //         temp.push(curr);
// //     }
// //     st.push(x); // this is point where x is inserted at bottom
// //     while(not temp.empty()){
// //         int curr = temp.top();
// //         temp.pop();
// //         st.push(curr);
// //     }
// // }

// // void f(stack<int> &st) {
// //     if(st.empty()) return;
// //     int curr = st.top();
// //     st.pop();
// //     f(st);
// //     insertAtBottom(st,curr);
// // }
// // void reverse(stack<int> &st) {
// //     stack<int> t1,t2;
// //     while(not st.empty()){
// //         int curr = st.top();
// //         st.pop();
// //         t1.push(curr);
// //     }
// //     while(not t1.empty()){
// //         int curr = t1.top();
// //         t1.pop();
// //         t2.push(curr);
// //     }
// //     while(not t2.empty()){
// //         int curr = t2.top();
// //         t2.pop();
// //         st.push(curr);
// //     }
// // }
// // int main() {
// //     stack<int> st;
// //     st.push(1);
// //     st.push(2);
// //     st.push(3);
// //     st.push(4);
// //     // reverse(st);
// //     // f(st);

// //     while(not st.empty()) {
// //         int curr = st.top();
// //         st.pop();
// //         cout << curr << endl;
// //     }
// //     return 0;
// // }





// //  remove at any position by both recursion and without....

// // should do..........

// // void removeAt(stack<int> &st, int pos){
// //     stack<int> temp;
// //     int n = st.size();
// //     int count = 0;
// //     while(count < n - pos - 1) {
// //         count++;
// //         int curr = st.top();
// //         st.pop();
// //         temp.push(curr);
// //     }
// //     st.pop();
// //     while(not temp.empty()) {
// //         int curr = temp.top();
// //         temp.pop();
// //         st.push(curr);
// //     }
// // }

// // int main() {
// //     stack<int> st;
// //     st.push(1);
// //     st.push(2);
// //     st.push(3);
// //     st.push(4);
// //     st.push(5);
// //     removeAt(st,3);
// //     // f(st,)
// //     while(not st.empty()){
// //         int curr = st.top();
// //         st.pop();
// //         cout<<curr<<endl;
// //     } return 0;
// // }



// //  remove at bottom by both recursion and without....

// // void removeAtBottom(stack<int> &st) {
// //     stack<int> temp;
// //     int n = st.size();
// //     while(st.size() !=1){
// //         int curr = st.top();
// //         st.pop();
// //         temp.push(curr);
// //     }
// //     st.pop();
// //     while(not temp.empty()){
// //         int curr = temp.top();
// //         temp.pop();
// //         st.push(curr);
// //     }
// // }

// // void f(stack<int> &st) {
// //     if(st.size() == 1){
// //         st.pop();
// //         return;
// //     }
// //     int curr = st.top();
// //     st.pop();
// //     f(st);
// //     st.push(curr);
// // }

// // int main() {
// //     stack<int> st;
// //     st.push(1);
// //     st.push(2);
// //     st.push(3);
// //     st.push(4);
// //     // f(st);
// //     removeAtBottom(st);
// //     while(not st.empty()) {
// //         int curr = st.top();
// //         st.pop();
// //         cout << curr << endl;
// //     }
// //     return 0;
// // }


// // insert at any position.... by both recursion and without........


// // void insertAt(stack<int> &st, int x, int pos){
// //     stack<int> temp;
// //     int n = st.size();
// //     int count = 0;
// //     while(count < n - pos) {
// //         count++;
// //         int curr = st.top();
// //         st.pop();
// //         temp.push(curr);
// //     }
// //     st.push(x);
// //     while(not temp.empty()) {
// //         int curr = temp.top();
// //         temp.pop();
// //         st.push(curr);
// //     }
// // }

// // int main() {
// //     stack<int> st;
// //     st.push(1);
// //     st.push(2);
// //     st.push(3);
// //     st.push(4);
// //     insertAt(st,100,1);
// //     // f(st,)
// //     while(not st.empty()){
// //         int curr = st.top();
// //         st.pop();
// //         cout<<curr<<endl;
// //     } return 0;
// // }



// //  insert at bottom....
// // using recursion and without

// // void f(stack<int> &st, int x) {
// //     if(st.empty()) {
// //         st.push(x);
// //         return;
// //     }
// //     int curr = st.top();
// //     st.pop();
// //     f(st,x);
// //     st.push(curr);
// // }
// // void insertAtBottom(stack<int> &st,int x){
// //     stack<int> temp;
// //     while(not st.empty()) {
// //         int curr = st.top();
// //         st.pop();
// //         temp.push(curr);
// //     }
// //     st.push(x); // this is point where x is inserted at bottom
// //     while(not temp.empty()){
// //         int curr = temp.top();
// //         temp.pop();
// //         st.push(curr);
// //     }
// // }
// // int main() {
// //     stack<int> st;
// //     st.push(1);
// //     st.push(2);
// //     st.push(3);
// //     st.push(4);
// //     // insertAtBottom(st,100);
// //     // f(st,100);
// //     insertAt(st,100,1);
// //     while(not st.empty()){
// //         int curr = st.top();
// //         st.pop();
// //         cout<<curr<<endl;
// //     } return 0;
// // }



// //  copy content of one stack to another in same.
// // By recursion and without recursion...

// // stack<int> copyStack(stack<int> &input){
// //     stack<int>temp;
// //     while(not input.empty()){

// //         int curr = input.top();
// //         input.pop();
// //         temp.push(curr);
// //     }
// //     stack<int> result;
// //     while(not temp.empty()){
// //         int curr = temp.top();
// //         temp.pop();
// //         result.push(curr);
// //     }
// //     return result;
// // }

// // void f(stack<int> &st, stack<int> &result) {
// //     if(st.empty()) return;
// //     int curr = st.top();
// //     st.pop();
// //     f(st,result);
// //     result.push(curr);
// // }
// // int main(){
// //     stack<int> st;
// //     st.push(1);
// //     st.push(2);
// //     st.push(3);
// //     // stack<int> res = copyStack(st);

// //     stack<int> res;
// //     f(st,res);

// //     while(not res.empty()){
// //         int curr = res.top();
// //         res.pop();
// //         cout<<curr<<endl;
// //     }
// //     return 0;
// // }





// // 
// // 
// // 
// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // 
// // class Queue{
//     // int front;
//     // int back;
//     // vector<int>vec;
// // 
// // public:
//     // Queue(){
//         // this->front = -1;
//         // this->back = -1;
//     // }
// // 
//     // void enqueue(int data){
//         // this->vec.push_back(data);
//         // this->back++;
//         // if(this->front == -1) this->front = 0; // Adjust front if queue was empty
//     // } 
//     // 
//     // void dequeue(){
//         // if(this->front == this->back){
//             // this->front = -1;
//             // this->back = -1;
//             // vec.clear();
//         // }  else this->front++;
//     // }
// // 
//     // int getFront(){
//         // if(this->front == -1)  return -1;
//         // return this->vec[this->front];
//     // }
// // 
//     // bool isEmpty(){
//         // return this->front == -1;
//     // }
// // 
//     // int size(){
//         // return this->back - this->front + 1;
//     // }
// // 
//     // void display(){
//         // for (int i = front; i <= back; i++) {
//             // cout << vec[i] << " ";
//         // }
//         // cout << endl;
//     // }
// // };
// // 
// // int main(){
//     // Queue qu;
// // 
//     // int ele, data;
// // 
//     // while(true) {
//         // cout << "1.Enqueue 2.Dequeue 3.Display 4.Peek 5.Exit 6.Size\nEnter your choice: ";
//         // cin >> ele;
//         // switch (ele) {
//             // case 1:
//                 // cout << "Enter the element: ";
//                 // cin >> data;
//                 // qu.enqueue(data);
//                 // break;
//             // case 2:
//                 // qu.dequeue();
//                 // break;
//             // case 3:
//                 // qu.display();
//                 // break;
//             // case 4:
//                 // cout << "Front element: " << qu.getFront() << endl;
//                 // break;
//             // case 5:
//                 // cout << "Exiting..." << endl;
//                 // exit(0);
//             // case 6:
//                 // cout << "Size of the queue: " << qu.size() << endl;
//                 // break;
//             // default:
//                 // cout << "Invalid choice. Please enter a valid option." << endl;
//                 // break;
//         // }
//     // }
//     // return 0;
// // }
// // 






// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int val){
//         this->data = val;
//         this->next = NULL;
//     }
// };

// class Queue{
//     Node* head;
//     Node* tail;
//     int size;

// public:
//     Queue(){
//         this->head = NULL;
//         this->tail = NULL;
//         this->size = 0;
//     }

//     void enqueue(int data){
//         Node* new_node = new Node(data);
//         if(this->head == NULL){
//             this->head = this->tail = new_node;
//         } else {
//             this->tail->next = new_node;
//             this->tail = new_node;
//         }
//         this->size++;
//     }

//     void dequeue() {
//         if(this->head == NULL) return;
//         else{
//             Node* oldHead = this->head;
//             Node* newHead = this->head->next;
//             this->head = newHead;
//             if(this->head == NULL) this->tail = NULL;
//             oldHead->next = NULL;
//             this->size--;
//             delete oldHead;
//         }
//     }

//     int getSize(){
//         return this->size;
//     }

//     bool isEmpty(){
//         return this->head == NULL;
//     }

//     int getFront(){
//         if(this->head == NULL) return -1;
//         return this->head->data;
//     }

//     void display(){
//         Node* temp = head;
//         while(temp != nullptr){
//             cout << temp->data << " ";
//             temp = temp->next;
//         } 
//         cout << endl;
//     }
// };

// int main() {
//     Queue qu;

//     int ele, data;

//     while(true) {
//         cout << "1.Enqueue 2.Dequeue 3.Display 4.Peek 5.Exit 6.Size\nEnter your choice: ";
//         cin >> ele;
//         switch (ele) {
//             case 1:
//                 cout << "Enter the element: ";
//                 cin >> data;
//                 qu.enqueue(data);
//                 break;
//             case 2:
//                 qu.dequeue();
//                 break;
//             case 3:
//                 qu.display();
//                 break;
//             case 4:
//                 cout << "Front element: " << qu.getFront() << endl;
//                 break;
//             case 5:
//                 cout << "Exiting..." << endl;
//                 exit(0);
//             case 6:
//                 cout << "Size of the queue: " << qu.getSize() << endl;
//                 break;
//             default:
//                 cout << "Invalid choice. Please enter a valid option." << endl;
//                 break;
//         }
//     }
//     return 0;
// }


#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> inbox;
    stack<int> outbox;

public:
    void enqueue(int data) {
        inbox.push(data);
    }

    int dequeue() {
        if (outbox.empty()) {
            while (!inbox.empty()) {
                outbox.push(inbox.top());
                inbox.pop();
            }
        }
        int front = outbox.top();
        outbox.pop();
        return front;
    }

    int getFront() {
        if (outbox.empty()) {
            while (!inbox.empty()) {
                outbox.push(inbox.top());
                inbox.pop();
            }
        }
        return outbox.top();
    }

    bool isEmpty() {
        return inbox.empty() && outbox.empty();
    }

    void display(){
        while(!outbox.empty()){
            cout << outbox.top() << " ";
            
        }
    }
};



int main() {
    Queue qu;
// 
    int ele, data;
// 
    while(true) {
        cout << "1.Enqueue 2.Dequeue 3.Display 4.Peek 5.Exit 6.Size\nEnter your choice: ";
        cin >> ele;
        switch (ele) {
            case 1:
                cout << "Enter the element: ";
                cin >> data;
                qu.enqueue(data);
                break;
            case 2:
                qu.dequeue();
                break;
            case 3:
                qu.display();
                break;
            case 4:
                cout << "Front element: " << qu.getFront() << endl;
                break;
            case 5:
                cout << "Exiting..." << endl;
                exit(0);
            case 6:
                cout << "Size of the queue: " << qu.getSize() << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
        }
    }
    return 0;
}
// 







