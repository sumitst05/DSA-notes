#include <bits/stdc++.h>
using namespace std;

// Node creation
class Node {
public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Function to push nodes in the circular linked list
void push(Node* head, int x) {
    // Create a new node
    Node *n = new Node(x);
    // If the list is empty, make the new node the head and point it to itself
    if (head == NULL) {
        head = n;
        head->next = head;
    }
    // If the list is not empty, insert the new node
    else {
        // Traverse the list to find the last node
        Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        // Insert the new node
        temp->next = n;
        n->next = head;
    }
}

// Function to print a circular linked list
void printList(Node *head) {
    Node *n = head;
    do {
        cout << n->data << " ";
        n = n->next;
    } while(n != head);
}

int main() {
    Node *head = new Node(1);
    head->next = head;

    int i = 1;
    while(i < 5) {
        push(head, i + 1);
        i++;
    }

    printList(head);

    return 0;
}
