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
