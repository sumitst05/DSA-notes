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

## Linked List Implementation
In the linked list implementation of stack, we can use a singly linked list or a doubly linked list to store the stack elements. The top of the stack is represented by the head node of the linked list.

| Operation | Time Complexity | Space Complexity |
| --- | --- | --- |
| Push | O(1) | O(1) |
| Pop | O(1) | O(1) |
| Peek | O(1) | O(1) |
| isEmpty | O(1) | O(1) |

## STL Implementation
C++ provides a stack container in the STL (Standard Template Library) which implements the stack data structure. It is a dynamic data structure, which means its size can change during runtime. 

| Operation | Time Complexity | Space Complexity |
| --- | --- | --- |
| Push | O(1) | O(1) |
| Pop | O(1) | O(1) |
| Top | O(1) | O(1) |
| Empty | O(1) | O(1) |

To use the STL stack, we need to include the \<stack> header file. Here's an example of how to use the stack container in C++:

```c++
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    // Output: 3 2 1
    return 0;
}```
