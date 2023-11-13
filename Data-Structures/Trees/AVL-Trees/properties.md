# Properties of AVL Trees

#### 1. Binary Search Tree Property:
AVL trees adhere to the binary search tree property, where nodes in the left subtree have values less than the node, and nodes in the right subtree have values greater than the node.

#### 2. Balancing Property:
The heights of the left and right subtrees of every node differ by at most one. The balance factor (BF) for each node is either -1, 0, or 1.

#### 3. Balance Factor:
The balance factor of a node is the difference between the height of its left subtree and the height of its right subtree: `BF = hL - hR`.

#### 4. Height Property:
The height of an AVL tree is logarithmic in the number of nodes, ensuring efficient search, insertion, and deletion operations.

#### 5. Balancing Operations:
Insertion or deletion violating the balancing property triggers rotations to restore balance while maintaining the binary search tree property.

#### 6. Rotations:
Four types of rotations: Left-Left Rotation, Right-Right Rotation, Left-Right Rotation, and Right-Left Rotation, are used to restore balance during operations.

#### 7. Search, Insertion, and Deletion Operations:
AVL trees guarantee O(log n) time complexity for search, insertion, and deletion, where n is the number of nodes, due to the self-balancing property.

AVL trees ensure balance between left and right subtrees, facilitating efficient operations. The balancing property is preserved through rotations, and the tree's height is logarithmic for optimal performance.
