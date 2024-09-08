# Selection Sort

Selection Sort is an in-place comparison-based sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the end of the sorted portion. This process continues until the entire list is sorted.

## Algorithm

1. **Initialize**: Start with the first element of the list as the beginning of the sorted portion.
2. **Find Minimum**:
   - Scan the unsorted portion of the list to find the smallest element.
3. **Swap**:
   - Swap the found minimum element with the first element of the unsorted portion.
4. **Move the Boundary**:
   - Move the boundary of the sorted portion one step to the right.
5. **Repeat**: Continue the process for the remaining unsorted portion until the entire list is sorted.

## Characteristics

- **Iterative Process**: Selection Sort uses a nested loop to repeatedly select and move the minimum element.

### Advantages:
- **Simplicity**: The algorithm is simple to understand and implement.
- **In-Place**: Selection Sort sorts the list in place, requiring only a constant amount of additional memory, \(O(1)\).
- **No Extra Memory**: It does not require extra memory beyond the original list, unlike some other sorting algorithms.

### Disadvantages:
- **Inefficiency**: Selection Sort is inefficient for large datasets due to its quadratic time complexity
- **Unstable**: It is not a stable sorting algorithm, meaning it does not necessarily maintain the relative order of equal elements.
