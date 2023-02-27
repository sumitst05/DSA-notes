/*
 * Insertion in a DLL can be done in following ways: 
 * 1. At the beginning of list
 * 2. After a specific node
 * 3. At the end of the list
 */

#include<bits/stdc++.h>
using namespace std;

// Initialising a DLL
class Node {
public:
    // Integer data to be stored in the Node
    int data;
    // Pointer to the next Node in the list
    Node *next;
    // Pointer to the previous Node in the list
    Node *prev;
    // Constructor to initialize the Node with given data and null pointers
    Node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

// Function to add a new Node with the given data to the beginning of the list
void push(Node* &head, int x) {
    // Create a new Node with the given data
    Node *n = new Node(x);
    // Set the next pointer of the new Node to the current head of the list
    n->next = head;
    // If the head is not NULL, set the previous pointer of the current head to the new Node
    if(head != NULL) {
        head->prev = n;
    }
    // Set the head of the list to the new Node
    head = n;
}

// This function inserts a new Node with the given value after a given Node in a doubly linked list
void insertAfter(Node* prevNode, int x) {
    // Check if the given previous Node is NULL
    if (prevNode == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }
    // Allocate a new Node with the given value
    Node* new_node = new Node(x);
    // Insert the new Node after the previous Node
    new_node->next = prevNode->next;    // Set the next pointer of the new Node to the next pointer of the previous Node
    prevNode->next = new_node;    // Set the next pointer of the previous Node to the new Node
    new_node->prev = prevNode;    // Set the prev pointer of the new Node to the previous Node
    // Update the prev pointer of the next Node, if it exists
    if (new_node->next != NULL) {
        new_node->next->prev = new_node;    // Set the prev pointer of the next Node to the new Node
    }
}

// This function appends a new Node with the given value to the end of a doubly linked list
void append(Node* &head, int x) {
    // Allocate memory for the new node and set its value to 'x'
    Node* n = new Node(x);
    // Create a temporary node and initialize it to the first node of the linked list
    Node* temp = head;
    // If the linked list is empty, set the first node to be the new node and return
    if(head == NULL) {
        head = n;
        return;
    }
    // Traverse the linked list until the last node is reached
    while(temp->next != NULL) {
        temp = temp->next;
    }
    // Set the next pointer of the last node to point to the new node
    temp->next = n;    
    // Set the previous pointer of the new node to point to the last node
    n->prev = temp;
}

void printList(Node *head) {
    Node *nf = head;    // Node pointer for forward traversal
    Node *nb = NULL;    // Node pointer for backward traversal

    cout << "  Traversing forward:- ";
    cout << "NULL <- ";
    // Loop through the list while the current Node pointer is not NULL
    while(nf != NULL) {
        // Print the data of the current Node
        cout << nf->data;
        // Set the new backward Node pointer to the current Node
        nb = nf;
        if(nf->next != NULL) cout << " <=> ";
        // Move the current Node pointer to the next Node in the list
        nf = nf->next;
    }
    cout << " -> NULL" << '\n';

    cout << "  Traversing backwards:- ";
    cout << "NULL <- ";
    // Loop through the list while the backward Node pointer is not NULL
    while(nb != NULL) {
        // Print the data of the backward Node
        cout << nb->data;
        if(nb->prev != NULL) cout << " <=> ";
        // Move the backward Node pointer to the previous Node in the list
        nb = nb->prev;
    }
    cout << " -> NULL" << '\n';
}

int main() {
    Node *head = new Node(10);  // create a list with head node's data = 10
    cout << "List :" << '\n';
    printList(head);
    
    // Inserting nodes at the beginning
    push(head, 20);
    push(head, 30);
    push(head, 40);
    
    cout << "List after insertion at beginning : " << '\n';
    printList(head);
    cout << '\n';
    
    insertAfter(head->next, 5);   // insert new node after the next to next node of the head
    insertAfter(head, 1);

    cout << "List after insertion at a specific position : " << '\n';
    printList(head);
    cout << '\n';

    append(head, 100);

    cout << "List after insertion at the end : " << '\n';
    printList(head);
    cout << '\n';

    return 0;
}
