// #include <iostream>

// using namespace std;

// class Queue {
// private:
//     int frontIdx; // Index of the front element
//     int rearIdx;  // Index of the rear element
//     int capacity; // Maximum capacity of the queue
//     int* arr;     // Array to store elements
//     int size;     // Current number of elements in the queue

// public:
//     // Constructor to initialize the queue
//     Queue(int capacity) {
//         this->capacity = capacity;
//         arr = new int[capacity];
//         frontIdx = 0;
//         rearIdx = -1;
//         size = 0;
//     }

//     // Destructor to free the dynamically allocated memory
//     ~Queue() {
//         delete[] arr;
//     }

//     // Function to add an element to the rear of the queue (enqueue)
//     void enqueue(int item) {
//         if (isFull()) {
//             cout << "Queue Overflow\n";
//             return;
//         }
//         rearIdx = (rearIdx + 1) % capacity; // Circular increment rear index
//         arr[rearIdx] = item;
//         size++;
//     }

//     // Function to remove an element from the front of the queue (dequeue)
//     int dequeue() {
//         if (isEmpty()) {
//             cout << "Queue Underflow\n";
//             return -1;
//         }
//         int frontElement = arr[frontIdx];
//         frontIdx = (frontIdx + 1) % capacity; // Circular increment front index
//         size--;
//         return frontElement;
//     }

//     // Function to get the front element of the queue
//     int front() {
//         if (isEmpty()) {
//             cout << "Queue is empty\n";
//             return -1;
//         }
//         return arr[frontIdx];
//     }

//     // Function to check if the queue is empty
//     bool isEmpty() {
//         return size == 0;
//     }

//     // Function to check if the queue is full
//     bool isFull() {
//         return size == capacity;
//     }

//     // Function to get the size of the queue
//     int getSize() {
//         return size;
//     }
// };

// int main() {
//     Queue queue(5);

//     queue.enqueue(1);
//     queue.enqueue(2);
//     queue.enqueue(3);
//     queue.enqueue(4);
//     queue.enqueue(5);

//     cout << "Front element: " << queue.front() << endl;

//     queue.dequeue();

//     cout << "Front element after dequeue: " << queue.front() << endl;

//     cout<<queue.getSize();
//     cout<<endl;
//     cout<<queue.isFull();
//     cout<<endl;


//     return 0;
// }







#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> inbox;
    stack<int> outbox;

public:
    void enqueue(int data) {
        inbox.push(data);
    }

    int dequeue() {
        if (outbox.empty()) {
            while (!inbox.empty()) {
                outbox.push(inbox.top());
                inbox.pop();
            }
        }
        int front = outbox.top();
        outbox.pop();
        return front;
    }

    int getFront() {
        if (outbox.empty()) {
            while (!inbox.empty()) {
                outbox.push(inbox.top());
                inbox.pop();
            }
        }
        return outbox.top();
    }

    bool isEmpty() {
        return inbox.empty() && outbox.empty();
    }

    void display() {
        stack<int> temp = outbox;

        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }

        while (!inbox.empty()) {
            cout << inbox.top() << " ";
            inbox.pop();
        }

        cout << endl;
    }
};

int main() {
    Queue qu;

    int ele, data;

    while(true) {
        cout << "1.Enqueue 2.Dequeue 3.Display 4.Peek 5.Exit\nEnter your choice: ";
        cin >> ele;
        switch (ele) {
            case 1:
                cout << "Enter the element: ";
                cin >> data;
                qu.enqueue(data);
                break;
            case 2:
                qu.dequeue();
                break;
            case 3:
                qu.display();
                break;
            case 4:
                cout << "Front element: " << qu.getFront() << endl;
                break;
            case 5:
                cout << "Exiting..." << endl;
                exit(0);
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
        }
    }
    return 0;
}


