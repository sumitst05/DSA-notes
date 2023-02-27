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
void reverseRecursive(Node* &head) {
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

int main() {
    Node *head = new Node(1);
    
    append(head, 2);
    append(head, 3);
    
    cout << "List : ";
    printList(head);
    
    reverseRecursive(head);

    cout << "Reversed List : ";
    printList(head);

    return 0;
}
