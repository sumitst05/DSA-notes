/* The most basic yet important data structure is the array. 
 * It is a linear data structure. 
 * An array is a collection of homogeneous data types where the elements are allocated contiguous memory. 
 * Because of the contiguous allocation of memory, any element of an array can be accessed in constant time. 
 * Each array element has a corresponding index number 
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3];   // declaring an array of size 3
    a[0] = 1, a[1] = 2, a[2] = 3;   // adding elements to the array
    for(int i = 0; i < 3; i++) {
        cout << a[i] << " ";    // Display the elements of array
    } 
    cout << '\n';

    int n; cin >> n; // size of the array
    int arr[n]; // declaring an array of size 'n'

    for(int i = 0; i < n; i++) {
        cin >> arr[i]; //Input values of elements of the array
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Print elements of array using a for loop
    }
    cout << '\n';
    
    for(int i : arr) {
        cout << i << " ";   // Print elements of array using a for-each loop 
    }
    cout << '\n';

    int brr[n] = {0};   // Initialising all elements to 0
    for(int i = 0; i < n; i++) {
        cout << brr[i] << " ";
    }
    cout << '\n';
}

