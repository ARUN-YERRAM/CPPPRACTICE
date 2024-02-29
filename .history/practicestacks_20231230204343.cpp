#include<iostream>
#include<stack>

using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int val){
        data=val;
        next = NULL;
    }
};

class Stack{
    Node*head;
    int capacity;
    int currsize;
    public:
    stack(int val){
        capacity = val;
        currsize = 0;
        head = 
    }
}
int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.getTop()<<endl;
    st.push(5);
    st.push(6);
    cout<<st.getTop()<<endl;
    cout<<st.pop();
    cout<<st.pop();
    cout<<st.isEmpty()<<endl;
    cout<<st.isFull()<<endl;
    cout<<st.size()<<endl;

    return 0;
}