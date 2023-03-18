# Queue

A Queue is a linear data structure that works on the principle of first-in-first-out (FIFO). The name 'queue' reflects its behavior as it resembles a queue of people. The first person to arrive at the queue is the first person to leave the queue. Similarly, the first element to enter the queue is the first element to be removed.

In a Queue, elements can only be added from the back (rear) and removed from the front (front).

## Types of Queue:
- **Simple Queue**: In Simple Queue, elements are stored in a FIFO (First In First Out) manner. A simple queue has only two operations, enqueue (insert) and dequeue (delete).
- **Circular Queue**: Circular Queue is an advanced version of Simple Queue in which we connect the last element of the queue to the first element to make a circular structure.

## Operations:
- **enqueue()**: Adds an element to the back of the queue.
- **dequeue()**: Removes an element from the front of the queue.
- **front()**: Returns the element at the front of the queue without removing it.
- **isEmpty()**: Returns true if the queue is empty, false otherwise.
- **size()**: Returns the number of elements in the queue.
