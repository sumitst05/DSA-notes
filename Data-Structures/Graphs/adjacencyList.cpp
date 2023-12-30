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
        // since the graph is undirected, we put the same weight in both
        // directions on the edge. 
        // For eg: if we have an edge between the
        // vertices 1 and 2 with a weight of 5, then adjList[1] = {{2, 5}, ...} (connection from 1 to 2 with weight 5)
        // and adjList[2] = {{1, 5}, ...} (connection from 2 to 1 with weight 5)
        adjList[from].push_back({to, weight});
        adjList[to].push_back({from, weight});
    }

    void print() {
        for(int i = 0; i < vertices; i++) {
            cout << i << ": ";
            for(auto edge: adjList[i]) {
                cout << edge.to << " ";
            }
            cout << '\n';
        }
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

    graph.print();

    // The above graph will look like this:
    //
    //              (0)
    //         9  / /\  \  3
    //          / 2/  \5 \
    //       (1)--/----\--(2)
    //        \  /   2  \  /
    //      7  \/        \/  3
    //         (3)------(4)
    //              1

    return 0;
}
