#include <bits/stdc++.h>
using namespace std;

// Function to maintain the max-heap property of a subtree rooted at index i
void heapify(vector<int> &arr, int n, int i) {
    int max = i; // Initialize maximum element's index as root
    int l = 2 * i + 1; // Index of left child
    int r = 2 * i + 2; // Index of right child

    // If left child exists and is greater than root, update max
    if (l < n && arr[l] > arr[max]) {
        max = l;
    }

    // If right child exists and is greater than largest, update max
    if (r < n && arr[r] > arr[max]) {
        max = r;
    }

    // If max is not root, swap and continue heapifying the affected subtree
    if (max != i) {
        swap(arr[i], arr[max]);
        heapify(arr, n, max);
    }
}

// Function to perform heap sort on the array
void heapSort(vector<int> &arr, int n, int i) {
    // Build a max heap by heapifying non-leaf nodes
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // Extract elements one by one from the heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root (largest element) to the end of the array
        swap(arr[0], arr[i]);

        // Call heapify on the reduced heap to maintain heap property
        heapify(arr, i, 0);
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

    heapSort(arr, n, 0);

    cout << "Array after sorting: " << '\n';
    for (int num : arr) {
        cout << num << " ";
    }
    cout << '\n';
}
