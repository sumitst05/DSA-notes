#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100 // Maximum size of the queue

class CircularQueue {
private:
  int data[MAX_SIZE]; // Array to store the elements in the queue
  int front, rear;    // Pointers to the front and rear of the queue

public:
  CircularQueue() { // Constructor to initialize the queue
    front = -1;
    rear = -1;
  }

  bool isEmpty() { // Function to check if the queue is empty
    return front == -1;
  }

  bool isFull() { // Function to check if the queue is full
    return (rear + 1) % MAX_SIZE == front;
  }

  void enqueue(int x) { // Function to add an element to the queue
    if (isFull()) {     // If the queue is full
      cout << "Queue is full" << endl; // Print an error message
      return;
    }
    if (isEmpty()) { // If the queue is empty
      front = 0;
      rear = 0;
    } else {
      rear = (rear + 1) %
             MAX_SIZE; // Increment the rear pointer in a circular manner
    }
    data[rear] = x; // Add the new element to the rear of the queue
  }

  int dequeue() {    // Function to remove an element from the queue
    if (isEmpty()) { // If the queue is empty
      cout << "Queue is empty" << endl; // Print an error message
      return -1;
    }
    int x = data[front]; // Get the element at the front of the queue
    if (front == rear) { // If there's only one element in the queue
      front = -1;
      rear = -1;
    } else {
      front = (front + 1) %
              MAX_SIZE; // Increment the front pointer in a circular manner
    }
    return x; // Return the element that was removed from the queue
  }

  int peek() {       // Function to get the element at the front of the queue
    if (isEmpty()) { // If the queue is empty
      cout << "Queue is empty" << endl; // Print an error message
      return -1;
    }
    return data[front]; // Return the element at the front of the queue
  }

  void printQueue() { // Function to print all elements in the queue
    if (isEmpty()) {  // If the queue is empty
      cout << "Queue is empty" << endl; // Print an error message
      return;
    }
    int i = front;
    while (i != rear) { // Traverse the queue and print each element
      cout << data[i] << " ";
      i = (i + 1) % MAX_SIZE; // Increment the index in a circular manner
    }
    cout << data[rear] << endl; // Print the last element in the queue
  }
};

int main() {
  CircularQueue q; // Create a new circular queue object
  q.enqueue(10);   // Add elements to the queue
  q.enqueue(20);
  q.enqueue(30);
  q.enqueue(40);
  q.printQueue(); // Print all elements in the queue
  cout << "Element at front: " << q.peek()
       << endl; // Get the element at the front of the queue
  cout << "Dequeued element: " << q.dequeue()
       << endl; // Remove and retrieve the element at the front of the queue
  cout << "Element at front: " << q.peek() << endl; // Get the new element
  q.printQueue(); // Print all elements in the queue
  return 0;
}
