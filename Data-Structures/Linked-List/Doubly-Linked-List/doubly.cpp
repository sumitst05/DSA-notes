// DLL : Doubly Linked List
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

// Function to push a node with data field 'x' at beginning of a node
void push(Node* &head, int x) {
    // Create a new node with the given value 'x'
    Node *n = new Node(x);
    // Make the 'next' pointer of the new node point to the current head of the list
    n->next = head;
    // If the list is not empty, make the 'prev' pointer of the current head point to the new node
    if(head != NULL) {
        head->prev = n;
    }
    // Make the head of the list point to the new node
    head = n;
}

// Function to print a DLL
void printList(Node *head) {
    // Start from the head node
    Node *n = head;
    // Print 'NULL <=> ' to indicate the start of the list
    cout << "NULL" << " <=> ";
    // Traverse the list and print each node's value along with '<=>'
    while(n != NULL) {
        cout << n->data << " <=> ";
        n = n->next;
    }
    // Print 'NULL' to indicate the end of the list
    cout << "NULL" << '\n';
}

int main() {
    Node *head = new Node(1);   // insitalise a list with one node of data = 1
    push(head, 2);  // push node at head in the list
    push(head, 3);
    printList(head);    // print list

    return 0;
}
