#include <iostream>
#include <stack>

using namespace std;

// Provide code for merge sort algorithm


class Queue {
private:
    stack<int> enqueueStack;
    stack<int> dequeueStack;
    

    // Function to transfer elements from enqueueStack to dequeueStack
    void transferElements() {
        if (dequeueStack.empty()) {
            while (!enqueueStack.empty()) {
                dequeueStack.push(enqueueStack.top());
                enqueueStack.pop();
            }
        }
    }

public:
    // Function to add an element to the rear of the queue (enqueue)
    void enqueue(int x) {
        enqueueStack.push(x);
    }

    // Function to remove an element from the front of the queue (dequeue)
    int dequeue() {
        // If both stacks are empty, the queue is empty
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        // Transfer elements from enqueueStack to dequeueStack if necessary
        transferElements();
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
        // Transfer elements from enqueueStack to dequeueStack if necessary
        transferElements();
        // Return the front element from dequeueStack
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
