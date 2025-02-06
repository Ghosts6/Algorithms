import heapq

INF = float('inf')

# Dijkstra's algorithm function
def dijkstra(graph, source):
    V = len(graph)
    dist = [INF] * V
    pq = []
    heapq.heappush(pq, (0, source))
    dist[source] = 0

    while pq:
        d, u = heapq.heappop(pq)

        for v, weight in graph[u]:
            if dist[v] > dist[u] + weight:
                dist[v] = dist[u] + weight
                heapq.heappush(pq, (dist[v], v))

    # Printing the shortest distances
    print("Shortest distances from source", source, ":")
    for i in range(V):
        print("Vertex", i, ":", dist[i])

# Main function
if __name__ == "__main__":
    vertices,edge = map(int, input("Enter the number of vertices and edges: ").split())

    # Create a graph as an adjacency list
    graph = [[] for _ in range(vertices)]
    print("Enter the edges (source destination weight):")
    for _ in range(edge):
        current_node,neighbor_node,edge_weight = map(int, input().split())
        graph[current_node].append((neighbor_node, edge_weight))
        graph[neighbor_node].append((current_node, edge_weight))  

    source = int(input("Enter the source vertex: "))

    dijkstra(graph, source)
