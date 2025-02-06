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
