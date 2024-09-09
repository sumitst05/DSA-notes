#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
  vector<int> dp(n + 1, 0);

  // base cases:
  dp[0] = 0; // fib(0) = 0
  dp[1] = 1; // fib(1) = 1

  for (int i = 2; i <= n; i++) {
    // each fibonacci number is sum of previous two numbers in the sequence
    dp[i] = dp[i - 1] + dp[i - 2];
  }

  return dp[n];
}

int main() {
  int n = 10;

  int nth_fibonacci = fibonacci(n);

  cout << n << "th number in Fibonacci Sequence is " << nth_fibonacci
       << " (0-based indexing)" << '\n';

  return 0;
}
