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

// Funciton to reverse a CLL
void reverse(Node* &head) { 
    if(head == NULL) {
        return;  // empty list
    }
    Node *prev = head;  // initialize prev pointer to head
    Node *curr = head->next;  // initialize curr pointer to the next node of head
    while(curr != head) {  // traverse the linked list until we reach the head again
        Node *next = curr->next;  // store the next node of curr
        curr->next = prev;  // change the direction of the link
        prev = curr;  // update prev
        curr = next;  // update curr
    }
    head->next = prev;  // set the next node of the head to be the last node after reversing
    head = prev;  // update the head to point to the last node after reversing
}

int main() {
    Node *head = new Node(5);
    head->next = head;

    push(head, 7);
    push(head, 9);
    push(head, 5);
    push(head, 3);

    cout << "List : ";
    printList(head);

    cout << '\n';

    reverse(head);
    cout << "Reversed List : ";
    printList(head);

    return 0;
}
