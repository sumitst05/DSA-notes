# Properties of Heaps

#### 1. Complete Binary Trees:

Heaps are complete binary trees, adhering to the binary heap property. In a max heap, for every node 'i', the value of 'i' is greater than or equal to the values of its children. In a min heap, the value of 'i' is less than or equal to the values of its children.

#### 2. Shape:

A heap is a complete binary tree, meaning all levels are completely filled except possibly for the last level, which is filled from left to right.

#### 3. Heap Order:

Heaps come in two types: `Max Heaps` and `Min Heaps`. In a max heap, the value of each node is greater than or equal to the values of its children. In a min heap, the value of each node is less than or equal to the values of its children.

#### 4. Heapify Operation:

The process of transforming an array into a heap, maintaining the heap properties, is known as heapify. This operation ensures that the heap order property is satisfied.

#### 5. Heap Operations:

Heaps support efficient insertion and extraction of the minimum (in a min heap) or maximum (in a max heap) element in O(log n) time, where 'n' is the number of elements in the heap.

#### 6. Parent-Child Relationship:

The relationship between a parent node at index ‘i’ and its children is given by the formulas:

- left child at index `2i+1`
- right child at index `2i+2`

for 0-based indexing of node numbers.

#### 6. Priority Queue:

Heaps are often used to implement priority queues, where elements with higher (or lower) priority can be efficiently extracted.

#### 7. Heap Sort:

Heap data structure is used to implement heap sort, a comparison-based sorting algorithm with O(n log n) time complexity.

#### 8. Space Efficiency:

Heaps can be represented using arrays, providing a space-efficient representation compared to other tree structures.

#### 9. Applications:

Heaps have applications in various algorithms, such as Dijkstra's shortest path algorithm, Prim's minimum spanning tree algorithm, and Huffman coding.

---

Heaps are essential data structures, offering efficient solutions to problems that involve maintaining the order of elements based on their values.
