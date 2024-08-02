#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> bfs(int start, const vector<vector<int>>& adjList);

// usage
int main() {
    // Example graph 
    vector<vector<int>> adjList = {
        {1, 2},    
        {0, 3, 4}, 
        {0, 4},    
        {1, 5},    
        {1, 2, 5}, 
        {3, 4}     
    };

    vector<int> result = bfs(0, adjList);

    cout << "BFS Traversal starting from node 0: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}

vector<int> bfs(int start, const vector<vector<int>>& adjList) {
    int n = adjList.size();
    vector<int> visited(n, 0);
    vector<int> traversal;
    queue<int> q;

    visited[start] = 1;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        traversal.push_back(node);

        for (int neighbor : adjList[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = 1;
                q.push(neighbor);
            }
        }
    }

    return traversal;
}
