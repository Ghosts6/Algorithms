![Ghosts6](https://github.com/Ghosts6/search-name-in-arrays-with-binary-search-algorithm/assets/95994481/4809da9f-97ed-44ac-8c28-d2a930931be6)

# Algorithms

# Big O, Big Ω, and Big Θ Notation  

When analyzing algorithms, we use asymptotic notation to describe their performance in terms of time and space complexity. These notations help us understand how the algorithm scales with different input sizes.  

### **Mathematical Definitions**  

- **Big O (O) – Upper Bound (Worst Case):**  
  - `f(x) is O(g(x)) if there exist positive constants c and k such that:`  
    ```
    f(x) ≤ c ⋅ g(x),   for all x > k
    ```
  - This represents the **worst-case scenario** for an algorithm.  

- **Big Omega (Ω) – Lower Bound (Best Case):**  
  - `f(x) is Ω(g(x)) if there exist positive constants c and k such that:`  
    ```
    f(x) ≥ c ⋅ g(x),   for all x > k
    ```
  - This represents the **best-case scenario** for an algorithm.  

- **Big Theta (Θ) – Tight Bound (Average Case):**  
  - `f(x) is Θ(g(x)) if there exist positive constants c₁, c₂, and k such that:`  
    ```
    c₁ ⋅ g(x) ≤ f(x) ≤ c₂ ⋅ g(x),   for all x > k
    ```
  - This means that the algorithm has the same growth rate in both **best-case and worst-case** scenarios.  

---

## Time Complexity Classes  

Understanding time complexity is essential for writing efficient code. Below are common time complexities with their meanings:  

| Complexity | Notation | Description |
|------------|-----------|-------------|
| **Constant** | O(1) | Runs in the same time regardless of input size. Example: accessing an array element by index. |
| **Logarithmic** | O(log n) | Reduces the problem size in each step. Example: binary search. |
| **Linear** | O(n) | Grows directly with input size. Example: iterating through an array. |
| **Linearithmic** | O(n log n) | Common in efficient sorting algorithms like merge sort and quicksort (average case). |
| **Quadratic** | O(n²) | Common in nested loops, like in bubble sort or selection sort. |
| **Exponential** | O(2ⁿ) | Grows extremely fast, often found in recursive algorithms like brute-force subsets. |
| **Factorial** | O(n!) | The worst possible complexity, usually seen in brute-force combinatorial problems (e.g., traveling salesman problem). |

---

## **Time Complexity of Common Algorithms**  

| Algorithm | Best Case (Ω) | Average Case (Θ) | Worst Case (O) |
|------------|--------------|------------------|----------------|
| **Binary Search (Logarithmic Search)** | Ω(1) | Θ(log n) | O(log n) |
| **Linear Search** | Ω(1) | Θ(n) | O(n) |
| **Jump Search** | Ω(1) | Θ(√n) | O(√n) |
| **Bubble Sort** | Ω(n) | Θ(n²) | O(n²) |
| **Dijkstra’s Algorithm** | Ω(V log V) | Θ((V + E) log V) | O((V + E) log V) |
| **Breadth-First Search (BFS)** | Ω(V) | Θ(V + E) | O(V + E) |

**Legend:**  
- **V** = Number of vertices (nodes) in the graph  
- **E** = Number of edges in the graph  

---
## 🚀 Introduction to Algorithms  

### 📌 What is an Algorithm?  
An **algorithm** is a **finite set of precise instructions** for solving a problem or performing a computation.  
It provides a step-by-step procedure to transform **input** into **output** efficiently.  

---

### 🔹 Properties of an Algorithm  

For a set of instructions to be considered an algorithm, it must satisfy the following properties:  

1. **📥 Input** – The algorithm must take at least one well-defined input.  
2. **📤 Output** – It must produce at least one well-defined output.  
3. **✅ Correctness** – The output should be correct for all valid inputs.  
4. **🔄 Finiteness** – The algorithm must complete after a finite number of steps.  
5. **⚡ Effectiveness** – Each step of the algorithm must be simple and executable within a finite amount of time.  
6. **🌍 Generality** – The algorithm should solve a **general** class of problems, not just a specific case.  

---

### 🔎 Types of Problems Solved by Algorithms  

Algorithms are designed to solve different types of problems, including:  

1. **🔍 Search Problems** – Finding an item in a dataset (e.g., Binary Search, Linear Search).  
2. **🔢 Sorting Problems** – Arranging data in a specific order (e.g., Quick Sort, Merge Sort).  
3. **🏆 Optimization Problems** – Finding the best solution among many (e.g., Dijkstra’s Algorithm, Dynamic Programming).  

---

## 🔥 Types of Algorithms  

Algorithms can be classified based on their working principles:  

### ⚡ 1. Brute Force Algorithms (Straightforward Approach)  
- Solves problems by checking all possible solutions.  
- **Example:** 🛠️ Naïve string matching, 🫧 Bubble Sort.  

### 🔎 2. Search Algorithms  
- Used to find elements within a dataset.  
- **Examples:**  
  - **📍 Binary Search** ✔️  
  - **🏃 Jump Search**  
  - **🔍 Linear Search**  

### 🔢 3. Sorting Algorithms  
- Organize elements in a particular order (ascending or descending).  
- **Examples:**  
  - **🍾 Bubble Sort**  
  - **⚡ Merge Sort**  
  - **🔥 Quick Sort**  

### 🔗 4. Graph Algorithms  
- Solve problems related to graphs (nodes and edges).  
- **Examples:**  
  - **🚀 Dijkstra's Algorithm** (Shortest Path)  
  - **🧩 Breadth-First Search (BFS)** (Graph Traversal)  
  - **🔎 Depth-First Search (DFS)**  

### 🏆 5. Greedy Algorithms  
- Make the locally optimal choice at each step.  
- **Examples:**  
  - **🚀 Dijkstra's Algorithm** (also classified as Greedy)  
  - **🔄 Greedy + Parity-based Search Algorithm**  
  - **🔗 Kruskal's Algorithm** (for Minimum Spanning Trees)  

### 📈 6. Dynamic Programming Algorithms  
- Solve problems by breaking them down into overlapping subproblems.  
- **Examples:**  
  - **🔢 Fibonacci Sequence using DP**  
  - **🎒 Knapsack Problem**  
  - **🔠 Longest Common Subsequence (LCS)**  

### 🎨 7. Other Algorithms  
- **🖍️ Four Color Theorem** (Graph Coloring)  

---

## Search Algorithms

### Binary Search ✔️

<img src="https://github.com/Ghosts6/search-name-in-arrays-with-binary-search-algorithm/assets/95994481/0eca835a-56ed-43d7-a0d1-59d24135fa4f" alt="BinarySearch" width="400" height="400">

Binary search is an efficient algorithm for finding an element in a sorted array. It works by repeatedly dividing the search interval in half until the target element is found or the interval is empty. It starts by comparing the target element with the middle element of the array. If they match, the search is successful. If the target element is smaller, the search continues on the left half of the array; if larger, it continues on the right half. This process repeats until the element is found or the interval is empty. Binary search is significantly faster than linear search for large arrays because it eliminates half of the remaining elements in each step, resulting in a logarithmic time complexity.

###  binary_search_with_built_in_function.cpp

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

### binary_search_without_builtin_function.cpp

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

### JumpsSearch🏃:

<img src="https://github.com/Ghosts6/binary-search-algorithm/assets/95994481/3d5dc8e7-5800-44cd-824a-3287cca5f016" alt="JumpSearch" width="400" height="400">

Jump search is an algorithm for finding an element in a sorted array. It works by jumping ahead a fixed number of steps to search for the target element. If the element being searched for is smaller than the current element, it employs linear search within the small range. This process continues until the target element is found or determined to be absent. By jumping ahead, it reduces the number of comparisons compared to linear search, making it more efficient, especially for large arrays.

### Jump_search.cpp

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

### LinerSearch🔍:

<img src="https://github.com/Ghosts6/binary-search-algorithm/assets/95994481/81d70870-c55e-47ed-86eb-f46e5f32a685" alt="LinearSearch" width="400" height="400">

Linear search is a simple algorithm for finding an element in an array or list. It works by sequentially checking each element in the array until the target element is found or the end of the array is reached. It starts from the beginning of the array and compares each element with the target element. If a match is found, the search is successful, and the index of the element is returned. If the target element is not found after checking all elements, the search fails. Linear search is easy to implement and works well for small arrays, but its time complexity is O(n), where n is the number of elements in the array, making it inefficient for large datasets compared to binary search or other more efficient search algorithms.

### linear_search.cpp

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

## **Insertion Sort 🃏**  

<img src="https://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif" alt="Insertion Sort Visualization" width="400" height="400">  

Insertion sort is a simple and efficient sorting algorithm that works similarly to how we sort playing cards in our hands. It builds the sorted array one element at a time by taking the next element and inserting it into its correct position among the previously sorted elements.  

### **How It Works:**  
1. Start from the second element (index 1) and compare it with the previous element.  
2. If the previous element is larger, shift it to the right.  
3. Continue shifting elements until the correct position for the current element is found.  
4. Repeat the process for all elements in the array.  

Insertion Sort is **adaptive**, meaning it performs well on nearly sorted data. However, it becomes inefficient for large datasets compared to more advanced sorting algorithms like **Merge Sort** or **Quick Sort**.  

### **Time Complexity:**  
| Best Case (Ω) | Average Case (Θ) | Worst Case (O) |
|--------------|------------------|----------------|
| Ω(n) | Θ(n²) | O(n²) |

- Best case occurs when the array is **already sorted**: **O(n)**  
- Worst case occurs when the array is **sorted in reverse order**: **O(n²)**  
- Average case is **O(n²)** due to the nested loop structure  

---

### **insertion_sort.cpp**  

```cpp
#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {8, 4, 1, 3, 5, 2, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:\n";
    print_array(arr, n);

    insertion_sort(arr, n);

    cout << "Sorted array:\n";
    print_array(arr, n);

    return 0;
}
```  

---

## Sorting Algorithms

### BubbleSort🍾:

<img src="https://github.com/Ghosts6/searchAlgorithms/assets/95994481/7338a7d1-86d4-4697-80a8-420596350307" alt="BubbleSort" width="400" height="400">

Bubble sort is a basic algorithm for arranging a string of numbers or other elements in the correct order. The method works by examining each set of adjacent elements in the string, from left to right, switching their positions if they are out of order

### Bubble_sort.cpp
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

### BinarySort 🖥️🔍  

<img src="https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif" alt="BinarySort" width="400" height="400">  

**Binary Sort (Merge Sort)** is a highly efficient sorting algorithm that works on the principle of **Divide and Conquer**. It recursively divides the array into smaller halves, sorts them, and then merges them back together in sorted order.  

### Binary_sort.cpp  
```cpp
#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void binarySort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        binarySort(arr, left, mid);
        binarySort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "\t\t\t Binary Sort (Merge Sort) Algorithm \t\t\t\n";
    cout << "Unsorted array: ";
    printArray(arr, arr_size);

    binarySort(arr, 0, arr_size - 1);

    cout << "Sorted array: ";
    printArray(arr, arr_size);
    return 0;
}
```

### 🔹 **Why Binary Sort (Merge Sort)?**
✅ **Time Complexity:** `O(n log n)` (Much faster than Bubble Sort)  
✅ **Stable Sort:** Maintains order of equal elements  
✅ **Efficient for Large Datasets**  

This **Binary Sort (Merge Sort)** is an optimal and widely used sorting algorithm in **computer science** due to its efficiency and reliability! 🚀  

---

## Graph Algorithms

### Dijkstra🚀:

<img src="https://github.com/Ghosts6/searchAlgorithms/assets/95994481/040b8c3e-730e-49bd-99df-a2237c7c48c8" alt="Dijkstra" width="400" height="400">

Dijkstra's algorithm finds the shortest path from one vertex to all other vertices. It does so by repeatedly selecting the nearest unvisited vertex and calculating the distance to all the unvisited neighboring vertices

### dijkstra.cpp

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
### 🧩 Breadth-First Search (BFS):

<img src="https://github.com/user-attachments/assets/63848a93-49a6-45ca-8566-55ced0d8ddd2" alt="BinaryFirstSearch" width="400" height="400">

Breadth-First Search (BFS) is a graph traversal algorithm that explores the vertices of a graph in breadthward motion. It starts from a given source vertex and explores all its neighboring vertices at the present depth level before moving on to vertices at the next depth level. BFS uses a queue to keep track of the next vertex to visit and ensures that each vertex is visited exactly once. It is particularly useful for finding the shortest path in unweighted graphs and for exploring all reachable nodes.

### breadth_first_search.cpp

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
```

---

## Greedy Algorithms

### 🏆 Greedy + Parity-based Search Algorithm

<img src="https://github.com/user-attachments/assets/5b1fb521-e6a0-4aa8-98b8-6c7d1d7e6336" alt="Greedy Algorithm" width="400" height="400">

### 📌 Introduction

The **Greedy + Parity-based Search Algorithm** is an approach to solving problems where an optimal choice is made at each step, aiming to find a solution efficiently. 

In this specific problem, we are searching for a 🐱 **cat** inside one of five 📦 **boxes**. However, the cat **moves to an adjacent box (left or right) every night**. Each morning, we can **open one box** to check if the cat is inside.

### 🔍 Comparison with BFS (Breadth-First Search)

| Feature            | 🚀 Greedy + Parity Search | 🌳 BFS (Breadth-First Search) |
|--------------------|----------------------|---------------------------|
| **🧠 Strategy**      | Uses a greedy approach combined with parity-based logic | Explores all possible moves level by level |
| **⚡ Efficiency**    | More efficient for structured problems like this one | Can be inefficient if the search space is large |
| **🎯 Optimality**    | Not always optimal but works well in constrained environments | Guarantees the shortest path in unweighted graphs |
| **🛠️ Implementation** | Simple and fast | Requires more memory and computation |
| **📌 Use Case**      | Problems with predictable movement | General-purpose search problems |

### 🐍 Python Implementation

```python
import random

def find_cat_greedy(boxes=5, days=10):
    cat_position = random.randint(0, boxes - 1)  # Cat starts in a random box
    print(f"Cat starts in box {cat_position}")

    for day in range(days):
        guess = day % boxes  # Greedy guess based on a pattern
        print(f"Day {day + 1}: Checking box {guess}")

        if guess == cat_position:
            print(f"Found the cat in box {guess} on day {day + 1}!")
            return day + 1
        
        # Cat moves left or right randomly
        if cat_position == 0:
            cat_position += 1
        elif cat_position == boxes - 1:
            cat_position -= 1
        else:
            cat_position += random.choice([-1, 1])
    
    print("Could not find the cat in given days.")
    return -1

find_cat_greedy()
```

---

## Other algorithms

### 🎨 Four Color Theorem

<img src="https://github.com/user-attachments/assets/fd33ba31-9149-4288-b482-8c3ad35a280f" alt="Four Color Theorem" width="400" height="400">



### 📌 Introduction

The **Four Color Theorem** states that **any map can be colored using at most four colors** in such a way that **no two adjacent regions share the same color**. This theorem applies to maps where each region (such as countries or states) is connected and does not have separate islands.

In this example, we will apply the **Four Color Theorem** to color a map of the **USA states** so that no two neighboring states have the same color.

### 🐍 Python Implementation

```python
import networkx as nx
import matplotlib.pyplot as plt

# Define USA state adjacency graph
usa_map = nx.Graph()

# Add edges (only a few as an example)
borders = [
    ("California", "Oregon"), ("California", "Nevada"), ("California", "Arizona"),
    ("Nevada", "Oregon"), ("Nevada", "Idaho"), ("Nevada", "Utah"),
    ("Arizona", "Utah"), ("Arizona", "New Mexico"),
    ("New Mexico", "Texas"), ("Texas", "Oklahoma"), ("Texas", "Louisiana"),
    ("Oklahoma", "Kansas"), ("Oklahoma", "Arkansas")
]

usa_map.add_edges_from(borders)

# Get four-coloring using NetworkX's greedy algorithm with strategy
color_map = nx.coloring.greedy_color(usa_map, strategy="largest_first")

# Define colors
colors = ["red", "blue", "green", "yellow"]
node_colors = [colors[color_map[state] % 4] for state in usa_map.nodes]

# Draw the map
plt.figure(figsize=(8, 6))
nx.draw(usa_map, with_labels=True, node_color=node_colors, node_size=3000, font_size=10, font_color="white")
plt.show()
```

#### 🏗️ User-Defined Function Implementation

```python
import random

def four_color_theorem(graph):
    """ 🎨 Applies Four Color Theorem to a given graph representation of a map. """
    colors = ["red", "blue", "green", "yellow"]
    state_colors = {}

    for state in graph:
        # Get used colors by neighboring states
        used_colors = {state_colors[neighbor] for neighbor in graph[state] if neighbor in state_colors}
        
        # Assign the first available color
        for color in colors:
            if color not in used_colors:
                state_colors[state] = color
                break

    return state_colors

# Example USA adjacency list
usa_states = {
    "California": ["Oregon", "Nevada", "Arizona"],
    "Oregon": ["California", "Nevada"],
    "Nevada": ["California", "Oregon", "Idaho", "Utah"],
    "Arizona": ["California", "Utah", "New Mexico"],
    "New Mexico": ["Arizona", "Texas"],
    "Texas": ["New Mexico", "Oklahoma", "Louisiana"],
    "Oklahoma": ["Texas", "Kansas", "Arkansas"]
}

# Apply the Four Color Theorem
state_coloring = four_color_theorem(usa_states)

# Display results
for state, color in state_coloring.items():
    print(f"🗺️ {state} -> {color}")
```
