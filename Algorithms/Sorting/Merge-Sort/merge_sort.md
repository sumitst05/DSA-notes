# Merge Sort

Merge Sort is an efficient, stable, comparison-based sorting algorithm that uses a divide-and-conquer approach. It divides the list into smaller sublists, sorts each sublist, and then merges the sorted sublists to produce the final sorted list.

## Algorithm

1. **Divide**:
   - Recursively divide the list into two halves until each sublist contains a single element or is empty.
   
2. **Conquer**:
   - Sort each of these smaller sublists. Since a single-element list is trivially sorted, this step is implicit in the division process.

3. **Merge**:
   - Merge the sorted sublists to produce sorted sublists. This involves comparing the elements of the sublists and combining them into a single sorted list.

4. **Repeat**:
   - Continue merging the sorted sublists until the entire list is merged into a single sorted list.

## Characteristics

- **Divide-and-Conquer**: Merge Sort follows the divide-and-conquer paradigm, breaking the problem into smaller, more manageable parts and combining their solutions.

### Advantages:
- **Efficiency**: Merge Sort has a guaranteed time complexity of O(n*log n), making it more efficient than algorithms like Bubble Sort or Insertion Sort for large datasets.
- **Stability**: Merge Sort is a stable sorting algorithm, meaning that it maintains the relative order of equal elements.
- **Predictable Performance**: Its time complexity is consistent regardless of the input distribution.

### Disadvantages:
- **Space Complexity**: Merge Sort requires additional space proportional to the size of the list, O(n), due to the need for temporary storage during merging.
