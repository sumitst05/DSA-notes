#include<bits/stdc++.h>
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

void printList(Node *head) {
    Node *n = head;
    cout << "NULL <- ";
    while(n != NULL) {
        cout << n->data;
        if(n->next != NULL) cout << " <=> ";
        n = n->next;
    }
    cout << " -> NULL" << '\n';
}

void append(Node* &head, int x) {
    Node *n = new Node(x);
    if(head == NULL) {
        head = n;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

// Function to reverse the DLL using iteration
void reverseIterative(Node* &head) {
    // Check if the linked list is empty or has only one node
    if (head == NULL || head->next == NULL)
        return;

    // Reverse the order of the nodes in the list
    Node* curr = head; // Set current node to the current head of the list
    Node* temp = NULL;     // Create a temporary node pointer to store the previous node during reversal
    while(curr != NULL) { // Loop through the list until the end is reached
        temp = curr->prev;    // Store the previous node in the temporary node pointer
        curr->prev = curr->next;  // Swap the previous and next node pointers of the current node
        curr->next = temp;    // Set the next node pointer of the current node to the temporary node pointer
        curr = curr->prev; // Move to the next node in the list
    }

    // Set the head pointer to the new head of the reversed list
    head = temp->prev; // The previous node of the last node processed will be the new head of the reversed list
}

// Function to reverse a DLL using recursion
void reverseRecursive(Node* &head) {
    // Base case: empty or single-node DLL
    if (head == NULL || (head)->next == NULL)
        return;
    // Recursive case: reverse the rest of the DLL and fix pointers
    Node* rest = (head)->next;
    reverseRecursive(rest);

    // Fix the pointers for the current node and the rest of the DLL
    (head)->next->next = head;
    (head)->prev = (head)->next;
    (head)->next = NULL;

    // Update the head pointer to point to the new head node
    head = rest->prev;
}

// Function to reverse a Doubly Linked List (DLL) using a stack
void reverseUsingStack(Node* &head) {
    // Check if the DLL is empty or contains only one node
    if (head == NULL || (head)->next == NULL)
        return;

    // Create a stack to store the nodes of the DLL
    stack<Node*> nodes;
    // Traverse the DLL and push the nodes onto the stack
    Node* current = head;
    while (current != NULL) {
        nodes.push(current);    // Push the current node onto the stack
        current = current->next;    // Move to the next node
    }

    // Set the new head of the DLL to the top of the stack
    head = nodes.top();    // The top of the stack is the new head of the DLL
    nodes.pop();    // Pop the top of the stack since it is now the head

    // Traverse the stack and fix the pointers for the rest of the DLL
    Node* prev = head;    // Set the previous node to the new head of the DLL
    while (!nodes.empty()) {
        Node* current = nodes.top();    // Get the next node from the stack
        nodes.pop();    // Pop the top of the stack since we are done with it

        // Fix the pointers for the current node and the previous node
        prev->next = current;
        current->prev = prev;

        prev = current;    // Set the current node as the previous node for the next iteration
    }

    // Set the tail of the DLL to nullptr
    prev->next = NULL;    // The last node processed in the loop is the new tail of the DLL
}

int main() {
    Node *head = new Node(1);
    
    append(head, 2);
    append(head, 3);
    
    cout << "List : ";
    printList(head);
    
    reverseIterative(head);
    cout << "Reversed List using iteration : ";
    printList(head);

    reverseRecursive(head);
    cout << "Reversed List using recursion: ";
    printList(head);

    reverseUsingStack(head);

    return 0;
}
