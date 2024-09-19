/*
 * Prim's Minimum Spanning Tree (MST) Algorithm
 *
 * Prim's algorithm is a greedy algorithm that finds the Minimum Spanning Tree
 * (MST) of a graph. The MST is a subset of the edges that connects all vertices
 * together, without any cycles, and with the minimum possible total edge
 * weight.
 *
 * Prim's algorithm grows the MST one edge at a time, starting from an arbitrary
 * vertex. It adds the smallest edge that connects a vertex in the MST to a
 * vertex outside the MST.
 *
 * The algorithm uses a priority queue (min heap) to efficiently select the
 * minimum weight edge.
 */

#include <bits/stdc++.h>
using namespace std;

class Graph {

public:
  int V;
  vector<vector<pair<int, int>>> adjList;

  Graph(int V) {
    this->V = V;
    adjList.resize(V);
  }

  void addEdge(int from, int to, int weight) {
    adjList[from].push_back({to, weight});
    adjList[to].push_back({from, weight});
  }

  vector<pair<int, int>> primMST() {
    vector<int> keys(V, INT_MAX);  // keys to pick the edge with minimum weight
    vector<int> parent(V, -1);     // parent of each vertex
    vector<int> present(V, false); // to check if a vertex is present in the MST

    vector<pair<int, int>> mstEdges;

    // Min Heap to select edge with minimum weight
    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   greater<pair<int, int>>>
        pq;

    // starting from vertex 0
    pq.push({0, 0}); // (key, vertex)
    keys[0] = 0;     // key of the starting vertex is 0

    while (!pq.empty()) {
      // vertex with smallest key
      int u = pq.top().second;
      pq.pop();

      // if the vertex is already present, skip it
      if (present[u]) {
        continue;
      }

      // mark the vertex as included
      present[u] = true;

      // iterating over all adjacent vertices of 'u'
      for (auto edge : adjList[u]) {
        int v = edge.first;  // adjacent vertex
        int w = edge.second; // weight of the edge

        // if vertex 'v' is not in the MST and the edge's weight is smaller than
        // the current key's value:
        // - Update the key
        // - add the vertex to min heap
        // - update the parent of the vertex
        if (!present[v] && w < keys[v]) {
          keys[v] = w;
          pq.push({keys[v], v});
          parent[v] = u;
        }
      }
    }

    // retrieving the edges of the MST
    for (int i = 1; i < V; i++) {
      if (parent[i] != -1) {
        mstEdges.push_back({parent[i], i});
      }
    }

    return mstEdges;
  }
};

int main() {
  int V = 4;
  Graph g(V);

  g.addEdge(0, 1, 10);
  g.addEdge(0, 2, 6);
  g.addEdge(0, 3, 5);
  g.addEdge(1, 3, 15);
  g.addEdge(2, 3, 4);

  cout << "Graph: " << '\n';
  cout << "From - To : Weight" << '\n';
  for (int i = 0; i < g.adjList.size(); i++) {
    for (auto edge : g.adjList[i]) {
      if (i <= edge.first) {
        cout << i << " - " << edge.first << " : " << edge.second << '\n';
      }
    }
  }

  vector<pair<int, int>> mst = g.primMST();

  cout << "Edges in the Minimum Spanning Tree:" << '\n';
  cout << "From - To : Weight" << '\n';
  int totalWeight = 0;

  // Output the MST edges and their weights
  for (const auto &edge : mst) {
    int u = edge.first;
    int v = edge.second;
    int weight = 0;

    // Find the weight of this edge by looking it up in the adjacency list
    for (const auto &e : g.adjList[u]) {
      if (e.first == v) {
        weight = e.second;
        break;
      }
    }

    cout << u << " - " << v << ": " << weight << endl;
    totalWeight += weight;
  }

  cout << "Total weight of MST: " << totalWeight << endl;
  return 0;
}
