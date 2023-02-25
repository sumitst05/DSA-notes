/* 
 * Insertion in a linked-list can be done in 3 ways:
 * 1. At beginning: Inserting the node before the head node
 * 2. At end: Inserting the node at the end of the linked-list
 * 3. At a specified position: Inserting the node after a specified node
 */

#include<bits/stdc++.h>
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

// Fucntion to insert a node at the beginning of a linked-list
void insertAtHead(Node* &head, int x) {
    Node *n = new Node(x);  // Allocate memory for the new node and set its data field
    n->next = head;   // Set the new node's next to point to current head
    head = n;   // Update the head pointer to point to the new node
}

// Function to insert a node at a specified position
void insertAfter(Node* head, int key, int x) {
    Node* n = new Node(x);
    // If the key matches the data in the first node of the list
    if (key == head->data) { 
        // Set the new node's next field to point to the second node in the list
        n->next = head->next;
        // Set the first node's next field to point to the new node
        head->next = n;
        return;  // exit the function early
    }
    // If the key does not match the first node, search for it in the rest of the list
    Node* temp = head;  
    while (temp->data != key) {
        temp = temp->next;
        // If we reach the end of the list without finding the key, exit the function
        if (temp == NULL) {
            return;
        }
    }
    // Set the new node's next field to point to the node after the key
    n->next = temp->next;
    // Set the node before the key's next field to point to the new node
    temp->next = n;
}

// Function to insert the node at the end of the linked-list
void insertAtEnd(Node* head, int x) {
    Node *n = new Node(x);
    // If the list is currently empty, make the new node the head of the list and exit
    if(head == NULL) {
        head = n;
        return;
    }
    // Otherwise, traverse the list to find the last node
    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    // Set the last node's next field to point to the new node
    temp->next = n;
}
void printList(Node* &head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << '\n';
}

int main() {
    Node* head = NULL;  // empty linked-list

    cout << "Before Insertion: \n";
    printList(head);

    // Function calls
    insertAtHead(head, 1);
    cout << "After inserting at head: \n";
    printList(head);

    insertAfter(head, 1, 2);
    cout << "After inserting at index 1: \n";
    printList(head);

    insertAtEnd(head, 3);
    cout << "After inserting at end: \n";
    printList(head);    

    return 0;
}
