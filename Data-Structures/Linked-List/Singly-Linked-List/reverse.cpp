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

void push(Node* &head, int x) {
    Node *n = new Node(x);
    n->next = head;
    head = n;
}

void printList(Node *head) {
    Node *n = head;
    while(n != NULL) {
        cout << n->data << " -> ";
        n = n->next;
    }
    cout << "NULL" << '\n';
}

void reverseList(Node* &head) {
    Node* current = head; // Initialize a pointer to the head of the list
    Node* prev = NULL; // Initialize a pointer to the previous node (which is initially nullptr)
    Node* next = NULL; // Initialize a pointer to the next node (which is initially nullptr)
    
    // Swap the next pointers for all nodes of the list
    while (current != NULL) {
        next = current->next; // Save the current node's next pointer in the next variable
        current->next = prev; // Update the current node's next pointer to the previous node
        prev = current; // Move the prev pointer to the current node
        current = next; // Move the current pointer to the next node
    }
    
    head = prev; // Update the head pointer to the new head of the reversed list (which is the previous node)
}

int main() {
    Node *head = NULL;
    int i = 1;
    while(i <= 5) {
        push(head, i);
        i++;
    }
    cout << "List : ";
    printList(head);

    reverseList(head);

    cout << "Reversed List : ";
    printList(head);

    return 0;
}
