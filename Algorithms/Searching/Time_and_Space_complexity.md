# Time and Space Complexity for Searching Algorithms

## Linear Search

| Case   | Time Complexity | Space Complexity |
| ------ | --------------- | ---------------- |
| Best   | O(1)            | O(1)             |
| Average | O(n)            | O(1)             |
| Worst   | O(n)            | O(1)             |

- **Best Time Complexity:** O(1) if the target element is the first element in the list.
- **Average Time Complexity:** O(n) because, on average, half of the elements need to be checked.
- **Worst Time Complexity:** O(n) because, in the worst case, every element needs to be checked.
- **Space Complexity:** O(1) since it only requires a constant amount of extra space for variables.

## Binary Search

| Case   | Time Complexity | Space Complexity |
| ------ | --------------- | ---------------- |
| Best   | O(1)            | O(1)             |
| Average | O(log n)        | O(1)             |
| Worst   | O(log n)        | O(1)             |

- **Best Time Complexity:** O(1) if the target element is the middle element of the array.
- **Average Time Complexity:** O(log n) because the search interval is halved with each iteration, making it logarithmic in terms of the number of elements.
- **Worst Time Complexity:** O(log n) if the target element is not present or located at the ends of the search interval.
- **Space Complexity:** O(1) for the iterative version, as it only requires a constant amount of extra space. For the recursive version, the space complexity is O(log n) due to the call stack used for recursion.

**Note:** The time and space complexities given here are for the basic implementations of these searching algorithms. The actual complexities can vary based on factors such as the specific implementation, data structures used, and whether the array is sorted.
