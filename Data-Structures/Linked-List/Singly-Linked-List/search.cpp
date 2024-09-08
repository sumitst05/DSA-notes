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
  while (n->next != NULL) {
    cout << n->data << " -> ";
    n = n->next;
  }
  cout << "NULL" << '\n';
}

// This function searches for a node in a linked list that contains a given
// value
void search(Node *head, int x) {
  // Create a pointer called "n" and initialize it to point to the same location
  // in memory as "head"
  Node *n = head;
  // Create a variable called "i" and initialize it to 0
  int i = 0;
  // While "n" is not NULL (i.e. we haven't reached the end of the linked list)
  while (n != NULL) {
    // If the data of the current node is equal to "x"
    if (n->data == x) {
      // Print a message indicating that the node was found and at what index
      cout << "Node found at index " << i << '\n';
      // Exit the function
      return;
    }
    // Move to the next node in the linked list
    n = n->next;
    // Increment the index variable
    i++;
  }
  // If we've reached the end of the linked list without finding the node, print
  // a message indicating that it wasn't found
  cout << "Node not found in the list" << '\n';
}

int main() {
  Node *head;
  push(head, 2);
  push(head, 5);
  push(head, 9);
  push(head, 6);
  push(head, 1);

  printList(head);

  search(head, 6);

  return 0;
}
