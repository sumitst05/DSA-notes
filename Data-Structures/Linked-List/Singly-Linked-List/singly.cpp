#include <bits/stdc++.h>
using namespace std;

// Node creation
class Node {
public:
  int data;
  Node *next;
};

// Node creation with a constructor
class ListNode {
public:
  int data;
  Node *next;
  ListNode(int x) { // constructor with argument of an integer x (data)
    data = x;
    next = NULL;
  }
};

// Function to push data in the linked-list
void push(Node *&head, int x) {
  Node *n = new Node(); // Allocate new node
  n->data = x;          // set data of node as x
  n->next = head;       // make new node's next as head
  head = n;             // move head to point to new node
}

// Prints the nodes(elements) of the list
void printList(Node *n) {
  while (n != NULL) {        // loop till the last node
    cout << n->data << "->"; // print current node data
    n = n->next;             // move to the next node
  }
  cout << "NULL\n";
}

int main() {
  Node *node = new Node;      // initialising a node to store NULL
  node->data = 10;            // will store value 10
  node->next = NULL;          // will point towards NULL
  cout << node->data << '\n'; // print data
  cout << node->next << '\n'; // print next pointer

  ListNode *listnode =
      new ListNode(5); // insitialising a node using a constructor
  cout << listnode->data << '\n';
  cout << listnode->next << '\n';

  // creating a linkedlist of 3 nodes
  Node *head = new Node(); // head node
  Node *second = new Node();
  Node *third = new Node();

  head->data = 1;      // inserts data in the node
  head->next = second; // link current node to the next node

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = NULL;

  cout << "Linked List: \n";
  printList(head); // prints the list

  // Adding nodes to linked-list using push()
  push(head, 4);
  push(head, 5);

  printList(head);

  return 0;
}
