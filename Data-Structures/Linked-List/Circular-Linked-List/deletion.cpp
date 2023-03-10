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
    if (head == NULL) {
        head = n;
        head->next = head;
    }
    else {
        Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
    }
}

void printList(Node *head) {
    Node *n = head;
    do {
        cout << n->data << " ";
        n = n->next;
    } while(n != head);
}

// Function to delete head node of a CLL
void deleteHead(Node* &head) {
    Node *curr = head, *prev = head;  // initialize two pointers pointing to the head of the linked list

    if(head == NULL) {  // if the linked list is empty
        cout << "The list is empty" << '\n';  // print a message
        return;  // exit the function
    }

    if(prev->next == prev) {  // if there is only one element in the linked list
        head =  NULL;  // set the head to NULL
        return;  // exit the function
    }

    while(prev->next != head) {  // traverse the linked list till the end
        prev = prev->next;  // update the pointer to point to the last node
    }
    prev->next = curr->next;  // point the last node to the second node
    head = prev->next;  // update the head pointer to point to the second node
    delete(curr);  // delete the first node
}

// Function to delete node at a given position in a CLL
void deleteNodeAtPos(Node* &head, int pos) {
    if (head == NULL) {
        cout << "The list is empty." << endl;
        return;
    }
    Node *curr = head, *prev = NULL;
    int length = 0;

    // Calculate length of list
    do {
        length++;
        prev = curr;
        curr = curr->next;
    } while (curr != head);

    // Check if pos is out of bounds
    if(pos < 0 || pos >= length) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Delete head node
    if(pos == 0) {
        // Find last node
        Node* lastNode = head;
        while (lastNode->next != head) {
            lastNode = lastNode->next;
        }

        // Set new head node
        head = head->next;
        lastNode->next = head;
        delete curr;
        return;
    }

    // Delete non-head node
    for (int i = 0; i < pos; i++) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete(curr);
}

// Function to delete last node of a CLL
void deleteLast(Node* &head) {
    Node *prev = head, *curr = head;
    if(head == NULL) {
        cout << "The list is empty" << '\n';
        return;
    }
    if(curr->next == curr) { // if there is only one node in the list
        head = NULL; // set head to NULL
        return;
    }
    while(curr->next != head) { // traverse the list to the last node
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next; // update the previous node's next pointer
    head = prev->next; // update the head pointer
    delete(curr); // delete the last node
}

int main() {
    Node *head = new Node(1);
    head->next = head;
    
    int i = 1;
    while(i < 5) {
        push(head, i + 1);
        i++;
    }
    
    cout << "List : ";
    printList(head);

    cout << '\n';

    deleteHead(head);
    cout << "List after deleting the head : ";
    printList(head);

    cout << '\n';

    deleteNodeAtPos(head, 2);
    cout << "List after deleting node at position 2 : ";
    printList(head);
    
    cout << '\n';

    deleteLast(head);
    cout << "List after deleting last node : ";
    printList(head);

    return 0;
}
