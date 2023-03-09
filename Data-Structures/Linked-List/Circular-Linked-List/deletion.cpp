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

void push(Node* head, int x) { 
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
