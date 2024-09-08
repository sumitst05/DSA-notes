#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr) {
  int n = arr.size();
  int minIdx = 0;

  for (int i = 0; i < n; i++) {
    minIdx = i;
    // finding index of minimum element in the unsorted portion
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIdx]) {
        minIdx = j;
      }
    }

    // swap the element at minIdx with first (smallest) element of unsorted
    // portion
    if (minIdx != i) {
      swap(arr[i], arr[minIdx]);
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

  selectionSort(arr);

  cout << "Array after sorting: " << '\n';
  for (int num : arr) {
    cout << num << " ";
  }
  cout << '\n';
}
