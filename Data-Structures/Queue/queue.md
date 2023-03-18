# Queue:

- A queue is a linear data structure that follows the First-In-First-Out (FIFO) principle. It is an ordered list of elements in which insertions take place at one end called the rear, and deletions take place at the other end called the front. 
- A queue uses an encapsulated object of deque (Double ended queue) by defaule or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements. 

## Operations:
- A queue has two primary operations, enqueue and dequeue. 
    - Enqueue operation inserts an element at the rear of the queue. 
    - Dequeue operation removes an element from the front of the queue. 
- The front of the queue is the one that is least recently added, and the rear of the queue is the one that is most recently added.

## Implementation: 
- Queues can be implemented using arrays or linked lists.
    - Array implementation: The array implementation is the simplest and most widely used implementation of a queue. It uses a linear array to store the elements, and the front and rear indices are adjusted accordingly after each enqueue and dequeue operation. One disadvantage of this implementation is that it has a fixed size and cannot be resized dynamically. 
    - Linked list implementation: The linked list implementation of a queue is more flexible and can be used when the size of the queue is unknown or unpredictable. It uses a doubly linked list to store the elements, and the front and rear pointers are adjusted accordingly after each enqueue and dequeue operation. One advantage of this implementation is that it can be resized dynamically.
- Queues can also be implemented in different variations, including:
    - Simple queue: The simple queue is the most basic implementation of a queue, where the elements are stored in a linear sequence and the front and rear indices are adjusted accordingly after each enqueue and dequeue operation. 
    - Circular queue: A circular queue is an improvement over the simple queue that solves the problem of unused spaces in the queue after dequeuing elements. It uses a circular array to store the elements, and the front and rear indices are adjusted accordingly after each enqueue and dequeue operation. 
    - Double-ended queue: A double-ended queue (deque) is a generalization of the queue data structure, where elements can be inserted and removed from both ends. It supports the operations of both stacks and queues and can be implemented using arrays or linked lists. 
    - Priority queue: A priority queue is a variation of the queue data structure in which each element is associated with a priority and is served according to its priority. Elements with higher priority are dequeued first, and in the case of equal priorities, they follow the FIFO principle. 

## 4. Uses

- Queues are used in many algorithms and applications, such as breadth-first search, simulation, scheduling, and event-driven programming. They are also used in many computer systems, such as operating systems, routers, and printers, to manage the requests and tasks in a fair and efficient manner.
