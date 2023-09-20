# Binary Tree Traversal Algorithms

Binary tree traversal algorithms are essential techniques for visiting and processing nodes in a binary tree data structure. There are three common types of binary tree traversal: inorder, preorder, and postorder.

## Depth First Traversal Algorithms (DFS)
Depth-First Traversal in a binary tree is a family of traversal algorithms that explore as far down a branch as possible before backtracking. In the context of tree traversal, DFS systematically explores the depth of the tree before moving horizontally to other branches. There are three common variants of DFS for binary trees: Inorder, Preorder, and Postorder.

### Inorder Traversal

In an **inorder traversal**, you visit the left subtree, then the current node, and finally the right subtree. In a binary search tree (BST), this traversal produces nodes in ascending order.

```
        A
       / \
      B   C
     / \ 
    D   E
```
Inorder Traversal (Result): D -> B -> E -> A -> C


### Preorder Traversal

In a preorder traversal, you visit the current node first, followed by the left subtree, and then the right subtree.
```
        A
       / \
      B   C
     / \ 
    D   E
```
Preorder Traversal (Result): A -> B -> D -> E -> C


### Postorder Traversal

In a postorder traversal, you visit the left subtree, then the right subtree, and finally the current node.
```
        A
       / \
      B   C
     / \ 
    D   E
```
Postorder Traversal (Result): D -> E -> B -> C -> A

## Breadth First Traversal (BFS)

Breadth-First Traversal or **Level order traversal** in a binary tree, is a traversal algorithm used to explore all the nodes level by level, starting from the root node. It systematically traverses the tree by visiting all nodes at the current level before moving to the next level. BFS can be thought of as searching "horizontally" across levels.

```
        A
       / \
      B   C
     / \   \
    D   E   F
```
Level Order Traversal (Result): A -> B -> C -> D -> E -> F

**Time Complexity**: O(N), where N is the number of nodes in the binary tree

**Space Complexity**: O(N), where N is the number of nodes in the binary tree
