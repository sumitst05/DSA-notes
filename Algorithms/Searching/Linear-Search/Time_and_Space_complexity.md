# Time and Space Complexity

| Operation | Time Complexity | Space Complexity |
| --- | --- | --- |
| Search (Worst-Case) | O(n) | O(1) |
| Search (Best-Case) | O(1) | O(1) |

### Time Complexity

- **Worst-Case Time Complexity**: O(n)
  - In the worst-case scenario, the target element is either at the end of the list or not present at all. Therefore, the algorithm needs to examine all n elements of the list to determine the result.
  
- **Best-Case Time Complexity**: O(1)
  - In the best-case scenario, the target element is found at the first position of the list. Hence, the search operation completes in constant time.

### Space Complexity

- **Space Complexity**: O(1)
  - Linear search uses a constant amount of extra space regardless of the size of the input list. The space complexity remains O(1) as the search does not require any additional storage beyond a few variables.

**Note**: The time and space complexities described here assume that the list is unsorted and that a single search operation is being performed. The complexities can vary depending on factors such as the size of the list and the nature of the data being searched.
