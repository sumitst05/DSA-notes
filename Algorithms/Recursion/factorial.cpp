#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
  // base case: factorial(0) = 1
  if (n == 0) {
    return 1;
  }

  // recursion: factorial(n) = n * factorial(n - 1)
  return n * factorial(n - 1);
}

int main() {
  int n = 10;

  int factorial_n = factorial(n);

  cout << "Factorial of " << n << " is " << factorial_n << '\n';

  return 0;
}
