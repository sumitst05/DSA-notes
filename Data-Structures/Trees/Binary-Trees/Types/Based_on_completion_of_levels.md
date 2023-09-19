# Types of Binary Trees Based on Completion of Levels

## 1. Full Binary Tree

A **full binary tree**, also known as a **proper binary tree** or **strict binary tree**, is a type of binary tree in which every node has either 0 or 2 children. In other words, every internal node (non-leaf node) in a full binary tree has exactly two children.

```
        A
       / \
      B   C
     / \ / \
    D  E F  G
```

## 2. Degenerate (or pathological) Tree

A **degenerate tree**, also known as a **pathological tree** or **singular tree**, is a binary tree in which every internal node has only one child (either left or right), making it essentially a linked list.

```
        A
       /
      B
       \
        C
         \
          D
```

## 3. Skewed Binary Tree

A **skewed binary tree** is a type of binary tree in which all nodes have only one child, either left or right. It can be a left-skewed binary tree (all nodes have only a left child) or a right-skewed binary tree (all nodes have only a right child).

### Left-skewed Binary Tree

```
        A
       /
      B
     /
    C
   /
  D
```

### Right-skewed Binary Tree

```
    A
     \
      B
       \
        C
         \
          D
```
