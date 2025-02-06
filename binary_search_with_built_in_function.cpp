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
