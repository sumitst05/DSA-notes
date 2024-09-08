#include <bits/stdc++.h>
using namespace std;

int main() {
  // There are many algorithms to sort an array
  // But here we will only be looking at STL funtion sort();
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n); // sorts in ascending order
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << '\n';
  sort(arr, arr + n, greater<int>()); // sorts in descending order
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << '\n';
  return 0;
}
