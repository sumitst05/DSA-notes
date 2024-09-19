/*
 * Dijkstra's Algorithm
 *
 * Dijkstra's algorithm is used to find the shortest path from a source node to
 * a destination node in a weighted graph. It operates by maintaining a priority
 * queue of nodes based on their current shortest distance from the source. The
 * algorithm proceeds by repeatedly selecting the node with the smallest
 * distance, marking it as visited, and relaxing the edges to its neighbors.
 *
 * Key Steps:
 * 1. Initialize distances from the source to all nodes as infinity, except the
 * source itself (which is zero).
 * 2. Use a priority queue to select the node with the smallest distance that
 * has not been visited.
 * 3. Mark the selected node as visited and explore its neighbors.
 * 4. For each neighbor, if the path through the current node offers a shorter
 * path, update its distance and record the parent.
 * 5. Repeat until the destination node is reached or all nodes have been
 * visited.
 * 6. To retrieve the path, backtrack using the parent array from the
 * destination to the source.
 */

#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
  vector<vector<pair<int, int>>> adjList;

  Graph(int V) {
    this->V = V;
    adjList.resize(V);
  }

  void addEdge(int from, int to, int weight);
  vector<int> dijkstra(int source, int dest);

private:
  int V;
};

void Graph::addEdge(int from, int to, int weight) {
  adjList[from].push_back({to, weight});
  adjList[to].push_back({from, weight});
}

vector<int> Graph::dijkstra(int source, int dest) {
  vector<int> dist(
      V, INT_MAX); // distance of each node from source (initially infinity)
  vector<bool> vis(V, false); // to keep track of visited nodes
  vector<int> parent(V, -1);  // to keep track of parent nodes to construct path

  // Min Heap to access nodes with smalles distance from source
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

  // starting at source node
  pq.push({0, source}); // {distance-from-source, node}
  dist[source] = 0;     // distance of source from source is 0

  while (!pq.empty()) {
    int u = pq.top().second; // node with smallest distance
    pq.pop();

    // skip if already visited
    if (vis[u]) {
      continue;
    }

    // stop if destination node is reached
    if (u == dest) {
      break;
    }

    // visit current node
    vis[u] = true;

    // explore adjacent nodes of current node
    for (auto edge : adjList[u]) {
      int v = edge.first;  // neighboring node
      int w = edge.second; // it's weight

      // if the neighbor is not visited and adding it's weight (distance from
      // current node) to distance of current node from source gives a distance
      // lesser than the distance assigned to neighbor, then update the distance
      // (better/smaller distance)
      if (!vis[v] && w + dist[u] < dist[v]) {
        dist[v] = w + dist[u];
        parent[v] = u;         // update parent of neighbor as current node
        pq.push({dist[v], v}); // add the neighbor to min heap
      }
    }
  }

  // parent array for path construction
  return parent;
}

int main() {
  int V = 4;
  Graph g(V);

  g.addEdge(0, 1, 1);
  g.addEdge(0, 2, 6);
  g.addEdge(0, 3, 9);
  g.addEdge(1, 2, 3);
  g.addEdge(1, 3, 2);
  g.addEdge(2, 3, 1);

  cout << "Graph:" << '\n';
  cout << "f - t : w" << '\n';
  for (int i = 0; i < V; i++) {
    for (auto edge : g.adjList[i]) {
      if (i < edge.first) {
        cout << i << " - " << edge.first << " : " << edge.second << '\n';
      }
    }
  }

  int source = 1;
  int dest = 0;

  vector<int> parent = g.dijkstra(source, dest);
  cout << "Shortest path from source (" << source << ")  to destination ("
       << dest << ":" << '\n';

  // construct the path by starting from destination and backtracking to source
  // using the parent array
  string path = "";
  int i = dest;
  while (i != source) {
    path += (i + '0');
    path += " >- ";
    i = parent[i]; // move to parent of node 'i'
  }
  path += (source + '0');

  reverse(path.begin(),
          path.end()); // reverse the path to show it from source to destination

  cout << path << '\n';

  return 0;
}
