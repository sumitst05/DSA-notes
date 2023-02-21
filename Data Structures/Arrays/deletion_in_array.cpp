#include <bits/stdc++.h>
using namespace std;

// To search a key to be deleted
int findElement(int arr[], int n, int key) {
	for (int i = 0; i < n; i++)
		if (arr[i] == key) return i;
	return -1;
}

// Function to delete an element
int deleteElement(int arr[], int n, int key) {
	// Find position of element to be deleted
	int pos = findElement(arr, n, key);
	if (pos == -1) {
		cout << "Element not found";
		return n;
	}
	// Deleting element
	for (int i = pos; i < n - 1; i++)
		arr[i] = arr[i + 1];
	return n - 1;
}

int main() {
	int arr[] = {10, 50, 30, 40, 20};
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 30;
	
    cout << "Array before deletion: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << '\n';

	// Function call
	n = deleteElement(arr, n, key);

	cout << "Array after deletion: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
    cout << '\n';
	return 0;
}

