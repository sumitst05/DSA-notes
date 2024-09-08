#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr) {
  int n = arr.size();

  // compare each element to all elements to its right
  // because as the iterator 'i' moves right, the left part gets sorted, meaning
  // all elements to left of current element will be smaller than it already
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        swap(arr[i], arr[j]);
      }
    }
  }
}

int main() {
  vector<int> arr = {1, 5, 7, 3, 4, 6, 8, 9, 100, 293, 27, 38, 49, 593, 29, 26};

  cout << "Array before sorting: " << '\n';
  for (int num : arr) {
    cout << num << " ";
  }
  cout << '\n';

  bubbleSort(arr);

  cout << "Array after sorting: " << '\n';
  for (int num : arr) {
    cout << num << " ";
  }
  cout << '\n';
}
