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
