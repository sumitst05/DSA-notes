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

void append(Node* &head, int x) {
    Node* n = new Node(x);
    Node* temp = head;
    if(head == NULL) {
        head = n;
        return;
    }
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void printList(Node *head) {
    Node *n =head;
    cout << "NULL <- ";
    while(n != NULL) {
        cout << n->data;
        if(n->next != NULL) cout << " <=> ";
        n = n->next;
    }
    cout << " -> NULL" << '\n';
}

void deleteHead(Node* &head) {
    if (head == NULL) {
        // empty list, nothing to delete
        return;
    }
    // save a pointer to the original head node
    Node* n = head;
    // set the new head node to the next node in the list
    head = head->next;
    // update the prev pointer of the new head node to NULL
    if (head != NULL) {
        head->prev = NULL;
    }
    // free the memory allocated for the original head node
    delete(n);
}

void deleteAfter(Node* node) {
    // If the given node or its next node is NULL, there is nothing to delete, so return
    if(node == NULL || node->next == NULL) {
        return;
    }
    // Create a temporary variable to store the node to be deleted
    Node* n = node->next;
    // Update the pointers of the previous and next nodes to skip over the node to be deleted
    node->next = n->next; // Set the next pointer of the previous node to the node after the one being deleted
    if(n->next != NULL) { // If the node being deleted is not the last node in the list
        n->next->prev = node; // Set the previous pointer of the node after the one being deleted to the previous node
    }
    // Free the memory allocated for the node being deleted
    delete(n);
}

void deleteEnd(Node* &head) { 
    // If the list is empty or has only one node
    if (head == NULL || (head)->next == NULL) 
        return;   
    // Traverse the list to find the last node
    Node* last = head; 
    while (last->next != NULL) 
        last = last->next;
    // Set the previous node's next pointer to NULL
    last->prev->next = NULL;   
    // Free the memory of the last node
    delete(last); 
}

int main() {
    Node *head = NULL;
    int i = 1;
    while(i <= 5) {
        append(head, i);
        i++;
    } 
    cout << "List : ";
    printList(head);

    cout << '\n';

    deleteHead(head);   // delete the head node
    cout << "List after deleting head : ";
    printList(head);

    cout << '\n';

    deleteAfter(head->next); // delete the next to next node of head
    cout << "List after deleting the given node : ";
    printList(head);

    cout << '\n';
    
    deleteEnd(head);    // delete the end node
    cout << "List after deleting the end : ";
    printList(head);

    return 0;
}
