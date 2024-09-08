#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node *prev;
  Node(int x) {
    data = x;
    next = NULL;
    prev = NULL;
  }
};

void append(Node *&head, int x) {
  Node *n = new Node(x);
  Node *temp = head;
  if (head == NULL) {
    head = n;
    return;
  }
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = n;
  n->prev = temp;
}

void printList(Node *head) {
  Node *nf = head;
  cout << "NULL <- ";
  while (nf != NULL) {
    cout << nf->data;
    if (nf->next != NULL)
      cout << " <=> ";
    nf = nf->next;
  }
  cout << " -> NULL" << '\n';
}

// Function to search for a node in a DLL
bool search(Node *head, int key) {
  // Traverse the list from the head node
  Node *current = head;
  while (current != NULL) {
    // If the key is found, return true
    if (current->data == key) {
      return true;
    }
    // Move to the next node
    current = current->next;
  }
  // If the key is not found, return false
  return false;
}

int main() {
  Node *head = NULL;
  append(head, 1);
  append(head, 3);
  append(head, 9);
  append(head, 12);

  if (search(head, 9)) {
    cout << "Given node is present in the linked list" << '\n';
  } else {
    cout << "Given node is not present in the linked list" << '\n';
  }

  return 0;
}
