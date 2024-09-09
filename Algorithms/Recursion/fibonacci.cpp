#include <bits/stdc++.h>
using namespace std;

// Fibonacci sequence: 0 1 1 2 3 5 8 13 21 ...
// term(0) = 0
// term(1) = 1
// term(2) = 0 + 1 = 1
// term(n) = term(n - 1) + term(n - 2)

int fibonacci(int n) {
  // base case: if n = 0 or 1 return n (0 or 1)
  if (n <= 1) {
    return n;
  }

  // recursion
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int n = 10;

  int nth_fibonacci = fibonacci(n);

  cout << n << "th number in Fibonacci Sequence is " << nth_fibonacci
       << " (0-based indexing)" << '\n';

  return 0;
}
