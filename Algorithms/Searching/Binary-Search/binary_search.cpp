#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target) {
  int index = -1;

  int low = 0, high = arr.size() - 1;
  int mid = low + (high - low) /
                      2; // essentially (low + high) / 2, but writing it this
                         // way takes care of value overflows (more safe)

  while (low <= high) {
    if (arr[mid] < target) {
      low = mid + 1; // shrink the search window from left
    } else if (arr[mid] > target) {
      high = mid - 1; // shrink the search window from right
    } else {
      index = mid;
      break;
    }

    mid = low + (high - low) / 2; // update the mid everytime
  }

  return index;
}

int main() {
  vector<int> arr = {3, 5, 7, 8, 10, 19, 38, 90, 100};
  int idx = binarySearch(arr, 38);

  if (idx != -1) {
    cout << "38 found in array at index " << idx << '\n';
  } else {
    cout << "38 not found in the array" << '\n';
  }
}
