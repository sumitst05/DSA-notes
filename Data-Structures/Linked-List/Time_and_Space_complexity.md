# Singly Linked List:
- Insertion:
    - Time Complexity:
        - Inserting a new node at the beginning of a singly linked list takes constant time O(1), as it involves changing the pointers of the head node to point to the new node, which can be done in constant time.

        - Inserting a new node at the end of a singly linked list takes linear time O(n), as we have to traverse the entire list to reach the last node and change its pointer to point to the new node.

        - Inserting a new node at a specific position in a singly linked list takes linear time O(n), as we have to traverse the list to reach the position where we want to insert the new node and then perform the insertion operation.

    - Space Complexity:
        - Inserting a new node in a singly linked list requires allocating memory for the new node, which takes constant space O(1). Therefore, the space complexity for insertion in a singly linked list is constant.

- Deletion:
    - Time Complexity:
        - Deleting a node from the beginning of a singly linked list takes constant time O(1), as it involves changing the pointers of the head node to point to the next node and then freeing the memory of the deleted node.

        - Deleting a node from the end of a singly linked list takes linear time O(n), as we have to traverse the entire list to reach the second last node and change its pointer to NULL and then free the memory of the deleted node.

        - Deleting a node from a specific position in a singly linked list takes linear time O(n), as we have to traverse the list to reach the position of the node to be deleted and then perform the deletion operation.

    - Space Complexity: Deleting a node from a singly linked list requires freeing the memory of the deleted node, which takes constant space O(1). Therefore, the space complexity for deletion in a singly linked list is constant.

- Searching:
    - Time Complexity: Searching for an element in a singly linked list takes linear time O(n), as we have to traverse the entire list to find the element. In the worst-case scenario, we may have to traverse the entire list without finding the element, which would take O(n) time.

    - Space Complexity: Searching for an element in a singly linked list does not require any additional memory allocation or deallocation, so the space complexity is constant O(1). The memory required is only for the current node, and a temporary variable used in the search operation.

- Swapping:
    - Time Complexity: The time complexity for swapping two elements in a singly linked list depends on the position of the elements in the list.
        -If the two elements to be swapped are adjacent nodes, we can simply swap their values, which takes constant time O(1).
        -If the two elements to be swapped are not adjacent nodes, we have to traverse the list to find the nodes to be swapped and then perform the swap operation, which takes linear time O(n), where n is the length of the list.

    - Space Complexity: Swapping two elements in a singly linked list does not require any additional memory allocation or deallocation, so the space complexity is constant O(1). The memory required is only for the current node, and a temporary variable used in the swap operation.

- Reversing:
    - Time Complexity: The time complexity for reversing a singly linked list is O(n), where n is the length of the list. The algorithm for reversing a singly linked list involves traversing the list once and changing the pointers of each node to point to its previous node. This operation has to be performed for each node in the list, which takes O(n) time.

    - Space Complexity: The space complexity for reversing a singly linked list is O(1), as the algorithm requires only constant extra space to keep track of a few temporary variables.


# Doubly Linked List:
- Insertion: 
    - Time Complexity: 
        - Insertion at the beginning of a DLL takes constant time O(1), as it involves changing the pointers of the head node to point to the new node, which can be done in constant time.
        - Insertion at the end of a DLL takes constant time O(1), as we can directly change the pointers of the last node to point to the new node.
        - Insertion at a specific position in a DLL takes linear time O(n), as we have to traverse the list to reach the position where we want to insert the new node and then perform the insertion operation.
    - Space Complexity: The space complexity for insertion in a DLL is constant O(1), as we only need to allocate memory for the new node.
    
- Deletion: 
    - Time Complexity: 
        - Deletion at the beginning of a DLL takes constant time O(1), as it involves changing the pointers of the head node to point to the next node and then freeing the memory of the deleted node.
        - Deletion at the end of a DLL takes constant time O(1), as we can directly change the pointers of the second last node to point to NULL and then free the memory of the deleted node.
        - Deletion at a specific position in a DLL takes linear time O(n), as we have to traverse the list to reach the position of the node to be deleted and then perform the deletion operation.
    -Space Complexity:  The space complexity for deletion in a DLL is constant O(1), as we only need to free the memory of the deleted node.
    
- Searching: 
    -Time Complexity: Searching for an element in a DLL takes linear time O(n), as we have to traverse the entire list to find the element.
    - Space Complexity: The space complexity for searching in a DLL is constant O(1), as we only need to store a temporary variable and the current node.

- Swapping:
    - Time Complexity: 
        - Swapping two adjacent nodes in a DLL takes constant time O(1), as we only need to change the pointers of the adjacent nodes.
        - Swapping two non-adjacent nodes in a DLL takes constant time O(1), as we only need to change the pointers of the nodes involved in the swap.
    - Space Complexity: The space complexity for swapping in a DLL is constant O(1), as we only need to store a temporary variable, and the nodes involved in the swap.

- Reversing:
    - Time Complexity: Reversing a DLL takes linear time O(n), as we have to traverse the entire list and change the pointers of each node to point to its previous node.
    - Space Complexity: The space complexity for reversing a DLL is constant O(1), as we only need to store a few temporary variables.

# Circular Linked List:
- Insertion:
    - Time Complexity:
        - Insertion at the beginning of a CLL takes constant time O(1), as it involves changing the pointers of the head node to point to the new node, and the last node to point to the new head node.
        - Insertion at the end of a CLL takes linear time O(n), as we have to traverse the list to reach the last node and then perform the insertion operation by changing the pointers of the last node and the new node.
        - Insertion at a specific position in a CLL takes linear time O(n), as we have to traverse the list to reach the position where we want to insert the new node and then perform the insertion operation.
    - Space Complexity: The space complexity for insertion in a CLL is constant O(1), as we only need to allocate memory for the new node.

- Deletion:
    - Time Complexity:
        - Deletion at the beginning of a CLL takes constant time O(1), as it involves changing the pointers of the head node to point to the next node and the last node to point to the new head node.
        - Deletion at the end of a CLL takes linear time O(n), as we have to traverse the list to reach the last node and the second last node and then perform the deletion operation by changing the pointers of the last node and the second last node.
        - Deletion at a specific position in a CLL takes linear time O(n), as we have to traverse the list to reach the position of the node to be deleted and then perform the deletion operation.
    - Space Complexity: The space complexity for deletion in a CLL is constant O(1), as we only need to free the memory of the deleted node.

- Searching: 
    - Time Complexity: Searching for an element in a CLL takes linear time O(n), as we have to traverse the entire list once to find the element.
    - Space Complexity: The space complexity for searching in a CLL is constant O(1), as we only need to store a temporary variable and the current node.

- Swapping:
    - Time Complexity: 
        - Swapping two adjacent nodes in a CLL takes constant time O(1), as we only need to change the pointers of the adjacent nodes.
        - Swapping two non-adjacent nodes in a CLL takes linear time O(n), as we have to traverse the entire list once to find the nodes to be swapped and then perform the swap operation.
    - Space Complexity: The space complexity for swapping in a CLL is constant O(1), as we only need to store a few temporary variables and the nodes involved in the swap.

- Reversing:
    - Time Complexity: Reversing a CLL takes linear time O(n), as we have to traverse the entire list once and change the pointers of each node to point to its previous node.
    - Space Complexity: The space complexity for reversing a CLL is constant O(1), as we only need to store a few temporary variables.

**Note**: It's worth noting that the time and space complexities mentioned here are for the basic implementation of these operations in an array. The actual complexities can vary based on the specific implementation and the data being processed.




