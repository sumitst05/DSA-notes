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
  vector<int> dist(V, INT_MAX);
  vector<int> parent(V, -1);
  vector<bool> vis(V, false);

  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 greater<pair<int, int>>>
      pq;

  // {distance, node}
  pq.push({0, source});
  dist[source] = 0;

  while (!pq.empty()) {
    int u = pq.top().second;
    pq.pop();

    if (vis[u]) {
      continue;
    }

    if (u == dest) {
      break;
    }

    vis[u] = true;

    for (auto edge : adjList[u]) {
      int v = edge.first;
      int w = edge.second;

      if (!vis[v] && w + dist[u] < dist[v]) {
        dist[v] = w + dist[u];
        parent[v] = u;
        pq.push({dist[v], v});
      }
    }
  }

  return parent;
}

int main() {
  int V = 5;
  Graph g(V);

  g.addEdge(0, 1, 1);
  g.addEdge(0, 2, 1);
  g.addEdge(0, 3, 6);
  g.addEdge(0, 4, 7);
  g.addEdge(1, 2, 5);
  g.addEdge(1, 3, 0);
  g.addEdge(1, 4, 3);
  g.addEdge(2, 3, 3);
  g.addEdge(2, 4, 4);
  g.addEdge(3, 4, 1);

  cout << "Graph: " << '\n';
  cout << "From - To : Weight" << '\n';
  for (int i = 0; i < V; i++) {
    for (auto edge : g.adjList[i]) {
      if (i <= edge.first) {
        cout << i << " - " << edge.first << " : " << edge.second << '\n';
      }
    }
  }

  int source = 0, dest = 4;
  vector<int> parent = g.dijkstra(source, dest);

  int i = dest;
  string path = "";

  while (i != source) {
    path += (i + '0');
    path += " >- ";
    i = parent[i];
  }
  path += (source + '0');

  reverse(path.begin(), path.end());

  cout << path << '\n';

  return 0;
}
