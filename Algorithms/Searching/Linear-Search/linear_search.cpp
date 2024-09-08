#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr, int target) {
  int index = -1;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == target) {
      index = i;
      break;
    }
  }

  return index;
}

int main() {
  vector<int> arr = {10, 3, 5, 7, 8, 38, 19, 90, 100};
  int idx = linearSearch(arr, 38);

  if (idx != -1) {
    cout << "38 found in array at index " << idx << '\n';
  } else {
    cout << "38 not found in the array" << '\n';
  }
}
