/*
 * Coin Change:
 * Given 'n' coins, each of different amount, how many ways can the amount
 * 'target' be achieved by selecting the given coins.
 * Consider we have an unlimited amount of coins for each amount
 * */

#include <bits/stdc++.h>
using namespace std;

int countWays(vector<int> coins, int target, int n, vector<vector<int>> &memo) {
  // base cases:
  // if n is 0, i.e. there are no coins, then there is no way to reach target
  // if target < 0, we can never achieve it by using coins of positive values
  // if target is 0 or becomes 0, then there was one way

  if (n == 0 || target < 0) {
    return 0;
  }

  if (target == 0) {
    return 1;
  }

  // if already calculated, return the number of ways
  if (memo[n][target] != -1) {
    return memo[n][target];
  }

  // for each coin, we can either include it or exclude it in our sum of amounts
  // to reach target

  // select current coin and recursively check for all other coins (including
  // currnent one again in available coins for next selection... as we can
  // select one coin any number of times)
  int include = countWays(coins, target - coins[n - 1], n, memo);
  // exclude current coin and move on to the next coins recursively
  int exclude = countWays(coins, target, n - 1, memo);

  // total number of ways we can achieve target
  return include + exclude;
}

int main() {
  vector<int> coins = {5, 10, 20};
  int n = coins.size();
  int target = 100;

  vector<vector<int>> memo(n + 1, vector<int>(target + 1, -1));

  int ways = countWays(coins, target, n, memo);

  cout << ways << '\n';

  return 0;
}
