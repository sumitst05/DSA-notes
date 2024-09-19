/*
 * Kruskal's Minimum Spanning Tree (MST) Algorithm
 *
 * Kruskal's algorithm is a greedy algorithm used to find the Minimum Spanning
 * Tree (MST) of a graph. The MST is a subset of the edges that connects all
 * vertices together, without any cycles, and with the minimum possible total
 * edge weight.
 *
 * The algorithm follows these steps:
 * 1. Sort all edges in the graph in non-decreasing order of their weight.
 * 2. Initialize a Disjoint Set data structure to keep track of which vertices
 *    are in which components (or sets).
 * 3. Iterate through the sorted edges and, for each edge:
 *    - Use the Disjoint Set data structure to check if adding the edge would
 *      form a cycle.
 *    - If it does not form a cycle (i.e., the vertices of the edge are in
 *      different sets), add the edge to the MST and union the sets.
 * 4. Return the list of edges that constitute the Minimum Spanning Tree.
 */

#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
  int from;
  int to;
  int weight;

  Edge(int from, int to, int weight) {
    this->from = from;
    this->to = to;
    this->weight = weight;
  }
};

class DisjointSet {
private:
  vector<int> parent; // Parent array to track the root of each element
  vector<int>
      rank; // Rank array to manage the depth of the tree for union by rank

public:
  DisjointSet(int n) {
    parent.resize(n);
    rank.resize(n, 0);

    // Initially, each element is its own parent (each element is its own set)
    for (int i = 0; i < n; i++) {
      parent[i] = i;
    }
  }

  // Find operation with path compression
  int find(int from) {
    // If the element is not its own parent, recursively find the root
    if (parent[from] != from) {
      parent[from] = find(parent[from]); // path compression
    }

    return parent[from]; // root of the set
  }

  void unionSets(int from, int to) {
    int rootFrom = find(from); // root of the set containing 'from'
    int rootTo = find(to);     // root of the set containing 'to'

    // Only perform union if the roots are different (i.e., the elements are in
    // different sets)
    if (rootFrom != rootTo) {
      if (rank[rootFrom] > rank[rootTo]) {
        parent[rootTo] = rootFrom; // Attaching 'to' tree under 'from' tree
      } else if (rank[rootFrom] < rank[rootTo]) {
        parent[rootFrom] = rootTo; // Attaching 'from' tree under 'to' tree
      } else {
        parent[rootTo] = rootFrom; // Random choice if ranks are equal
        rank[rootFrom]++;          // incrementing rank of the new root
      }
    }
  }
};

vector<Edge> kruskalMST(vector<Edge> &graph, int V) {
  vector<Edge> result;
  DisjointSet ds(V);

  // Sorting edges by weight in non-decreasing order
  sort(graph.begin(), graph.end(),
       [](Edge a, Edge b) { return a.weight < b.weight; });

  for (auto e : graph) {
    int from = e.from;
    int to = e.to;

    // If the edge does not form a cycle (i.e., the vertices are in different
    // sets), add the edge to MST and perform union on the sets
    if (ds.find(from) != ds.find(to)) {
      result.push_back(e);
      ds.unionSets(from, to);
    }
  }

  return result;
}

int main() {
  int V = 4;
  vector<Edge> graph = {
      Edge(0, 1, 10), Edge(0, 2, 6), Edge(0, 3, 5),
      Edge(1, 3, 15), Edge(2, 3, 4),
  };

  cout << "Graph: " << '\n';
  cout << "From - To : Weight" << '\n';
  for (auto edge : graph) {
    cout << edge.from << " - " << edge.to << " : " << edge.weight << '\n';
  }

  vector<Edge> mst = kruskalMST(graph, V);

  int totalWeight = 0;

  cout << "Minimum Spanning Tree: " << '\n';
  cout << "From - To : Wegiht" << '\n';
  for (auto edge : mst) {
    cout << edge.from << " - " << edge.to << ": " << edge.weight << '\n';
    totalWeight += edge.weight;
  }

  cout << "Total weight of MST: " << totalWeight << '\n';

  return 0;
}
