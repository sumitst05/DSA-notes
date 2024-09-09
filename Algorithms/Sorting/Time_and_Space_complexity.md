# Time and Space Complexity for Sorting Algorithms

## Bubble Sort

| Case | Time Complexity     | Space Complexity |
| ---       | ---                 | ---              |
| Best       | O(n)                | O(1)             |
| Average     | O(n^2)              | O(1)             |
| Worst       | O(n^2)              | O(1)             |

- **Best Time Complexity:** O(n) if the list is already sorted and the algorithm includes an optimization to stop early.
- **Average/Worst Time Complexity:** O(n^2) due to the nested loops required for comparisons and swaps.
- **Space Complexity:** O(1) because it only requires a constant amount of extra space for temporary storage.

## Insertion Sort

| Case | Time Complexity     | Space Complexity |
| ---       | ---                 | ---              |
| Best       | O(n)                | O(1)             |
| Average     | O(n^2)              | O(1)             |
| Worst       | O(n^2)              | O(1)             |

- **Best Time Complexity:** O(n) if the list is already sorted.
- **Average/Worst Time Complexity:** O(n^2) due to the nested loop structure for comparisons and shifting elements.
- **Space Complexity:** O(1) as it uses a constant amount of extra space.

## Selection Sort

| Case | Time Complexity     | Space Complexity |
| ---       | ---                 | ---              |
| Best       | O(n^2)              | O(1)             |
| Average     | O(n^2)              | O(1)             |
| Worst       | O(n^2)              | O(1)             |

- **Time Complexity:** O(n^2) due to the two nested loops needed to find the minimum element and place it in the correct position.
- **Space Complexity:** O(1) because it only requires a constant amount of extra space.

## Merge Sort

| Case | Time Complexity     | Space Complexity |
| ---       | ---                 | ---              |
| Best       | O(n log n)          | O(n)             |
| Average     | O(n log n)          | O(n)             |
| Worst       | O(n log n)          | O(n)             |

- **Time Complexity:** O(n log n) due to the recursive splitting and merging processes.
- **Space Complexity:** O(n) because it requires additional space proportional to the size of the input for merging.

## Quick Sort

| Case | Time Complexity     | Space Complexity |
| ---       | ---                 | ---              |
| Best       | O(n log n)          | O(log n)         |
| Average     | O(n log n)          | O(log n)         |
| Worst       | O(n^2)              | O(log n)         |

- **Best/Average Time Complexity:** O(n log n) for optimal pivot selection and balanced partitions.
- **Worst Time Complexity:** O(n^2) if the pivot selection is poor, leading to unbalanced partitions.
- **Space Complexity:** O(log n) for the call stack in the recursive implementation.

## Heap Sort

| Case | Time Complexity     | Space Complexity |
| ---       | ---                 | ---              |
| Best       | O(n log n)          | O(1)             |
| Average     | O(n log n)          | O(1)             |
| Worst       | O(n log n)          | O(1)             |

- **Time Complexity:** O(n log n) for both average and worst cases due to the heap construction and sorting phases.
- **Space Complexity:** O(1) as it sorts in place and does not require additional space beyond the input array.

**Note:** The time and space complexities given here are for the basic implementations of these sorting algorithms. Actual complexities can vary based on factors such as specific implementation details and the nature of the input data.
