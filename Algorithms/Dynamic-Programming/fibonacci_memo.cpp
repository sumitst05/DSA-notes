#include <bits/stdc++.h>
using namespace std;

// Fibonacci sequence: 0 1 1 2 3 5 8 13 21 ...
// term(0) = 0
// term(1) = 1
// term(2) = 0 + 1 = 1
// term(n) = term(n - 1) + term(n - 2)

int fibonacci(int n, vector<int> &memo) {
  // base case: if n = 0 or 1 return n (0 or 1)
  if (n <= 1) {
    return n;
  }

	// if the result is already computed, return it
	if(memo[n] != -1) {
		return memo[n];
	}

  // recursion with memoization (storing all results in the memoization table)
  memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
	return memo[n];
}

int main() {
  int n = 10;
	
	// memoization table with size n + 1 with all values -1
	vector<int> memo(n + 1, -1);

  int nth_fibonacci = fibonacci(n, memo);

  cout << n << "th number in Fibonacci Sequence is " << nth_fibonacci
       << " (0-based indexing)" << '\n';

  return 0;
}
