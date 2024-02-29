#include<iostream>
#include<stack>
using namespace std;

class Stack{
    int capacity;
    int *arr;
    int top;
    public:
    Stack(int c){
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push(int data){
        if(this->top == this->capacity - 1) {
            cout<<"overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    int pop() {
        if(this->top == -1){
            cout<<"Underflow\n";
            return INT_MIN;
        }
        return this->top--;
    }

    int getTop() {
        if(this->top == -1) {
            cout<<"Underflow\n";
            return INT_MIN;
        }
        return this->arr[this->top];
    }

    bool isEmpty() {
        return this->top == -1;
    }

    int size() {
        return this->top + 1;
    }

    bool isFull(){
        return this->top == this->capacity - 1;
    }
};

int main(){

    while(1){
    
    int ele;

    switch (ele){
        cout<<"\n1.push,2.pop 3.display 4.peek 5.exit\n Enter yr choice"; 
        case 1:

    }

}
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.getTop()<<"\n";
    st.push(4);
    st.push(5);
    cout<< st.getTop() << "\n";
    st.push(7);
    st.pop();
    st.pop();
    cout<<st.getTop()<<"\n";
    st.pop();
    return 0;
}