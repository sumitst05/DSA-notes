# Time and Space Complexity for Greedy Algorithms

### Activity Selection Problem

#### Description

Selects the maximum number of activities that don't overlap, given start and end times for each activity.

#### Greedy Approach

- **Strategy:** Always choose the next activity with the earliest finish time that is compatible with the previously selected activities.

#### Complexity

| Time Complexity | Space Complexity |
| --------------- | ---------------- |
| O(n \* log(n))  | O(1)             |

where `n` is the number of activities. The time complexity includes the sorting step.

---

### Huffman Coding

#### Description

Constructs an optimal prefix code for a set of characters based on their frequencies, minimizing the total number of bits used.

#### Greedy Approach

- **Strategy:** Build a priority queue of characters based on frequency. Repeatedly extract the two least frequent nodes and combine them to build a Huffman tree.

#### Complexity

| Time Complexity | Space Complexity |
| --------------- | ---------------- |
| O(n \* log(n))  | O(n)             |

where `n` is the number of characters. The time complexity includes the operations on the priority queue.

---

### Fractional Knapsack Problem

#### Description

Determines the maximum value of items that can be put in a knapsack with a given weight capacity, where items can be broken into smaller pieces.

#### Greedy Approach

- **Strategy:** Calculate the value-to-weight ratio for each item and sort items by this ratio in descending order. Add items to the knapsack starting with the highest ratio until the capacity is reached.

#### Complexity

| Time Complexity | Space Complexity |
| --------------- | ---------------- |
| O(n \* log(n))  | O(1)             |

where `n` is the number of items. The time complexity includes the sorting step.

---

### Minimum Spanning Tree (MST)

#### Description

Finds a subset of edges in a weighted undirected graph that connects all vertices together with the minimum total edge weight.

#### Greedy Approaches

- **Kruskal’s Algorithm:** Sort edges by weight and add them to the MST if they don't form a cycle.
- **Prim’s Algorithm:** Start from an arbitrary vertex and repeatedly add the smallest edge connecting the growing MST to a new vertex.

#### Complexity

| Algorithm | Time Complexity | Space Complexity |
| --------- | --------------- | ---------------- |
| Kruskal’s | O(E \* log(E))  | O(V + E)         |
| Prim’s    | O(E \* log(V))  | O(V + E)         |

where `V` is the number of vertices and `E` is the number of edges. Kruskal’s algorithm involves sorting edges, while Prim’s algorithm involves priority queue operations.

---

### Dijkstra's Algorithm

#### Description

Finds the shortest path from a source vertex to a distance vertex (or all other vertices) in a weighted graph with non-negative weights.

#### Greedy Approach

- **Strategy:** Repeatedly select the vertex with the smallest known distance from the source and update the distances of its adjacent vertices.

#### Complexity

| Time Complexity  | Space Complexity | Implementation                                |
| ---------------- | ---------------- | --------------------------------------------- |
| O(V<sup>2</sip>) | O(V)             | Using an adjacency matrix and linear search   |
| O(E \* log(V))   | O(V + E)         | Using a priority queue with an adjacency list |

where `V` is the number of vertices and `E` is the number of edges. The first complexity is for the simple implementation using an adjacency matrix, and the second is for the implementation using a priority queue.

**Note:** The time and space complexities given here are for the basic implementations of these algorithms. The actual complexities can vary based on specific implementation details and optimizations used.
