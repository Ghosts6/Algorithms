![image](https://github.com/Ghosts6/search-name-in-arrays-with-binary-search-algorithm/assets/95994481/4809da9f-97ed-44ac-8c28-d2a930931be6)

#✔️ search-name-in-arrays-with-binary-search-algorithm

![images](https://github.com/Ghosts6/search-name-in-arrays-with-binary-search-algorithm/assets/95994481/0eca835a-56ed-43d7-a0d1-59d24135fa4f)earch array with 

Binary search is an efficient algorithm for finding an element in a sorted array. It works by repeatedly dividing the search interval in half until the target element is found or the interval is empty. It starts by comparing the target element with the middle element of the array. If they match, the search is successful. If the target element is smaller, the search continues on the left half of the array; if larger, it continues on the right half. This process repeats until the element is found or the interval is empty. Binary search is significantly faster than linear search for large arrays because it eliminates half of the remaining elements in each step, resulting in a logarithmic time complexity.


# Builtin function 'binary_search()':

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
#Without Builtin function:
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

# JumpsSearch

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
