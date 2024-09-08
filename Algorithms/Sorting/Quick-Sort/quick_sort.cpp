#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int l, int r) {
  int pivot = arr[r]; // choosing right most element as pivot
  int i = l - 1; // one position before beginning of segment

	// iterate the segment from l to r
  for (int j = l; j < r; j++) {
		// if element is smaller than pivot
    if (arr[j] < pivot) {
      i++; // move boundary of elements lesser than pivot to the right
      swap(arr[i], arr[j]); // put smaller element before the pivot
    }
  }

	// place the pivot in its correct position
  swap(arr[i + 1], arr[r]);

	// return pivot element's index
  return i + 1;
}

void quickSort(vector<int> &arr, int l, int r) {
  if (l < r) {
    int pivot = partition(arr, l, r);

    quickSort(arr, l, pivot - 1);
    quickSort(arr, pivot, r);
  }
}

int main() {
  vector<int> arr = {1, 5, 7, 3, 4, 6, 8, 9, 100, 293, 27, 38, 49, 593, 29, 26};
  int n = arr.size();

  cout << "Array before sorting: " << '\n';
  for (int num : arr) {
    cout << num << " ";
  }
  cout << '\n';

  quickSort(arr, 0, n - 1);

  cout << "Array after sorting: " << '\n';
  for (int num : arr) {
    cout << num << " ";
  }
  cout << '\n';
}
