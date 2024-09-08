#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr) {
  int n = arr.size();
  int key = 0, j = 0;

  for (int i = 0; i < n; i++) {
    key = arr[i];
    j = i - 1;

    // Shift elements of arr[0..i-1], that are greater than key, to one position
    // ahead of their current position
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = key; // placing the key at it's correct position
  }
}

int main() {
  vector<int> arr = {1, 5, 7, 3, 4, 6, 8, 9, 100, 293, 27, 38, 49, 593, 29, 26};

  cout << "Array before sorting: " << '\n';
  for (int num : arr) {
    cout << num << " ";
  }
  cout << '\n';

  insertionSort(arr);

  cout << "Array after sorting: " << '\n';
  for (int num : arr) {
    cout << num << " ";
  }
  cout << '\n';
}
