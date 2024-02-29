#include <iostream>

using namespace std;

class Queue {
private:
    int frontIdx; 
    int rearIdx;  
    int capacity; 
    int* arr;     
    int size;     

public:
    // Constructor to initialize the queue
    Queue(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        frontIdx = 0;
        rearIdx = -1;
        size = 0;
    }

    // Destructor to free the dynamically allocated memory
    ~Queue() {
        delete[] arr;
    }

    // Function to add an element to the rear of the queue (enqueue)
    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return;
        }
        rearIdx = (rearIdx + 1) % capacity; // Circular increment rear index
        arr[rearIdx] = item;
        size++;
    }

    // Function to remove an element from the front of the queue (dequeue)
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return -1;
        }
        int frontElement = arr[frontIdx];
        frontIdx = (frontIdx + 1) % capacity; // Circular increment front index
        size--;
        return frontElement;
    }

    // Function to get the front element of the queue
    int front() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[frontIdx];
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return size == 0;
    }

    // Function to check if the queue is full
    bool isFull() {
        return size == capacity;
    }

    // Function to get the size of the queue
    int getSize() {
        return size;
    }
};

int main() {
    Queue queue(5);

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    cout << "Front element: " << queue.front() << endl;

    queue.dequeue();

    cout << "Front element after dequeue: " << queue.front() << endl;

    return 0;
}
