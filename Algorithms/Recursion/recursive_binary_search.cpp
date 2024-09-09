// Binary search tries to continuously divide a sorted array into half and
// selects the part where the target is likely to be for the next partition.
// This pattern can be implemented using recursion too besides the more
// traditional iterative approach. Drawback would be the O(n) extra space for
// recursion stack compared to O(1) space in iterative approach. But we
// implement it anyways to understand recursion better.

#include <bits/stdc++.h>
using namespace std;

// base case: pointer l meets pointer r
// recursion: partition the array in the direction of target
int rec_binary_search(vector<int> arr, int l, int r, int target) {
  if (l <= r) {
    int mid = l + (r - l) / 2;

    // target found
    if (arr[mid] == target) {
      return mid;
    }

    if (arr[mid] > target) {
      return rec_binary_search(arr, l, mid - 1,
                               target); // making r = mid - 1... shrinking the
                                        // search space towards left
    } else {
      return rec_binary_search(arr, mid + 1, r,
                               target); // making l = mid + 1... shrinking the
                                        // search space towards right
    }
  }

  return -1; // target not found (l meets r)
}

int main() {
  vector<int> arr = {19, 20, 47, 50, 60, 109, 203, 405, 999};
  int n = arr.size();

  int target = 203;

  int index = rec_binary_search(arr, 0, n - 1, target);

  cout << target << " found in the array at index " << index << '\n';

  return 0;
}
