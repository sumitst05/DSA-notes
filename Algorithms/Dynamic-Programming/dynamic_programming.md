# Dynamic Programming (DP)

Dynamic Programming (DP) is a method for solving complex problems by breaking them down into simpler subproblems. It is used when the problem can be divided into overlapping subproblems which can be solved independently and then combined to give the solution to the original problem.

## Key Concepts

### Optimal Substructure
A problem exhibits optimal substructure if an optimal solution to the problem contains optimal solutions to its subproblems. In other words, if you can solve the problem by solving smaller instances of the same problem, it is suitable for DP.

### Overlapping Subproblems
A problem has overlapping subproblems if the same subproblems are solved multiple times. By solving each subproblem only once and storing the result, DP avoids the redundant work that occurs in naive recursive solutions.

### Memoization
Memoization is a technique used in DP to store the results of expensive function calls and reuse them when the same inputs occur again. It is typically implemented using a cache or table.

### Tabulation
Tabulation is another technique used in DP that involves solving the problem by filling up a table in a bottom-up manner. It starts from the simplest subproblems and builds up to the solution of the overall problem.

## Common Dynamic Programming Algorithms

### Fibonacci Sequence

#### Description
Computes the nth Fibonacci number, where each number is the sum of the two preceding ones.

#### DP Approach

- **Memoization:** Store results of subproblems in a top-down approach.
- **Tabulation:** Build a table from the bottom-up to compute the Fibonacci sequence.

#### Complexity

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(n)            | O(n)             |

### Longest Common Subsequence (LCS)

#### Description
Finds the length of the longest subsequence present in two sequences.

#### DP Approach

- **Tabulation:** Use a 2D table to store results of subproblems. Build the solution using previously computed values.

#### Complexity

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(m * n)        | O(m * n)         |

where `m` and `n` are the lengths of the two sequences.

### Knapsack Problem

#### Description
Finds the maximum value that can be obtained from a set of items with given weights and values, without exceeding the weight capacity of the knapsack.

#### DP Approach

- **Tabulation:** Use a 2D table where each cell represents the maximum value that can be obtained with a given weight limit and subset of items.

#### Complexity

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(n * W)        | O(n * W)         |

where `n` is the number of items and `W` is the maximum weight capacity of the knapsack.

### Matrix Chain Multiplication

#### Description
Finds the most efficient way to multiply a given sequence of matrices.

#### DP Approach

- **Tabulation:** Use a 2D table to store the minimum cost of multiplying matrices in subproblems.

#### Complexity

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(n^3)          | O(n^2)           |

where `n` is the number of matrices.

### Coin Change Problem

#### Description
Finds the minimum number of coins needed to make a given amount with a given set of denominations.

#### DP Approach

- **Tabulation:** Use a 1D table where each index represents the minimum number of coins required to make that amount.

#### Complexity

| Time Complexity | Space Complexity |
|-----------------|------------------|
| O(n * m)        | O(m)             |

where `n` is the amount and `m` is the number of coin denominations.

**Note:** The time and space complexities given here are for the basic implementations of these algorithms. The actual complexities can vary based on specific implementation details and optimizations used.

## Applications

Dynamic Programming is widely used in various fields such as:

- **Operations Research:** Solving optimization problems.
- **Bioinformatics:** Sequence alignment and genetic analysis.
- **Finance:** Portfolio optimization and risk management.
- **Computer Graphics:** Pathfinding and image processing.
- **Artificial Intelligence:** Game theory and decision making.

DP is a powerful technique that can significantly reduce the complexity of problems that involve overlapping subproblems and optimal substructure.

