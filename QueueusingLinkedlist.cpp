#include <iostream>

using namespace std;

// Define the structure for each node in the linked list
struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* frontPtr; // Pointer to the front element of the queue
    Node* rearPtr;  // Pointer to the rear element of the queue
    int size;       // Current number of elements in the queue

public:
    // Constructor to initialize the queue
    Queue() : frontPtr(nullptr), rearPtr(nullptr), size(0) {}

    // Destructor to free the dynamically allocated memory
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    // Function to add an element to the rear of the queue (enqueue)
    void enqueue(int item) {
        Node* newNode = new Node();
        newNode->data = item;
        newNode->next = nullptr;

        if (isEmpty()) {
            frontPtr = newNode;
        } else {
            rearPtr->next = newNode;
        }
        rearPtr = newNode;
        size++;
    }

    // Function to remove an element from the front of the queue (dequeue)
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }

        int frontElement = frontPtr->data;
        Node* temp = frontPtr;

        frontPtr = frontPtr->next;
        if (frontPtr == nullptr) {
            rearPtr = nullptr;
        }

        delete temp;
        size--;
        return frontElement;
    }

    // Function to get the front element of the queue
    int front() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return frontPtr->data;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return frontPtr == nullptr;
    }

    // Function to get the current size of the queue
    int getSize() {
        return size;
    }

    // Function to display the elements of the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        Node* current = frontPtr;
        cout << "Queue: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    Queue queue;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    queue.display();

    cout << "Front element: " << queue.front() << endl;
    cout << "Queue size: " << queue.getSize() << endl;

    queue.dequeue();

    cout << "Front element after dequeue: " << queue.front() << endl;
    cout << "Queue size after dequeue: " << queue.getSize() << endl;

    queue.display();

    return 0;
}