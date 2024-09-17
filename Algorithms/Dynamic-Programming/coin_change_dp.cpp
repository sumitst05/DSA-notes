/*
 * Coin Change:
 * Given 'n' coins, each of different amount, how many ways can the amount
 * 'target' be achieved by selecting the given coins.
 * Consider we have an unlimited amount of coins for each amount
 * */

#include <bits/stdc++.h>
using namespace std;

int countWays(vector<int> coins, int target) {
  int n = coins.size();
  vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));

  // Base case: There is exactly one way to make target 0, which is to use no
  // coins at all
  dp[0][0] = 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= target; j++) {
      // Exclude the current coin (add previous number of ways to current state)
      dp[i][j] += dp[i - 1][target];

      // Check if we can include the current coin (if it is possible to take out
      // coins[i - 1] amount from current amount 'j')
      if (j - coins[i - 1] >= 0) {
        // Include the current coin
        dp[i][j] += dp[i][target - coins[i - 1]];
      }
    }
  }

  // total number of ways we can achieve target
  return dp[n][target];
}

int main() {
  vector<int> coins = {5, 10, 20};
  int n = coins.size();
  int target = 100;

  int ways = countWays(coins, target);

  cout << ways << '\n';

  return 0;
}
