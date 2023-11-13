# Trees

A tree is a non-linear data structure that is used to represent hierarchical relationships between elements. It consists of nodes connected by edges, where each node can have zero or more child nodes. The topmost node in a tree is called the root node, and nodes with no child nodes are called leaf nodes.

## Types of Trees

#### Binary Tree

A binary tree is a type of tree where each node has at most two child nodes. The left child node is typically smaller than the parent node, and the right child node is typically larger.

#### Ternary Tree

A ternary tree is a type of tree where each node has at most three child nodes. 

#### Binary Search Tree

A binary search tree is a type of binary tree where the left child node of each node has a value less than or equal to the parent node, and the right child node has a value greater than or equal to the parent node. This property allows for efficient searching and sorting operations.

#### Ternary Search Tree

A Ternary Search Tree is a type of tree that is used for fast searching and sorting of strings. It is similar to a binary search tree but has three children for each node instead of two.

#### Heap Tree

A Heap tree is a type of tree that is used for heap sorting. It is a complete binary tree where the value of each node is greater than or equal to the values of its children. In a max heap, the root node has the largest value, while in a min heap, the root node has the smallest value.

#### Segment Tree
Segment trees are a type of tree data structure that are used to efficiently perform range queries and updates on an array. They are particularly useful when the array is static (i.e., the elements in the array do not change), and there are many queries and updates that need to be performed on different ranges of the array.


#### AVL Tree

An AVL tree is a self-balancing binary search tree named after its inventors Adelson-Velsky and Landis. In an AVL tree, the heights of the two child subtrees of any node differ by at most one. If, at any time during an insertion or a deletion operation, the AVL property is violated (i.e., the heights of the left and right subtrees differ by more than one), rebalancing is performed to restore the property.

#### Red-Black Tree

A red-black tree is a self-balancing binary search tree that uses color-coded nodes to maintain balance. It ensures that the tree remains balanced by performing rotations and color changes on nodes.

#### B-Tree

A B-tree is a self-balancing tree data structure that is commonly used in databases and file systems. It can handle large amounts of data and provides fast access times by reducing the number of disk accesses required to find a record.

## Tree Terminologies

Here are some common tree terminologies and their explanations:

- Root: The topmost node in a tree, which has no parent node. A non-empty tree must contain exactly one root node and exactly one path from the root to all other nodes of the tree.

- Parent: A node that has one or more child nodes.

- Child: A node that has one or more parent nodes.

- Leaf: A node that has no child nodes.

- Ancestor of a Node: Any predecessor nodes on the path of the root to that node are called Ancestors of that node.

- Descendant: Any successor node on the path from the leaf node to that node.

- Sibling: Children of the same parent node are called siblings.

- Level of a node: The count of edges on the path from the root node to that node. The root node has level 0.

- Internal node: A node with at least one child is called Internal Node.

- Neighbour of a Node: Parent or child nodes of that node are called neighbors of that node.

- Height: The length of the longest path from the root to a leaf node.

- Depth: The length of the path from a node to the root.

- Subtree: A subtree is a portion of a tree that consists of a node and all of its descendants.

- Traversal: The process of visiting every node in a tree. There are several types of tree traversals, including in-order, pre-order, and post-order.

- Balanced Tree: A tree is balanced if the height of the left and right subtrees of each node differs by at most one. This ensures that the tree remains efficient for various operations, such as searching and inserting.

- Unbalanced Tree: A tree is unbalanced if the height of the left and right subtrees of each node differs significantly. This can lead to slow search and insert times.

## Applications:

Trees are used in a wide range of applications across various fields. Here are some common applications of trees:

1. File Systems: File systems are commonly implemented as tree structures, where each directory is a node and its subdirectories and files are its children nodes.

2. Computer Networks: Network topologies, such as hierarchical or mesh topologies, can be represented as tree structures.

3. Programming Languages: Syntax trees are used in programming languages to represent the structure of a program.

4. XML and HTML Parsing: XML and HTML documents can be parsed using tree structures, where each tag is a node and its attributes and child nodes are its children.

5. Artificial Intelligence: Decision trees are used in artificial intelligence to represent the decision-making process.

6. Database Systems: B-trees are commonly used in database systems to efficiently store and retrieve large amounts of data.

7. Graphical User Interfaces: Tree structures are used in graphical user interfaces to represent menus and hierarchical structures.

8. Compiler Design: Abstract Syntax Trees (AST) are used in compilers to represent the structure of a program.


##### Overall, trees are a versatile data structure that can be used in many different applications, making them an important topic to understand for anyone working with data or software development.

