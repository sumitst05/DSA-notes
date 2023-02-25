/*
 * Deletion in linked-list can be done in 3 ways:
 * 1. Deletetion from the beginning
 * 2. Deletion from the end
 * 3. Deletion at a specific position
 */

#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Function to add nodes in the linked-list
void push(Node* &head, int x) {
    Node* n = new Node(x);  // Allocate a new node with data = x
    n->next = head;     // make new node's next as head
    head = n;   // move the head to point to the new node
}

// Funtion to print the linked-list
void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << '\n';
}

// Function to delete head node of a linked-list
void deleteHead(Node* &head) {
    Node *n = head; // Create a temporary pointer to the head node
    head = head->next; // Update the head to point to the second node
    delete(n); // Delete the original head node
}

// Function to delete the node from the end
void deleteEnd(Node* &head) {
    Node* end = head; // Create a temporary pointer to the head node
    Node* prev = NULL; // Create a pointer to keep track of the second-last node
    while(end->next != NULL) { // Traverse the list until we reach the last node
        prev = end; // Update the previous pointer
        end = end->next; // Move to the next node
    }
    prev->next = NULL; // Update the next pointer of the second-last node to NULL
    delete(end); // Delete the last node
}

// Function to delete a node at a specific position
void deleteNthNode(Node* head, int pos) {
    Node* n = head; // Create a temporary pointer to the head node
    Node* prev = head; // Create a pointer to keep track of the previous node
    int i = 0; // Initialize a counter variable

    // Traverse the list until we reach the desired position
    while(i < pos) {
        if(i == 0 && pos == 1) { // Special case for deleting the first node
            head = head->next; // Update the head pointer to skip the first node
            delete(n); // Delete the first node
        } else {
            if(i == pos - 1 && n != NULL) { // If we've reached the desired position
                prev->next = n->next; // Update the previous node's next pointer to skip the current node
                delete(n); // Delete the current node
            } else {
                prev = n; // Update the previous node pointer
                if(prev == NULL) { // If we reach the end of the list before reaching the desired position
                    break;
                }
                n = n->next; // Move to the next node
            }
        }
        i++; // Increment the counter variable
    }
}

int main() {
    Node* head = NULL;  // empty linked-list
    
    // Adding nodes
    int i = 10;
    while(i >= 1) {
        push(head, i);
        i--;
    }
    cout << "Before Deletion: \n";
    printList(head);
    
    cout << "After deleting head: \n";
    deleteHead(head);
    printList(head);

    cout << "After deleting end node: \n";
    deleteEnd(head);
    printList(head);
    
    cout << "After deleting Nth(3rd) node: \n";
    deleteNthNode(head, 3);
    printList(head);

    return 0;
}
