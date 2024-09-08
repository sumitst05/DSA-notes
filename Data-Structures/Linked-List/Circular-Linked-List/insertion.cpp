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

// Function to insert a node at the beginning
void insertAtHead(Node *&head, int x) {
  // Create a new node
  Node *n = new Node(x);

  // If the list is empty, make the new node the head and point it to itself
  if (head == NULL) {
    head = n;
    head->next = head;
  }
  // If the list is not empty, insert the new node at the beginning of the list
  else {
    // Traverse the list to find the last node
    Node *temp = head;
    while (temp->next != head) {
      temp = temp->next;
    }

    // Insert the new node at the beginning of the list
    n->next = head;
    head = n;
    temp->next = head;
  }
}

// Function to insert a node at a specific position in the list
void insertAfter(Node *head, int pos, int x) {
  // Create a new node
  Node *n = new Node(x);

  // If the list is empty, make the new node the head and point it to itself
  if (head == NULL) {
    head = n;
    head->next = head;
    return;
  }

  // Traverse the list to find the node before the position where the new node
  // is to be inserted
  Node *temp = head;
  int count = 1;
  while (count < pos - 1 && temp->next != head) {
    temp = temp->next;
    count++;
  }

  // If the position is greater than the number of nodes in the list, insert the
  // new node at the end of the list
  if (count < pos - 1) {
    temp->next = n;
    n->next = head;
  }
  // Otherwise, insert the new node at the specified position
  else {
    n->next = temp->next;
    temp->next = n;
  }
}

// Function to insert a node at the end
void push(Node *head, int x) {
  Node *n = new Node(x);
  if (head == NULL) {
    head = n;
    head->next = head;
  } else {
    Node *temp = head;
    while (temp->next != head) {
      temp = temp->next;
    }
    temp->next = n;
    n->next = head;
  }
}

void printList(Node *head) {
  Node *n = head;
  do {
    cout << n->data << " ";
    n = n->next;
  } while (n != head);
}

int main() {
  Node *head = new Node(1);
  head->next = head;

  int i = 1;
  while (i < 5) {
    push(head, i + 1);
    i++;
  }

  cout << "List : ";
  printList(head);

  cout << '\n';

  insertAtHead(head, 0);
  cout << "List after insertion at head : ";
  printList(head);

  cout << '\n';

  insertAfter(head, 4, 18);
  cout << "List after insertion at a specific node : ";
  printList(head);

  cout << '\n';

  push(head, 6);
  cout << "List after insertion at end : ";
  printList(head);

  return 0;
}
