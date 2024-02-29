#include<iostream>
#include<stack>
using namespace std;

class Stack {
    int capacity;
    int *arr;
    int top;
public:
    Stack(int c) {
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push(int data) {
        if(this->top == this->capacity - 1) {
            cout << "Overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    int pop() {
        if(this->top == -1){
            cout << "Underflow\n";
            return INT_MIN;
        }
        return this->arr[this->top--];
    }

    int getTop() {
        if(this->top == -1) {
            cout << "Underflow\n";
            return INT_MIN;
        }
        return this->arr[this->top];
    }

    bool isEmpty() {
        return this->top == -1;
    }

    void display() {
        int i = 0;
        while(i <= top) {
            cout << arr[i] << " ";
            i++;
        }
        cout << endl;
    }

    int size() {
        return this->top + 1;
    }

    bool isFull() {
        return this->top == this->capacity - 1;
    }
};

int main() {
    Stack st(5);
    int ele, data;

    while(1) {
        cout << "1.push 2.pop 3.display 4.peek 5.exit Enter your choice: ";
        cin >> ele;
        switch (ele) {
            case 1:
                cout << "Enter the element: ";
                cin >> data;
                st.push(data);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.display();
                break;
            case 4:
                cout << st.getTop() << endl;
                break;
            case 5:
                exit(0);
        }
    }

    return 0;
}
