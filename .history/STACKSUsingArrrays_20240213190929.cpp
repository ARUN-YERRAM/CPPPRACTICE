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
}