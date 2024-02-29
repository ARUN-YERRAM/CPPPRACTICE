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

    void display(){
        int i = 0;
        while(i<top){
            cout<<arr[i]<<" ";
        }
    }

    int size() {
        return this->top + 1;
    }

    bool isFull(){
        return this->top == this->capacity - 1;
    }
};

int main(){

    Stack st(5);
    int ele,data;

    while(1){
    
    cout<<"1.push 2.pop 3.display 4.peek 5.exit Enter yr choice"; 
    cin>>ele;
    switch (ele){
       
        case 1:
        cout<<"enter the element";
        // int data;
        cin>>data;
        st.push(data);
        break;
        
        case 2:
        st.pop();
        break;

        case 3:
        st.display();
        break;

        case 4:
        st.getTop();
        break;

        case 5:
        exit(0);
    }
}
        
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // cout<<st.getTop()<<"\n";
    // st.push(4);
    // st.push(5);
    // cout<< st.getTop() << "\n";
    // st.push(7);
    // st.pop();
    // st.pop();
    // cout<<st.getTop()<<"\n";
    // st.pop();
    return 0;
}