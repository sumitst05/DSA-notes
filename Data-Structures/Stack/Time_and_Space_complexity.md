# Time and Space Complexity

## Array Implementation:
In the array implementation of stack, we can use an array to store the stack elements. The top of the stack is represented by an integer variable which stores the index of the top element in the array.

One disadvantage of array implementation of stack is that the stack size needs to be predefined.

| Operation | Time Complexity | Space Complexity |
| --- | --- | --- |
| Push | O(1) | O(1) |
| Pop | O(1) | O(1) |
| Peek | O(1) | O(1) |
| isEmpty | O(1) | O(1) |
| isFull | O(1) | O(1) |

## Linked List Implementation
In the linked list implementation of stack, we can use a singly linked list or a doubly linked list to store the stack elements. The top of the stack is represented by the head node of the linked list.

| Operation | Time Complexity | Space Complexity |
| --- | --- | --- |
| Push | O(1) | O(1) |
| Pop | O(1) | O(1) |
| Peek | O(1) | O(1) |
| isEmpty | O(1) | O(1) |
| isFull | Not Applicable | O(n) |
