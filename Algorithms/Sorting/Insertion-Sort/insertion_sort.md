# Insertion Sort

Insertion Sort is a simple comparison-based sorting algorithm that builds the final sorted list one item at a time. It works by repeatedly picking the next item from the unsorted portion and inserting it into its correct position within the already sorted portion. This method is efficient for small or nearly sorted datasets.

## Algorithm

1. **Initialize**: Start with the second element of the list. The first element is considered to be already sorted.
2. **Extract Key**:
   - Take the current element (key) from the unsorted portion of the list.
3. **Compare and Shift**:
   - Compare the key with the elements in the sorted portion from right to left.
   - Shift elements that are greater than the key to the right.
4. **Insert**:
   - Insert the key into its correct position in the sorted portion.
5. **Repeat**: Move to the next element in the unsorted portion and repeat the process until the entire list is sorted.

## Characteristics

- **Incremental Sorting**: Insertion Sort gradually builds up a sorted portion of the list by inserting elements one at a time.

### Advantages:
- **Simplicity**: The algorithm is simple to understand and implement.
- **Adaptive**: Performs well on small or nearly sorted datasets with a linear time complexity in the best case.
- **Stable**: Insertion Sort is a stable sorting algorithm, meaning it maintains the relative order of equal elements.

### Disadvantages:
- **Performance on Large Datasets**: It is not suitable for large datasets due to its quadratic time complexity in the average and worst cases.
