# Graphs

A graph is a data structure that consists of a set of nodes (vertices) and a set of edges connecting these nodes. Graphs are used to represent relationships between different entities.

## Types of Graphs

#### Undirected Graph

An undirected graph is a graph in which edges have no orientation. The edge (u, v) is identical to the edge (v, u), meaning that the connection between nodes is symmetric.

#### Directed Graph (Digraph)

A directed graph, or digraph, is a graph in which edges have an orientation. The edge (u, v) is distinct from the edge (v, u), indicating a one-way connection from node u to node v.

#### Weighted Graph

A weighted graph is a graph in which each edge is assigned a numerical value, called a weight. These weights can represent distances, costs, or any other relevant metric.

#### Unweighted Graph

An unweighted graph is a graph in which all edges are considered to have equal importance, and no specific values (weights) are assigned to the edges.

#### Connected Graph

A connected graph is a graph in which there is a path between every pair of nodes. It is possible to reach any node in the graph from any other node.

#### Disconnected Graph

A disconnected graph is a graph in which there are one or more pairs of nodes with no path between them.

#### Cyclic Graph

A cyclic graph is a graph that contains at least one cycle—a closed path of edges where no node is repeated.

#### Acyclic Graph

An acyclic graph is a graph that does not contain any cycles. It is a graph without closed paths.

#### Bipartite Graph

A bipartite graph is a graph whose vertices can be divided into two disjoint sets, and all edges connect a vertex from one set to a vertex in the other set.

#### Complete Graph

A complete graph is a graph in which there is a unique edge between every pair of distinct nodes.

## Graph Terminologies

Here are some common graph terminologies and their explanations:

- **Vertex (Node):** A fundamental unit of a graph.

- **Edge:** A connection between two vertices.

- **Adjacent:** Two vertices are adjacent if there is an edge connecting them.

- **Degree:** The degree of a vertex is the number of edges connected to it.

- **Path:** A path in a graph is a sequence of vertices where each adjacent pair is connected by an edge.

- **Cycle:** A cycle is a path that starts and ends at the same vertex, traversing a sequence of edges.

- **Connected Components:** Subsets of vertices in a graph where each vertex is connected to every other vertex in the subset.

- **Traversal:** The process of visiting all vertices and edges of a graph. Common graph traversal algorithms include depth-first search (DFS) and breadth-first search (BFS).

- **Weight of an Edge:** A numerical value assigned to an edge, indicating a cost, distance, or any relevant metric.

## Applications:

Graphs are widely used in various applications. Here are some common applications of graphs:

1. **Social Networks:** Representing relationships between individuals.

2. **Routing Algorithms:** Used in computer networks to find the shortest path between nodes.

3. **Recommendation Systems:** Analyzing user preferences and connections.

4. **Circuit Design:** Representing connections between electronic components.

5. **Geographic Information Systems (GIS):** Modeling relationships between geographical locations.

6. **Dependency Resolution:** Managing dependencies between software components.

7. **Epidemiology:** Modeling the spread of diseases.

8. **Transportation Networks:** Analyzing routes and connections in transportation systems.

9. **Web Page Ranking:** Modeling links between web pages for ranking algorithms.

10. **Game Theory:** Analyzing strategic interactions between players.

Graphs provide a powerful way to model and analyze complex relationships, making them a fundamental concept in computer science and related fields.
