/*
 * A Linked List is a linear data structure made up of nodes, where each node is a different element. 
 * Unlike Arrays, Linked List elements are not stored at a contiguous location.
 * The elements are linked using pointers.
 *
 * The first node is called the 'head' of the linked list. If the linked list is empty, then the value of the head points to NULL. 
 * The last element of a linked list always points towards NULL
 * Each node in a list consists of at least two parts: 
 * -> A Data Item (we can store integers, strings, or any type of data).
 * -> Pointer (Or Reference) to the next node (connects one node to another) or An address of another listNode
 *
 *  Types of linked lists:
 *  1. Singly Linked List: Simplest type of linked list in which every node contains some data and a pointer to the next node of the same data type.
 *      Eg:- 1->2->3->4->5->NULL
 *           ^              
 *           |
 *         [head]
 *  2. Doubly Linked List: Also known as a two-way linked list. Is a more complex type of linked list that contains a pointer to the next as well as the previous node in sequence.
 *      Eg:- 1<=>2<=>3<=>4<=>5->NULL
 *           ^
 *           |
 *         [head]
 *  3. Circular Linked List: A circular linked list is that in which the last node contains the pointer to the first node of the list. 
 *      Eg:- 1->2->3->4->5-|
 *           ^             |  
 *           |____________-|
 */

#include <bits/stdc++.h>
using namespace std;

// Node creation
class Node {
    public:
    int data;
    Node *next;
};

// Node creation with a constructor
class ListNode {
    public:
    int data;
    Node *next;
    ListNode(int x) { // constructor with argument of an integer x (data)
        data = x;
        next = NULL;
    }
};

// Prints the nodes(elements) of the list
void printList(Node *n) {
    while(n != NULL) {  // loop till the last node
        cout << n->data << "->"; //print current node data
        n = n->next;    //move to the next node
    }
    cout << "NULL\n";
}

int main() {
    Node *node = new Node;  // initialising a node to store NULL
    node->data = 10;    // will store value 10
    node->next = NULL;  // will point towards NULL
    cout << node->data << '\n'; // print data
    cout << node->next << '\n'; // print next pointer

    ListNode *listnode = new ListNode(5);   //insitialising a node using a constructor
    cout << listnode->data << '\n';
    cout << listnode->next << '\n';

    //creating a linkedlist of 3 nodes
    Node *head = new Node(); //head node
    Node *second = new Node();
    Node *third = new Node();

    head->data = 1;     // inserts data in the node
    head->next = second; // link current node to the next node

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    
    cout << "Linked List: \n";
    printList(head);    //prints the list
    return 0;
}
