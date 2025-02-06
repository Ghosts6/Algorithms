#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;
#define INF INT_MAX

// Structure to represent a node
struct Node {
    int vertex,distance;
    Node(int v, int d) : vertex(v), distance(d) {}
    bool operator<(const Node& other) const {
        return distance > other.distance;
    }
};

// Dijkstra's algorithm function
void dijkstra(vector<vector<pair<int, int>>>& graph, int source) {
    int V = graph.size();
    vector<int> dist(V, INF);
    priority_queue<Node> pq;
    pq.push(Node(source, 0));
    dist[source] = 0;

    while (!pq.empty()) {
        int u = pq.top().vertex;
        pq.pop();

        for (auto& neighbor : graph[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(Node(v, dist[v]));
            }
        }
    }
    // Printing the shortest distances
    cout << "Shortest distances from source " << source << ":\n";
    for (int i = 0; i < V; ++i) {
        cout << "Vertex " << i << ": " << dist[i] << endl;
    }
}

int main() {
    int vertices,edge,source;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertices >> edge;
    // Create a graph
    vector<vector<pair<int, int>>> graph(vertices);
    cout << "Enter the edges (source destination weight):\n";
    for (int i = 0; i < edge; ++i) {
        int current_node,neighbor_node,edge_weight;
        cin >> current_node >> neighbor_node >> edge_weight;
        graph[current_node].push_back({neighbor_node, edge_weight});
        graph[neighbor_node].push_back({current_node, edge_weight});
    }
    cout << "Enter the source vertex: ";
    cin >> source;
    dijkstra(graph, source);
    return 0;
}
