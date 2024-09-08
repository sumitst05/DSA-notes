// Breadth first search in a graph is similar to
// bfs in a tree, we just don't want to visit an already visited node
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

  void bfs(int start) {
    vector<bool> visited(vertices,
                         false); // initially all vertices are unvisited
    queue<int> q; // queue to store the vertices to be visited next

    visited[start] = true; // visit the current node
    q.push(start);         // enqueue the current node

    while (!q.empty()) { // continue till we visit all the nodes once
      int v = q.front();
      q.pop();

      cout << v << " "; // print the current vertex

      for (auto edge : adjList[v]) {
        if (!visited[edge.to]) {   // if there is an unvisited neighbour
          visited[edge.to] = true; // mark the neighbour as visited
          q.push(edge.to);         // enqueue the neighbour
        }
      }
    }

    cout << '\n';
  }
};

int main() {
  Graph graph(5);

  graph.addEdge(0, 0, 9);
  graph.addEdge(0, 4, 3);
  graph.addEdge(0, 1, 2);
  graph.addEdge(1, 3, 5);
  graph.addEdge(1, 2, 2);
  graph.addEdge(1, 1, 7);
  graph.addEdge(2, 4, 3);
  graph.addEdge(3, 0, 1);

  return 0;
}
