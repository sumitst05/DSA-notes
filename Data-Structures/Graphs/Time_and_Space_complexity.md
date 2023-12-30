# Graphs

## Adjacency List Representation:

| Operation             | Time Complexity (Average Case) | Space Complexity |
|-----------------------|--------------------------------|------------------|
| Add Vertex            | O(1)                           | O(1)             |
| Add Edge              | O(1)                           | O(1)             |
| Remove Vertex         | O(V + E)                       | O(1)             |
| Remove Edge           | O(V)                           | O(1)             |
| Get Neighbors         | O(1)                           | O(1)             |
| Depth-First Traversal | O(V + E)                       | O(V)             |
| Breadth-First Traversal| O(V + E)                       | O(V)             |

## Adjacency Matrix Representation:

| Operation             | Time Complexity (Average Case) | Space Complexity |
|-----------------------|--------------------------------|------------------|
| Add Vertex            | O(V^2)                         | O(V^2)           |
| Add Edge              | O(1)                           | O(1)             |
| Remove Vertex         | O(V^2)                         | O(V^2)           |
| Remove Edge           | O(1)                           | O(1)             |
| Get Neighbors         | O(V)                           | O(1)             |
| Depth-First Traversal | O(V + E)                       | O(V)             |
| Breadth-First Traversal| O(V + E)                       | O(V)             |
