#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  // Original order
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << '\n';
  // Reversed Order
  for (int i = n - 1; i >= 0; i--) {
    cout << arr[i] << " ";
  }
  cout << '\n';

  // Reverse using STL function reverse();
  reverse(arr, arr + n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " "; // Displaying reversed array
  }
  cout << '\n';
  return 0;
}
