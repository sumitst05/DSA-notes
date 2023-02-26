-Insertion:
    -Time Complexity: O(n) - inserting an element at the beginning of an array requires shifting all the existing elements to the right by one position. This takes O(n) time as we need to visit each element in the array. Inserting an element at the end of an array takes constant time, i.e., O(1). Inserting an element at any other position in the array requires shifting elements to the right, which also takes O(n) time
    -Space Complexity: O(1) - inserting a single element into an array does not require any additional memory allocation. It can be done in place.

-Deletion: 
    -Time Complexity: O(n) - deleting an element from the beginning of an array requires shifting all the existing elements to the left by one position. This takes O(n) time as we need to visit each element in the array. Deleting an element from the end of an array takes constant time, i.e., O(1). Deleting an element from any other position in the array requires shifting elements to the left, which also takes O(n) time
    -Space Complexity: O(1) - deleting a single element from an array does not require any additional memory deallocation. It can be done in place.

-Searching:
    -Time Complexity: O(n) - in the worst case scenario, we may need to visit each element in the array to find the desired element. This takes O(n) time
    -Space Complexity: O(1) - searching an element in an array does not require any additional memory allocation. It can be done in place.

-Sorting:
    -Time Complexity: O(n^2) for most sorting algorithms such as bubble sort, insertion sort, and selection sort. However, sorting can be done in O(n log n) time using more efficient algorithms such as merge sort, quicksort, and heapsort
    -Space Complexity: O(n) for most sorting algorithms. However, some in-place sorting algorithms like heapsort and quicksort can be implemented with a space complexity of O(1).

**Note**: It's worth noting that the time and space complexities mentioned here are for the basic implementation of these operations in an array. The actual complexities can vary based on the specific implementation and the data being processed.
