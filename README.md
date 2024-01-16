![image](https://github.com/Ghosts6/search-name-in-arrays-with-binary-search-algorithm/assets/95994481/4809da9f-97ed-44ac-8c28-d2a930931be6)(https://www.kiarashbashokian.com/)

#✔️ search-name-in-arrays-with-binary-search-algorithm

search array with binary search algorithm in c++

![images](https://github.com/Ghosts6/search-name-in-arrays-with-binary-search-algorithm/assets/95994481/0eca835a-56ed-43d7-a0d1-59d24135fa4f)

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
