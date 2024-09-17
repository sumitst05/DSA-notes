# Time and Space Complexity for Dynamic Programming Algorithms

## Fibonacci Sequence

### Memoization Approach

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(n)            | O(n)             |

- **Time Complexity:** O(n) because each Fibonacci number is computed once and stored for future reference.
- **Space Complexity:** O(n) for the call stack and the memoization table that stores the results of the subproblems.

### Bottom-Up Approach

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(n)            | O(n)             |

- **Time Complexity:** O(n) because the algorithm iterates through all values from 1 to `n`.
- **Space Complexity:** O(n) for the table storing Fibonacci values.

## 0/1 Knapsack Problem

### Memoization Approach

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(n * W)           | O(n * W)            |

- **Time Complexity:** O(n * W) where `n` is the number of items and `W` is the capacity of the knapsack. Each state (i.e., combination of item and capacity) is computed once.
- **Space Complexity:** O(n * W) for storing the memoization table and call stack.

### Bottom-Up Approach

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(n * W)           | O(n * W)            |

- **Time Complexity:** O(n * W) due to the nested iteration over items and capacities.
- **Space Complexity:** O(n * W) for the DP table used to store intermediate results.

## Longest Common Substring

### Memoization Approach

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(m * n)           | O(m * n)            |

- **Time Complexity:** O(m*n) where `m` and `n` are the lengths of the two strings. Each substring comparison is computed once.
- **Space Complexity:** O(m*n) for the memoization table and call stack.

### Bottom-Up Approach

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(m * n)           | O(m * n)            |

- **Time Complexity:** O(m * n) because it fills an `m x n` table.
- **Space Complexity:** O(m * n) for the DP table storing results for all substrings.

## Coin Change Problem

### Memoization Approach

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(n * m)        | O(n * m)         |

- **Time Complexity:** O(n * m) where `n` is the amount of money and `m` is the number of coin types. Each state is computed once.
- **Space Complexity:** O(n * m) for the memoization table and call stack.

### Bottom-Up Approach

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(n * m)        | O(n)             |

- **Time Complexity:** O(n * m) due to the nested iteration over amounts and coin types.
- **Space Complexity:** O(n) for the DP table used to store the minimum number of coins required for each amount.

**Note:** The time and space complexities given here are for the basic dynamic programming implementations of these algorithms. Actual complexities can vary based on specific implementation details and optimizations used.
