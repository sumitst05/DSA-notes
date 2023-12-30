# Graph Representation

Graphs can be represented using different data structures, with two common methods being the adjacency matrix and adjacency list.

## 1. Adjacency Matrix

In an adjacency matrix, a graph with `V` vertices is represented by a 2D array of size `V x V`. The entry `graph[i][j]` is 1 if there is an edge between vertices `i` and `j`, and 0 otherwise. For undirected graphs, the matrix is symmetric.

**Advantages:**
- Simple representation.
- Efficient for dense graphs.

**Disadvantages:**
- Consumes more space for sparse graphs.

## 2. Adjacency List

In an adjacency list, each vertex in the graph is associated with a list of its neighboring vertices. This can be implemented using an array of lists or a hash table where each vertex has a list of adjacent vertices.

**Advantages:**
- Efficient for sparse graphs.
- Saves space.

**Disadvantages:**
- Requires more time for edge presence queries.

## How to choose?

The choice between adjacency matrix and adjacency list depends on the characteristics of the graph and the specific operations to be performed. Adjacency matrices are suitable for dense graphs, while adjacency lists are more efficient for sparse graphs.
