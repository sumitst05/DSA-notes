#include <bits/stdc++.h> // Include all standard libraries
using namespace std;

// Define the structure of the Node
struct Node {
    int data; // Value stored in the Node
    Node* next; // Pointer to the next Node in the Queue
    Node(int x) { // Constructor to initialize a new Node
        data = x; // Set the data value of the Node to x
        next = NULL; // Set the next pointer of the Node to NULL
    }
};

// Define the Queue class
class Queue {
private:
    Node* front; // Pointer to the front of the Queue
    Node* rear; // Pointer to the rear of the Queue
public:
    // Constructor to initialize an empty Queue
    Queue() {
        front = NULL; // Set the front pointer to NULL
        rear = NULL; // Set the rear pointer to NULL
    }
    
    void printQueue() {
        if (isEmpty()) { // If the Queue is empty
            cout << "Queue is empty" << endl; // Print an error message
            return; // Exit the function
        }
        Node* current = front; // Create a temporary Node pointer to the front Node
        while (current != NULL) { // Traverse the Queue and print each element
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl; // Print a newline character to end the output
    }

    // Function to check if the Queue is empty
    bool isEmpty() {
        return (front == NULL); // Return true if the front pointer is NULL (indicating an empty Queue)
    }
    
    // Function to add an element to the rear of the Queue
    void enqueue(int x) {
        Node* newNode = new Node(x); // Create a new Node with the given data value
        if (rear == NULL) { // If the Queue is empty
            front = newNode; // Set both the front and rear pointers to the new Node
            rear = newNode;
            return; // Exit the function
        }
        rear->next = newNode; // Set the next pointer of the current rear Node to the new Node
        rear = newNode; // Update the rear pointer to point to the new Node
    }
    
    // Function to remove the element from the front of the Queue
    int dequeue() {
        if (isEmpty()) { // If the Queue is empty
            cout << "Queue is empty" << endl;
            return INT_MIN; // Return the minimum possible integer value
        }
        Node* temp = front; // Create a temporary Node pointer to the front Node
        int data = temp->data; // Retrieve the data value of the front Node
        front = front->next; // Update the front pointer to point to the next Node
        delete(temp); // Delete the temporary Node pointer
        if (front == NULL) { // If the Queue is now empty
            rear = NULL; // Set the rear pointer to NULL
        }
        return data; // Return the data value of the removed Node
    }
    
    // Function to get the element at the front of the Queue
    int peek() {
        if (isEmpty()) { // If the Queue is empty
            cout << "Queue is empty" << endl;
            return INT_MIN; // Return the minimum possible integer value
        }
        return front->data; // Return the data value of the front Node
    }
};

int main() {
    Queue q; // Create a new Queue object
    q.enqueue(10); // Add elements to the Queue
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.printQueue(); // Print all elements in the queue
    cout << "Element at front: " << q.peek() << endl; // Get the element at the front of the Queue
    cout << "Dequeued element: " << q.dequeue() << endl; // Remove and retrieve the element at the front of the Queue
    cout << "Element at front: " << q.peek() << endl; // Get the new element at the front of the Queue
    q.printQueue(); // Print all elements in the queue
    return 0; // Return 0 to indicate successful execution of the program
}
