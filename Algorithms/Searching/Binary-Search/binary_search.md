# Binary Search

Binary search is an efficient algorithm used to find a target element in a sorted list by repeatedly dividing the search interval in half. It assumes that the list is sorted and works by comparing the target value to the middle element of the list.

## Algorithm

1. **Initialize**: Set two pointers, `low` and `high`, to represent the start and end of the list respectively.
2. **Compute Middle**: Calculate the middle index `mid` as `(low + high) / 2`.
3. **Compare**:
   - If the target element is equal to the middle element, return the index `mid`.
   - If the target element is less than the middle element, adjust the `high` pointer to `mid - 1` to search in the left half.
   - If the target element is greater than the middle element, adjust the `low` pointer to `mid + 1` to search in the right half.
4. **Repeat**: Continue the process until `low` exceeds `high`.
5. **Element Not Found**: If the loop terminates without finding the target, return `-1` to indicate that the target is not present in the list.

## Characteristics

- **Sorted Data**: Binary search requires that the list is sorted in ascending or descending order.

### Advantages:
- **Efficiency**: Binary search is much faster than linear search for large, sorted lists.
- **Reduced Comparisons**: It minimizes the number of comparisons needed to find an item by dividing the search interval in half each time.
- **Predictable Performance**: The performance of binary search is predictable and scales logarithmically with the size of the list.

### Disadvantages:
- **Sorted Data Required**: Binary search requires the data to be sorted before it can be applied, which can add overhead if sorting is not already done.
- **Complexity**: Implementing binary search can be more complex compared to linear search.
