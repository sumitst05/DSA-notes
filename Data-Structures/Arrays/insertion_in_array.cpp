#include <bits/stdc++.h>
using namespace std;

// Function to insert element
// at a specific position
void insertElement(int arr[], int n, int x, int pos) {
  // shift elements which are on the right side of pos to right
  for (int i = n - 1; i >= pos; i--)
    arr[i + 1] = arr[i];
  arr[pos] = x; // insert x at pos
}

int main() {
  int arr[10] = {1, 6, 2, 4, 5, 7};
  int n = 6, key = 6;
  cout << "Before Insertion: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << '\n';

  // Inserting at a specific position
  int x = 10, pos = 2;
  n++;                           // increment the size of array by 1
  insertElement(arr, n, x, pos); // Inserting x at index pos
  cout << "After insertion at pos (2) : ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << '\n';
  return 0;
}
