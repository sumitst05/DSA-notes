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

void append(Node* head, int x) {
    Node* node = new Node(x);
    if(head == NULL) {
        head = node;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
}

void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << '\n';
}

void swap(Node* &head, int a, int b) {
    if(a == b) return;  // If a and b are the same, no need to swap

    // Initializing two pointers to keep track of the node containing a
    Node *prevA = NULL, *currA = head;
    while(currA && currA->data != a) {  // Find the node containing a
        prevA = currA;
        currA = currA->next;
    }

    // Initializing two pointers to keep track of the node containing b
    Node *prevB = NULL, *currB = head;
    while(currB && currB->data != b) {  // Find the node containing b
        prevB = currB;
        currB = currB->next;
    }

    if(currA == NULL || currB == NULL) return;  // If either node is not found, return

    // Swapping the pointers to the nodes containing a and b
    if(prevA != NULL) { // if currA is not the head
        prevA->next = currB;
    } else {
        head = currB;
    }

    if(prevB != NULL) { // if currB is not the head
        prevB->next = currA;
    } else {
        head = currA;
    }

    Node *temp = currB->next;  // Store the next node of the node containing b
    currB->next = currA->next;  // Set the next node of the node containing b to the next node of the node containing a
    currA->next = temp;  // Set the next node of the node containing a to the next node of the node containing b
}

int main() {
    Node* head = new Node(1);
    int i = 1;
    while(i < 10) {
        append(head, i + 1);
        i++;
    }
    cout << "List : ";
    printList(head);

    cout << '\n';
    
    int a = 4, b = 8;
    swap(head, a, b);
    cout << "List after swapping nodes with values(data) " << a << " and " << b << " : ";
    printList(head);

    return 0;
}
