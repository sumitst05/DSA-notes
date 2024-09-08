# Time and Space Complexity

| Operation | Time Complexity | Space Complexity |
| --- | --- | --- |
| Search (Iterative) | O(log n) | O(1) |
| Search (Recursive) | O(log n) | O(log n) |

### Time Complexity

- **Worst-Case Time Complexity**: O(log n)
  - In the worst-case scenario, the algorithm repeatedly divides the search interval in half. This logarithmic reduction in search space leads to O(log n) time complexity, where n is the number of elements in the list.
  
- **Best-Case Time Complexity**: O(1)
  - In the best-case scenario, the target element is found at the middle of the list during the first comparison.

### Space Complexity

- **Iterative Implementation**: O(1)
  - Binary search uses a constant amount of extra space for variables such as `low`, `high`, and `mid`, regardless of the input size.

**Note**: The time and space complexities described here assume that the list is sorted. Binary search is not applicable to unsorted lists, and its performance relies on the sorted order of the input data.

