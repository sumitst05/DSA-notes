# Quick Sort

Quick Sort is an efficient, comparison-based sorting algorithm that uses a divide-and-conquer approach. It works by selecting a 'pivot' element from the list, partitioning the other elements into two sublists based on whether they are less than or greater than the pivot, and then recursively sorting the sublists.

## Algorithm

1. **Choose Pivot**:
   - Select a pivot element from the list. Various strategies exist for choosing the pivot, including picking the first element, the last element, a random element, or the median.

2. **Partition**:
   - Reorder the list so that all elements less than the pivot come before it, and all elements greater than the pivot come after it. The pivot is then placed in its correct position.

3. **Recursively Apply**:
   - Recursively apply the above steps to the sublists of elements less than and greater than the pivot.

4. **Base Case**:
   - The recursion terminates when the sublists are empty or contain a single element, which are already sorted.

## Characteristics

- **Divide-and-Conquer**: Quick Sort uses the divide-and-conquer approach by partitioning the list and sorting each part independently.

### Advantages:
- **Efficiency**: Quick Sort is generally faster in practice compared to other O(n*log n) algorithms like Merge Sort and Heap Sort due to its efficient in-place partitioning.
- **In-Place**: Quick Sort sorts the list in place, requiring only a small amount of additional memory, O(log n), for the stack used in recursion.

### Disadvantages:
- **Worst Case**: In the worst case, Quick Sort has a time complexity of O(n<sup>2</sup>), which occurs when the pivot selection is poor (e.g., always choosing the smallest or largest element).
- **Unstable**: Quick Sort is not a stable sorting algorithm, meaning it does not necessarily maintain the relative order of equal elements.
