#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100; // maximum size of the queue

class Queue {
private:
    int front; // stores the front index of the queue
    int rear; // stores the rear index of the queue
    int arr[MAX_SIZE]; // array to store elements of the queue
public:
    Queue() { // default constructor
        front = -1; // set front to -1 as there are no elements in the queue
        rear = -1; // set rear to -1 as there are no elements in the queue
    }

    bool isEmpty() { // check if the queue is empty
        if(front == -1 && rear == -1) // if front and rear are -1, then the queue is empty
            return true;
        else
            return false;
    }

    bool isFull() { // check if the queue is full
        if(rear == MAX_SIZE - 1) // if rear is at the last index of the array, then the queue is full
            return true;
        else
            return false;
    }

    void enqueue(int element) { // add an element to the rear of the queue
        if(isFull()) { // if the queue is full, then return
            cout << "Queue is full" << endl;
            return;
        }
        else if(isEmpty()) { // if the queue is empty, then set front to 0
            front = 0;
        }

        rear++; // increment rear
        arr[rear] = element; // add element to the rear
    }

    void dequeue() { // remove an element from the front of the queue
        if (isEmpty()) { // if the queue is empty, then return
            cout << "Queue is empty" << endl;
            return;
        }
        else if (front == rear) { // if there is only one element in the queue, then reset front and rear to -1
            front = -1;
            rear = -1;
        }

        front++; // increment front
    }

    int getFront() { // get the element at the front of the queue
        if (isEmpty()) { // if the queue is empty, then return -1
            cout << "Queue is empty" << endl;
            return -1;
        }

        return arr[front]; // return the element at the front
    }

    int getRear() { // get the element at the rear of the queue
        if (isEmpty()) { // if the queue is empty, then return -1
            cout << "Error: Queue is empty\n";
            return -1;
        }
        return arr[rear];
    }

    void printQueue() { // print the elements of the queue
        if (isEmpty()) { // if the queue is empty, then return
            cout << "Queue is empty" << endl;
            return;
        }

        for (int i = front; i <= rear; i++) { // loop through the elements of the queue from front to rear
            cout << arr[i] << " "; // print each element
        }
        cout << endl;
    }
};

int main() {
    Queue q; // create a queue object

    q.enqueue(10); // add elements to the queue
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    
    q.printQueue(); // print the elements of the queue

    q.dequeue(); // remove an element from the front of the queue
    q.dequeue();

    q.printQueue(); // print the elements of the queue

    cout << "Front element is: " << q.getFront() << endl; // get the element at the front of the queue
    cout << "Rear element is: " << q.getRear() << endl; // get the element at the rear of the queue

    return 0;
}

