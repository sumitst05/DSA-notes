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

// Function to search for a node with data value "key" in a circular linked list
bool search(Node *head, int key) {
  if (head == NULL) {
    return false; // empty list
  }
  Node *temp = head; // initialize a temporary pointer to the head of the list
  do { // traverse the list using a do-while loop, since we need to check the
       // head node as well
    if (temp->data == key) {
      return true; // found the node with the given data value
    }
    temp = temp->next; // move to the next node in the list
  } while (temp != head); // continue until we reach the head node again
  return false; // node not found
}

int main() {
  Node *head = new Node(5);
  head->next = head;

  push(head, 6);
  push(head, 9);
  push(head, 3);
  push(head, 1);

  cout << "List : ";
  printList(head);

  cout << '\n';

  if (search(head, 3)) {
    cout << "The node with data = 3 is present in the list" << '\n';
  } else {
    cout << "Node with data = 3 is not present in the list" << '\n';
  }

  return 0;
}
