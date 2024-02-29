#include <iostream>
#include <queue>

using namespace std;

class Stack {
private:
    queue<int> q1, q2;

public:
    // Push element x onto stack.
    void push(int x) {
        // Push the element to an empty queue
        // and transfer all elements from the other queue to it
        if (q1.empty()) {
            q1.push(x);
            while (!q2.empty()) {
                q1.push(q2.front());
                q2.pop();
            }
        } else {
            q2.push(x);
            while (!q1.empty()) {
                q2.push(q1.front());
                q1.pop();
            }
        }
    }

    // Removes the element on top of the stack and returns that element.
    int pop() {
        int topElement = top();
        if (!q1.empty()) {
            q1.pop();
        } else {
            q2.pop();
        }
        return topElement;
    }

    // Get the top element.
    int top() {
        if (!q1.empty()) {
            return q1.front();
        } else {
            return q2.front();
        }
    }

    // Returns whether the stack is empty.
    bool empty() {
        return q1.empty() && q2.empty();
    }
};

int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top element: " << stack.top() << endl;

    stack.pop();
    cout << "Top element after pop: " << stack.top() << endl;

    return 0;
}
