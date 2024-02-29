#include<iostream>
using namespace std;

class Stack{
    int capacity;
    int top;
    int *arr;

    Stack(int c){
        this->capacity = c;
        this->top = -1;
        arr = new int(c);
    }

    void push(int data){
        if(top == capacity-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top] = data;
    }

    int pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return INT_MIN;
        }
        return arr[top--];
    }

    int getTop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
        }
        return this->arr[this->top];
    }

    bool isEmpty(){
        return top == -1;
    }

    bool isfull(){
        return this->top == this->capacity - 1;
    }

    
    }
}