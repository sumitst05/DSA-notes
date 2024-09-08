// Depth first search in a graph is similar to
// dfs in a tree, we just don't want to visit an already visited node
// (which was never a problem in tree beacuse of it's hierarchical structure)
// For graphs we need to maintain an array showing the nodes we have
// already visited so that we don't revisit them.

#include <bits/stdc++.h>
using namespace std;

struct Edge {
  int to;
  int weight;
};

class Graph {
private:
  int vertices;
  vector<vector<Edge>> adjList;

public:
  Graph(int V) {
    this->vertices = V;
    this->adjList = vector<vector<Edge>>(V);
  }

  void addEdge(int from, int to, int weight) {
    adjList[from].push_back({to, weight});
    adjList[to].push_back({from, weight});
  }

  // this will perform dfs
  void dfsUtil(int v, vector<bool> &visited) {
    visited[v] = true; // set the current vertex as visited
    cout << v << " ";  // print the current vertex

    for (auto edge :
         adjList[v]) { // for every neighbouring vertex of current vertex,
      if (!visited[edge.to]) { // if the neighbour is unvisted, then visit it
        dfsUtil(edge.to, visited);
      }
    }
  }

  // this calls the dfsUtil with a visited array
  void dfs(int start) {
    vector<bool> visited(vertices,
                         false); // initially all vertices are unvisited
    dfsUtil(start, visited);     // perform dfs from given start vertex
    cout << '\n';
  }
};

int main() {
  Graph graph(5);

  graph.addEdge(0, 1, 9);
  graph.addEdge(0, 2, 3);
  graph.addEdge(0, 3, 2);
  graph.addEdge(0, 4, 5);
  graph.addEdge(1, 2, 2);
  graph.addEdge(1, 3, 7);
  graph.addEdge(2, 4, 3);
  graph.addEdge(3, 4, 1);

  // call dfs
  graph.dfs(0);

  return 0;
}
