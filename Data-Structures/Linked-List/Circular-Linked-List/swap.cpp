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

// Funciton to swap nodes in a CLL
void swap(Node *&head, int x, int y) {
  if (x == y) { // no need to swap if both values are the same
    return;
  }

  // find the nodes with the specified data values
  Node *prevX = NULL, *currX = head;
  while (currX->data != x &&
         currX->next != head) { // while loop to find node with data x
    prevX = currX;              // set previous node to current node
    currX = currX->next;        // move to the next node
  }

  Node *prevY = NULL, *currY = head;
  while (currY->data != y &&
         currY->next != head) { // while loop to find node with data y
    prevY = currY;              // set previous node to current node
    currY = currY->next;        // move to the next node
  }

  // if either node is not found, return
  if (currX->data != x || currY->data != y) {
    return;
  }

  // handle special case where nodes are adjacent to each other
  if (currX->next == currY) {        // if the nodes are adjacent to each other
    prevX->next = currY;             // update previous node pointer of x node
    currX->next = currY->next;       // update next node pointer of x node
    currY->next = currX;             // update next node pointer of y node
  } else if (currY->next == currX) { // if the nodes are adjacent to each other
    prevY->next = currX;             // update previous node pointer of y node
    currY->next = currX->next;       // update next node pointer of y node
    currX->next = currY;             // update next node pointer of x node
  } else {                           // nodes are not adjacent
    // swap next pointers
    Node *temp = currY->next;  // set temporary pointer to next node of y node
    currY->next = currX->next; // update next node pointer of y node to the next
                               // node of x node
    currX->next =
        temp; // update next node pointer of x node to the temporary pointer

    // update previous node pointers
    if (prevX) {           // if previous node of x node exists
      prevX->next = currY; // update previous node pointer of x node to y node
    }
    if (prevY) {           // if previous node of y node exists
      prevY->next = currX; // update previous node pointer of y node to x node
    }
  }

  // if head node is one of the nodes being swapped, update head
  if (head == currX) {        // if x node is the head node
    head = currY;             // update head node to y node
  } else if (head == currY) { // if y node is the head node
    head = currX;             // update head node to x node
  }
}

int main() {
  Node *head = new Node(7);
  head->next = head;

  push(head, 3);
  push(head, 0);
  push(head, 9);
  push(head, 11);
  push(head, 17);

  cout << "List : ";
  printList(head);

  cout << '\n';

  swap(head, 0, 11);
  cout << "List after swapping nodes with data 0 and 11 : ";
  printList(head);

  return 0;
}
