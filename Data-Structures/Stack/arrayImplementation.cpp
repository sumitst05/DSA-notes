#include <bits/stdc++.h>
using namespace std;

#define MAX 1000 // Maximum size of stack

class Stack {
    int top; // Index of the top element in the stack

public:
    int a[MAX]; // Array to store the elements of the stack

    Stack() { top = -1; } // Constructor to initialize the stack

    bool push(int x); // Function to push an element onto the stack
    int pop(); // Function to pop an element from the stack
    int peek(); // Function to return the top element of the stack
    bool isEmpty(); // Function to check if the stack is empty
};

bool Stack::push(int x) { // Implementation of push function
    if (top >= (MAX - 1)) { // Check if the stack is full
        cout << "Stack Overflow";
        return false;
    }
    else { // If the stack is not full, push the element onto the stack
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop() { // Implementation of pop function
    if (top < 0) { // Check if the stack is empty
        cout << "Stack Underflow";
        return 0;
    }
    else { // If the stack is not empty, pop the top element from the stack
        int x = a[top--];
        return x;
    }
}

int Stack::peek() { // Implementation of peek function
    if (top < 0) { // Check if the stack is empty
        cout << "Stack is Empty";
        return 0;
    }
    else { // If the stack is not empty, return the top element of the stack
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty() { // Implementation of isEmpty function
    return (top < 0); // Return true if the stack is empty
}

int main() {
    class Stack s; // Create a stack object
    s.push(10); // Push elements onto the stack
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n"; // Pop an element from the stack
    
    // Print the top element of the stack after popping
    cout << "Top element is : " << s.peek() << endl;
    
    // Print all the elements in the stack
    cout << "Elements present in stack : ";
    while (!s.isEmpty()) { // While the stack is not empty
        cout << s.peek() << " "; // Print the top element of the stack
        s.pop(); // Pop the top element from the stack
    }
    return 0;
}

