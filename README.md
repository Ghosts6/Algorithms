![image](https://github.com/Ghosts6/search-name-in-arrays-with-binary-search-algorithm/assets/95994481/4809da9f-97ed-44ac-8c28-d2a930931be6)

# Algorithms

## Binary Search ✔️

![images](https://github.com/Ghosts6/search-name-in-arrays-with-binary-search-algorithm/assets/95994481/0eca835a-56ed-43d7-a0d1-59d24135fa4f)

Binary search is an efficient algorithm for finding an element in a sorted array. It works by repeatedly dividing the search interval in half until the target element is found or the interval is empty. It starts by comparing the target element with the middle element of the array. If they match, the search is successful. If the target element is smaller, the search continues on the left half of the array; if larger, it continues on the right half. This process repeats until the element is found or the interval is empty. Binary search is significantly faster than linear search for large arrays because it eliminates half of the remaining elements in each step, resulting in a logarithmic time complexity.


###  Builtin function 'binary_search()':

```cpp
// binary search with builtin function binary_search()
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
  int num;
  vector<int> v = {10,9,8,7,6,5,4,3,2,1};
  sort (v.begin(), v.end());
  cout<<"Enter number to check it:"<<endl;
  cin>>num;
  cout << "Searching for " << num << ": ";
  if (binary_search (v.begin(), v.end(), num))
    cout << "Found!\n"; 
  else 
    cout << "Not found";
    
  return 0;
}
```
### Without Builtin function:
```cpp
#include <iostream>
#include <algorithm>
#include <string>
#include <cctype> 
using namespace std;
int binary(string arr[],string Sname,int Size);
int main() {
    int result;
    string myString;
    cout<<"enter name to search it"<<endl;
    cin>>myString;
    transform(myString.begin(), myString.end(), myString.begin(), [](unsigned char c) {
        return tolower(c);
    });
    string myArray[] = {"banana", "apple", "grape", "orange"};

    int size = sizeof(myArray) / sizeof(myArray[0]);

    sort(myArray, myArray + size);

    for (int i = 0; i < size; ++i) {
        cout << myArray[i] << " "<<endl;;
    }

    result=binary(myArray,myString,size);

       if (result == -1) 
        cout << ("Element not present"); 
    else
        cout << ("Element found at index ") << result; 


    return 0;
}
int binary(string arr[],string Sname,int Size){
       int first_value = 0; 
    int second_value = Size - 1; 
    while (first_value <= second_value) { 
        int mid = first_value + (second_value- first_value) / 2; 
        int res = -1000; 

        if (Sname== (arr[mid])) 
            res = 0; 

        // Check if x is present at mid 
        if (res == 0) 
            return mid; 

        // If x greater, ignore left half 
        if (Sname > (arr[mid])) 
            first_value = mid + 1; 

        // If x is smaller, ignore right half 
        else
            second_value = mid- 1; 
    } 

    return -1; 
} 

```

## JumpsSearch🏃:

![jump_search](https://github.com/Ghosts6/binary-search-algorithm/assets/95994481/3d5dc8e7-5800-44cd-824a-3287cca5f016)

Jump search is an algorithm for finding an element in a sorted array. It works by jumping ahead a fixed number of steps to search for the target element. If the element being searched for is smaller than the current element, it employs linear search within the small range. This process continues until the target element is found or determined to be absent. By jumping ahead, it reduces the number of comparisons compared to linear search, making it more efficient, especially for large arrays.

Jump_search.cpp
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int jump_search(int arr[], int x, int y);

int main() {
    int choice, arr_size, index_number;
    int arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610};

    cout << "\t\t\tjump search algorithm\t\t\t\n";
    for (int i = 0; i < 16; i++) {
        cout << arr[i] << " ";
    }
    
    cout << '\n' << "please select one of array element to check index number with jump search algorithm" << endl;
    cin >> choice;
    
    arr_size = sizeof(arr) / sizeof(arr[0]);
    index_number = jump_search(arr, choice, arr_size);

    if (index_number != -1)
        cout << "Number " << choice << " has index number of " << index_number << endl;
    else
        cout << "Number " << choice << " not found in the array." << endl;
    
    return 0;
}

int jump_search(int arr[], int x, int y) {
    int step = sqrt(y);
    int prev = 0;
    while (arr[min(step, y) - 1] < x) {
        prev = step;
        step += sqrt(y);
        if (prev >= y)
            return -1;
    }

    while (arr[prev] < x) {
        prev++;
        if (prev == min(step, y))
            return -1;
    }
    if (arr[prev] == x)
        return prev;
 
    return -1;
}
```

## LinerSearch🔍:

![linear_search(1)(1)](https://github.com/Ghosts6/binary-search-algorithm/assets/95994481/81d70870-c55e-47ed-86eb-f46e5f32a685)

Linear search is a simple algorithm for finding an element in an array or list. It works by sequentially checking each element in the array until the target element is found or the end of the array is reached. It starts from the beginning of the array and compares each element with the target element. If a match is found, the search is successful, and the index of the element is returned. If the target element is not found after checking all elements, the search fails. Linear search is easy to implement and works well for small arrays, but its time complexity is O(n), where n is the number of elements in the array, making it inefficient for large datasets compared to binary search or other more efficient search algorithms.

Linear_search.cpp
```cpp
# include <iostream>
# include <cmath>
using namespace std;

int linear_search(int arr[], int x, int y);

int main(){
    int choice, arr_size, index_number;
    int arr[] = {1, 2, 3, 4, 7, 10, 20, 40};
    
    cout << "\t\t\tlinear search algorithm\t\t\t\n";
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n' << "please select one of array element to check index number with linear search algorithm" << endl;
    cin >> choice;

    arr_size = sizeof(arr) / sizeof(arr[0]);
    index_number = linear_search(arr, choice, arr_size);

    if (index_number != -1)
        cout << "Number " << choice << " has index number of " << index_number << endl;
    else
        cout << "Number " << choice << " not found in the array." << endl;

    return 0;
}

int linear_search(int arr[], int x, int y){
    for (int i = 0; i < y; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
```

## BubbleSort🍾:

![working-of-bubble-sort-algorithm-ezgif com-webp-to-png-converter](https://github.com/Ghosts6/searchAlgorithms/assets/95994481/7338a7d1-86d4-4697-80a8-420596350307)

Bubble sort is a basic algorithm for arranging a string of numbers or other elements in the correct order. The method works by examining each set of adjacent elements in the string, from left to right, switching their positions if they are out of order

Bubble_sort.cpp
```cpp
#include <iostream>
#include <cmath>
using namespace std;

void bubble(int arr[],int x);
void print_array(int arr[],int x);

int main(){
	int arr_size,index_number;
	int arr[] = { 30, 34, 64 , 25, 12, 20, 90};
	arr_size = sizeof(arr) / sizeof(arr[0]);
	
	cout<<"\t\t\t Bubble sort algorithm \t\t\t\n";
	for(int i=0;i<arr_size;i++){
	cout<<arr[i]<<" ";
	}

	bubble(arr, arr_size);
	cout<<"\n Sorted array :"<<endl;
	print_array(arr, arr_size);
	return 0;
}

void bubble(int arr[],int x){
    int i, j;
    bool swapped;
    for (i = 0; i < x - 1; i++) {
        swapped = false;
        for (j = 0; j < x - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

void print_array(int arr[],int x){
	for (int i = 0; i < x; i++){
        cout << " " << arr[i];
	}	
}
```
## Dijkstra🚀:

![dijkstra](https://github.com/Ghosts6/searchAlgorithms/assets/95994481/040b8c3e-730e-49bd-99df-a2237c7c48c8)

Dijkstra's algorithm finds the shortest path from one vertex to all other vertices. It does so by repeatedly selecting the nearest unvisited vertex and calculating the distance to all the unvisited neighboring vertices

### dijkstra.cpp:
```cpp
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
```
### dijkstra.py
```py
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
```
## 🧩 Breadth-First Search (BFS):

![bfs](https://github.com/Ghosts6/searchAlgorithms/assets/95994481/bfs-icon.png)

Breadth-First Search (BFS) is a graph traversal algorithm that explores the vertices of a graph in breadthward motion. It starts from a given source vertex and explores all its neighboring vertices at the present depth level before moving on to vertices at the next depth level. BFS uses a queue to keep track of the next vertex to visit and ensures that each vertex is visited exactly once. It is particularly useful for finding the shortest path in unweighted graphs and for exploring all reachable nodes.

### bfs.cpp

```cpp
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> bfs(int start, const vector<vector<int>>& adjList);

// usage
int main() {
    // Example graph 
    vector<vector<int>> adjList = {
        {1, 2},    // Node 0 is connected to Node 1 and 2
        {0, 3, 4}, // Node 1 is connected to Node 0, 3, and 4
        {0, 4},    // Node 2 is connected to Node 0 and 4
        {1, 5},    // Node 3 is connected to Node 1 and 5
        {1, 2, 5}, // Node 4 is connected to Node 1, 2, and 5
        {3, 4}     // Node 5 is connected to Node 3 and 4
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