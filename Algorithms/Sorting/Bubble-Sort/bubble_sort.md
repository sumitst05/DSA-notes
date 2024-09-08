# Bubble Sort

Bubble Sort is a simple comparison-based sorting algorithm that repeatedly steps through a list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted. It is called "bubble sort" because smaller elements "bubble" to the top (left side) of the list with each pass.

### Algorithm

1. **Initialize**: Start with the first element of the list.
2. **Compare and Swap**:
   - Compare the current element with the next element.
   - If the current element is greater than the next element, swap them.
3. **Pass Through List**: Continue comparing and swapping elements until the end of the list is reached.
4. **Repeat**: After each pass, the next largest element will be in its correct position. Repeat the process for the remaining unsorted portion of the list.
5. **Termination**: The algorithm terminates when a pass is completed without any swaps, indicating that the list is fully sorted.

### Characteristics

- **Iterative Process**: Bubble Sort uses nested loops to repeatedly compare and swap elements until the list is sorted.

### Advantages:
- **Simplicity**: The algorithm is easy to understand and implement.
- **Stable**: Bubble Sort is a stable sorting algorithm, meaning that it maintains the relative order of equal elements.

### Disadvantages:
- **Inefficiency**: Bubble Sort is inefficient for large datasets as it requires a large number of comparisons to sort it.
- **Excessive Comparisons**: The algorithm performs many unnecessary comparisons even after the list is partially sorted, leading to redundant operations.
