
# A Linked List is a linear data structure made up of nodes, where each node is a different element. 
## Unlike Arrays, Linked List elements are not stored at a contiguous location.

- The elements are linked using pointers.
- The first node is called the 'head' of the linked list. If the linked list is empty, then the value of the head points to NULL. 
The last element of a linked list always points towards NULL
- Each node in a list consists of at least two parts: 
  - A Data Item (we can store integers, strings, or any type of data)  
  - Pointer (Or Reference) to the next node (connects one node to another) or An address of another listNode

## Types of linked lists:
  1. Singly Linked List: Simplest type of linked list in which every node contains some data and a pointer to the next node of the same data type.
Eg:- <br>
<pre>
1->2->3->4->5->NULL <br>
↑ <br>
[head] <br>
</pre>
  2. Doubly Linked List: Also known as a two-way linked list. Is a more complex type of linked list that contains a pointer to the next as well as the previous node in sequence.
Eg:- <br>
<pre>
NULL<-1<=>2<=>3<=>4<=>5->NULL <br>
      ↑
    [head] <br>
</pre>
   3. Circular Linked List: A circular linked list is that in which the last node contains the pointer to the first node of the list.
Eg:- <br>
<pre>
 1->2->3->4->5 <br>
 ↑____________| <br>
</pre>
