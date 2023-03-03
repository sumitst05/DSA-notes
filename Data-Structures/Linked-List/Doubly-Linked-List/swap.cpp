#include<bits/stdc++.h> 
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

void append(Node *head, int x) {
    Node *temp = head;
    Node *node = new Node(x);
    if(head == NULL) {
        head = node;
        return;
    }
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
    node->prev = temp;
}

void printList(Node *head) {
    Node *temp = head;
    cout << "NULL <- ";
    while(temp != NULL) {
        cout << temp->data;
        if(temp->next != NULL) cout << " <=> ";
        temp = temp->next; 
    }
    cout << " -> NULL" << '\n';
}

void swap(Node* &head, int a, int b) {
    // If a and b are equal, no need to swap, so return
    if(a == b) {
        return;
    }

    // Initialize variables
    Node *curr = head;
    Node *nodeA = NULL, *nodeB = NULL;

    // Traverse the DLL to find nodes with values a and b
    while(curr != NULL) {
        if(curr->data == a) {
            nodeA = curr;
        }
        if(curr->data == b) {
            nodeB = curr;
        }
        curr = curr->next;
    }

    // If either node was not found, return
    if(nodeA == NULL || nodeB == NULL) {
        return;
    }

    // Swap the nodes by changing their previous and next pointers

    // Update the previous pointer of nodeB
    if(nodeA->prev != NULL) {
        nodeA->prev->next = nodeB;
    } else {
        head = nodeB;
    }

    // Update the previous pointer of nodeA
    if(nodeB->prev != NULL) {
        nodeB->prev->next = nodeA;
    } else {
        head = nodeA;
    }

    // Swap the previous pointers of nodeA and nodeB
    Node *temp = nodeA->prev;
    nodeA->prev = nodeB->prev;
    nodeB->prev = temp;

    // Swap the next pointers of nodeA and nodeB
    temp = nodeA->next;
    nodeA->next = nodeB->next;
    nodeB->next = temp;

    // Update the previous pointer of the node after nodeA
    if(nodeA->next != NULL) {
        nodeA->next->prev = nodeA;
    }

    // Update the previous pointer of the node after nodeB
    if(nodeB->next != NULL) {
        nodeB->next->prev = nodeB;
    }
}

int main() {
    Node *head = new Node(1);
    int i = 1;
    while(i < 10) {
        append(head, i + 1);
        i++;
    }

    cout << "List : ";
    printList(head);

    cout << '\n';

    int a = 1, b = 10;
    cout << "List after swapping the nodes with values " << a << " and " << b << " : ";
    swap(head, a, b);
    printList(head);
    return 0;
}
