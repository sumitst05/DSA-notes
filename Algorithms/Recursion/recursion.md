# Recursion

Recursion is a programming technique where a function calls itself in order to solve a problem. It is often used to break down complex problems into simpler, more manageable subproblems. A recursive function typically includes two main components: the base case and the recursive case.

## Components of Recursion

1. **Base Case:** The condition under which the recursion ends. It is essential to have a base case to prevent infinite recursion and eventual stack overflow.

2. **Recursive Case:** The part of the function where it calls itself with a modified argument. The recursive case should work towards reaching the base case.

## How Recursion Works

1. **Function Call:** The recursive function calls itself with a new set of arguments.

2. **Stack Frame:** Each function call creates a new stack frame to hold the function's local variables and return address.

3. **Base Case Check:** Each recursive call checks whether it has reached the base case.

4. **Recursive Case Execution:** If the base case has not been reached, the function continues to call itself.

5. **Returning Results:** Once the base case is reached, the function starts returning results back up the call stack, combining them as necessary.

## Example: Factorial Function

The factorial function is a classic example of recursion. It is defined as follows:

- **Factorial of 0 (Base Case):** `0! = 1`
- **Factorial of n (Recursive Case):** `n! = n * (n-1)!`

## Calculating Factorial of 4 using recursion

To compute 4! using recursion:

```
factorial(4)
According to the definition:
4! = 4 * factorial(3)
```

```
Resolve the call for factorial(3):
factorial(3)
According to the definition:
3! = 3 * factorial(2)
```

```
Resolve the call for factorial(2):
factorial(2)
According to the definition:
2! = 2 * factorial(1)
```

```
Resolve the call for factorial(1):
factorial(1)
According to the definition:
1! = 1 * factorial(0)
```

```
Base case:
factorial(0)
According to the definition:
0! = 1
```

```
Now, resolve each call step-by-step:

factorial(1) = 1 * factorial(0) = 1 * 1 = 1
factorial(2) = 2 * factorial(1) = 2 * 1 = 2
factorial(3) = 3 * factorial(2) = 3 * 2 = 6
factorial(4) = 4 * factorial(3) = 4 * 6 = 24
```

Thus, the result of 4! is 24.
