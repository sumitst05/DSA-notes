#include <bits/stdc++.h>
using namespace std;

// A structure to represent a stack
class StackNode {
public:
  int data;        // data of the node
  StackNode *next; // pointer to the next node in the stack
};

// Function to create a new node with given data
StackNode *newNode(int data) {
  // Allocate memory for new stack node
  StackNode *stackNode = new StackNode();

  // Assign the data and set the next pointer to null
  stackNode->data = data;
  stackNode->next = NULL;

  // Return the newly created node
  return stackNode;
}

// Function to check if the stack is empty
int isEmpty(StackNode *root) {
  // If the root pointer is null, then the stack is empty
  return !root;
}

// Function to add an element to the stack
void push(StackNode **root, int data) {
  // Create a new node with the given data
  StackNode *stackNode = newNode(data);

  // Set the next pointer of the new node to the current root
  stackNode->next = *root;

  // Set the root pointer to the new node
  *root = stackNode;

  // Print the data that was pushed to the stack
  cout << data << " pushed to stack\n";
}

// Function to remove the top element from the stack
int pop(StackNode **root) {
  // If the stack is empty, return the minimum integer value
  if (isEmpty(*root))
    return INT_MIN;

  // Create a temporary node to hold the current root
  StackNode *temp = *root;

  // Set the root pointer to the next node in the stack
  *root = (*root)->next;

  // Get the data from the temporary node
  int popped = temp->data;

  // Free the memory used by the temporary node
  free(temp);

  // Return the popped data
  return popped;
}

// Function to get the top element of the stack
int peek(StackNode *root) {
  // If the stack is empty, return the minimum integer value
  if (isEmpty(root))
    return INT_MIN;

  // Return the data from the root node
  return root->data;
}

int main() {
  // Create a pointer to the root of the stack and set it to null
  StackNode *root = NULL;

  // Push some data onto the stack
  push(&root, 10);
  push(&root, 20);
  push(&root, 30);

  // Pop the top element from the stack and print it
  cout << pop(&root) << " popped from stack\n";

  // Get the top element of the stack and print it
  cout << "Top element is " << peek(root) << endl;

  // Print all the elements in the stack
  cout << "Elements present in stack : ";
  while (!isEmpty(root)) {
    // Print the top element of the stack
    cout << peek(root) << " ";

    // Pop the top element from the stack
    pop(&root);
  }
  return 0;
}
