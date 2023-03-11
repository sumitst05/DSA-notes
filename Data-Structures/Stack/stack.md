# Stack:

- A stack is a linear data structure that follows the Last-In-First-Out (LIFO) principle. It is an ordered list of elements, in which all the insertions and deletions take place at one end called the top. The end opposite to the top is known as the base.
- Stack uses an encapsulated object of either vector or deque (by default) or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements. 
- A stack has two primary operations, push and pop. 
    - Push operation inserts an element onto the top of the stack. 
    - Pop operation removes an element from the top of the stack. 
- The topmost element of the stack is the one that is most recently added, and the bottommost element is the one that is least recently added.
- Stacks can be implemented in two ways:-
    - Using arrays: The array implementation is the simplest and the most widely used implementation of a stack. 
    - Using linked lists: The linked list implementation of a stack is more flexible and can be used when the size of the stack is unknown or unpredictable.
- STL stack: 
    - STL stack is another method of implementing a stack in C++. The STL (Standard Template Library) provides a pre-defined stack container that can be used to implement the stack data structure. The stack container in the STL is a part of the container library and provides various methods to perform the stack operations like push, pop, and top.
    - Using STL stack is a convenient method of implementing the stack as it saves the time and effort of writing the entire implementation code for the stack. Also, the STL stack is a type-safe container, which makes it more efficient and reliable.

- Uses: Stacks are used in many algorithms and applications, such as expression evaluation, backtracking, recursion, and memory management. They are also used in many programming languages to implement functions, as function calls can be easily represented using a stack.
