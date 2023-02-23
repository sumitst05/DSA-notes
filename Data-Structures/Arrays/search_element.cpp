#include <bits/stdc++.h>
using namespace std;

// Function to implement search operation in an array
int findElement(int arr[], int n, int key) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == key) return i;
    }
	return -1;	// If the key is not found
}

int main() {
	int arr[] = {12, 34, 10, 6, 40};
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 40;
	
	// Function call
	int position = findElement(arr, n, key);

	if (position == -1) cout << "Element not found";
	else cout << "Element Found at Position: " << position + 1 << '\n';
	return 0;
}

// This code is contributed
// by Akanksha Rai

