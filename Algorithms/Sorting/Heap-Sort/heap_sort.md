# Heap Sort

Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure. It works by first building a max heap from the input data, then repeatedly extracting the maximum element from the heap and rebuilding the heap until the list is sorted.

## Algorithm

1. **Build Max Heap**:
   - Convert the input list into a max heap. A max heap is a complete binary tree where each node's value is greater than or equal to the values of its children.

2. **Extract Maximum**:
   - The root of the max heap contains the maximum value. Swap it with the last element in the heap and reduce the heap's size by one.

3. **Heapify**:
   - Restore the max heap property by performing the "heapify" operation on the root of the heap. This involves moving the value down the heap to its correct position.

4. **Repeat**:
   - Repeat the extraction and heapify process until the heap is empty.

5. **Result**:
   - The list is sorted once the heap is empty and all the elements have been extracted and placed in their correct positions.

## Characteristics

- **Heap-Based**: Heap Sort uses a binary heap data structure to manage the elements and perform sorting.

### Advantages:
- **Efficiency**: Heap Sort has a time complexity of O(n*log n) in both the average and worst cases, making it efficient for large datasets.
- **In-Place**: Heap Sort sorts the list in place with O(1) additional memory, aside from the input list itself.

### Disadvantages:
- **Not Stable**: Heap Sort is not a stable sorting algorithm, meaning it does not maintain the relative order of equal elements.
- **Slower for Small Data**: It can be slower in practice compared to other O(n*log n) algorithms like Quick Sort for smaller datasets due to the overhead of maintaining the heap structure.
