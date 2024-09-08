#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int mid, int r) {
  int n1 = mid - l + 1;
  int n2 = r - mid;

  vector<int> lArr(n1), rArr(n2);

  // copying data into temporary arrays lArr and rArr
  for (int i = 0; i < n1; i++) {
    lArr[i] = arr[l + i];
  }
  for (int j = 0; j < n2; j++) {
    rArr[j] = arr[mid + j + 1];
  }

  int i = 0, j = 0, k = l;

  // compare elements from both lArr and rArr and move smaller element to arr at
  // index k increment i or j based on which element was moved to arr increment
  // k
  while (i < n1 && j < n2) {
    if (lArr[i] <= rArr[j]) {
      arr[k] = lArr[i];
      i++;
    } else {
      arr[k] = rArr[j];
      j++;
    }

    k++;
  }

  // in case lArr exhausts before rArr or vice versa...
  while (i < n1) {
    arr[k] = lArr[i];
    i++;
    k++;
  }
  while (j < n2) {
    arr[k] = rArr[j];
    j++;
    k++;
  }
}

void mergeSort(vector<int> &arr, int l, int r) {
  if (l < r) {
    int mid = l + (r - l) / 2;

		// sort left and right portions recursively
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);

		// merge the portions created
    merge(arr, l, mid, r);
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

  mergeSort(arr, 0, n - 1);

  cout << "Array after sorting: " << '\n';
  for (int num : arr) {
    cout << num << " ";
  }
  cout << '\n';
}
