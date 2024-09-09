# Time and Space Complexity for Recursive Algorithms

## Factorial Calculation

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(n)            | O(n)             |

- **Time Complexity:** O(n) because the function makes `n` recursive calls, each processing a single step.
- **Space Complexity:** O(n) due to the call stack storing `n` function frames.

## Fibonacci Sequence

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(2^n)          | O(n)             |

- **Time Complexity:** O(2^n) due to the exponential growth of recursive calls, as each call generates two further calls (for `F(n-1)` and `F(n-2)`).
- **Space Complexity:** O(n) due to the depth of the recursion tree, which can be up to `n`.

## N-Queens Problem

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(N!)           | O(N^2)           |

- **Time Complexity:** O(N!) because the algorithm explores all possible arrangements of `N` queens.
- **Space Complexity:** O(N^2) for storing the board configuration and the call stack, as each board configuration is represented as an `N x N` matrix.

## Tower of Hanoi

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(2^n)          | O(n)             |

- **Time Complexity:** O(2^n) due to the exponential number of moves required to solve the problem.
- **Space Complexity:** O(n) for the recursion call stack, where `n` is the number of disks.

**Note:** The time and space complexities given here are for the basic recursive implementations of these algorithms. Actual complexities can vary based on specific implementation details and optimizations used.
