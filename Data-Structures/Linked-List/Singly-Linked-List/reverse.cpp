#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void push(Node *&head, int x) {
  Node *n = new Node(x);
  n->next = head;
  head = n;
}

void printList(Node *head) {
  Node *n = head;
  while (n != NULL) {
    cout << n->data << " -> ";
    n = n->next;
  }
  cout << "NULL" << '\n';
}

// Function to reverse a list using iteration
void reverseIterative(Node *&head) {
  Node *current = head; // Initialize a pointer to the head of the list
  Node *prev = NULL;    // Initialize a pointer to the previous node (which is
                        // initially nullptr)
  Node *next = NULL;    // Initialize a pointer to the next node (which is
                        // initially nullptr)

  // Swap the next pointers for all nodes of the list
  while (current != NULL) {
    next =
        current
            ->next; // Save the current node's next pointer in the next variable
    current->next =
        prev; // Update the current node's next pointer to the previous node
    prev = current; // Move the prev pointer to the current node
    current = next; // Move the current pointer to the next node
  }

  head = prev; // Update the head pointer to the new head of the reversed list
               // (which is the previous node)
}

// Recursive function to reverse a linked list
Node *reverseRecursive(Node *current, Node *previous = NULL) {
  // Check if the current node is NULL, which indicates that the end of the list
  // has been reached. If so, return the previous node, which is the new head of
  // the reversed list.
  if (current == NULL) {
    return previous;
  } // Save a pointer to the next node in the list, since we're going to
    // overwrite the current node's "next" pointer in the next step.
  Node *next = current->next;

  // Reverse the "next" pointer of the current node to point to the previous
  // node
  current->next = previous;

  // Recursively call this function with the next node and the current node as
  // arguments, so that we can continue reversing the list.
  return reverseRecursive(next, current);
}

void reverseWithStack(Node *&head) {
  // Create an empty stack to store the nodes of the linked list
  stack<Node *> nodeStack;
  // Push each node of the linked list onto the stack
  Node *current = head;
  while (current != NULL) {
    nodeStack.push(current);
    current = current->next;
  }
  // Pop the top node from the stack and make it the new head of the list
  head = nodeStack.top();
  nodeStack.pop();
  // Set "current" to point to the new head of the list
  current = head;
  // Pop the remaining nodes from the stack and link them together in reverse
  // order
  while (!nodeStack.empty()) {
    // Pop the next node from the stack and make it the "next" node of the
    // current node
    current->next = nodeStack.top();
    nodeStack.pop();

    // Move "current" forward to the new "next" node
    current = current->next;
  }
  // Set the "next" pointer of the last node to NULL to indicate the end of the
  // list
  current->next = NULL;
}

int main() {
  Node *head = NULL;
  int i = 1;
  while (i <= 5) {
    push(head, i);
    i++;
  }
  cout << "List : ";
  printList(head);

  reverseIterative(head);

  cout << "Reversed List using iteration : ";
  printList(head);

  head = reverseRecursive(head);

  cout << "Reversed List using recursion : ";
  printList(head);

  reverseWithStack(head);

  cout << "Reversed List using stack : ";
  printList(head);

  return 0;
}
