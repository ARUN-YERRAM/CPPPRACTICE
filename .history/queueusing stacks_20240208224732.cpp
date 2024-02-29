#include <iostream>
#include <stack>

using namespace std;

class Queue {
private:
    stack<int> enqueueStack;
    stack<int> dequeueStack;

public:
    // Function to add an element to the rear of the queue (enqueue)
    void enqueue(int x) {
        // Push all elements from dequeueStack to enqueueStack
        while (!dequeueStack.empty()) {
            enqueueStack.push(dequeueStack.top());
            dequeueStack.pop();
        }
        // Push the new element to enqueueStack
        enqueueStack.push(x);
    }

    // Function to remove an element from the front of the queue (dequeue)
    int dequeue() {
        // If both stacks are empty, the queue is empty
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        // Push all elements from enqueueStack to dequeueStack
        while (!enqueueStack.empty()) {
            dequeueStack.push(enqueueStack.top());
            enqueueStack.pop();
        }
        // Pop the front element from dequeueStack
        int frontElement = dequeueStack.top();
        dequeueStack.pop();
        return frontElement;
    }

    // Function to get the front element of the queue
    int front() {
        // If dequeueStack is not empty, front element is at the top of it
        if (!dequeueStack.empty()) {
            return dequeueStack.top();
        }
        // Otherwise, it's at the bottom of enqueueStack
        while (!enqueueStack.empty()) {
            dequeueStack.push(enqueueStack.top());
            enqueueStack.pop();
        }
        return dequeueStack.top();
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return enqueueStack.empty() && dequeueStack.empty();
    }
};

int main() {
    Queue queue;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    cout << "Front element: " << queue.front() << endl;

    queue.dequeue();

    cout << "Front element after dequeue: " << queue.front() << endl;

    return 0;
}
