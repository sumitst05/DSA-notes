/*
 * The 0/1 Knapsack Problem is be described as follows:
 *
 * Given a set of items, each with a specific weight and profit, and a knapsack
 * with a maximum weight capacity, determine the maximum profit that can be
 * obtained by selecting a subset of the items to include in the knapsack
 * without exceeding its weight capacity. Each item can either be included or
 * excluded from the knapsack.
 *
 */

#include <bits/stdc++.h>
using namespace std;

// returns max profit that can be put in a knapsack of capacity 'maxWeight'
int knapsack(vector<int> profits, vector<int> weights, int maxWeight, int n) {
  vector<vector<int>> dp(n + 1, vector<int>(maxWeight + 1, -1));

  // filling the dp table
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= maxWeight; j++) {
      // base case:
      // if 0 items are selected or the maxWeight is 0, we store 0 as profit
      if (i == 0 || j == 0) {
        dp[i][j] = 0;
      }

      // else if current item's weight is more than maxWeight possible, we
      // cannot include it, so we copy the previous result onto current cell in
      // table
      else if (weights[i - 1] > j) {
        dp[i][j] = dp[i - 1][j];
      }

      // else we either include or exclude it based on the profit it earns us
      else {
        int profit_on_inclusion =
            profits[i - 1] + dp[i - 1][j - weights[i - 1]];
        int profit_on_exclusion = dp[i - 1][j];

        dp[i][j] = max(profit_on_inclusion, profit_on_exclusion);
      }
    }
  }

  return dp[n][maxWeight];
}

int main() {
  vector<int> profits = {25, 50, 75, 25, 30, 10};
  vector<int> weights = {30, 10, 20, 10, 30, 20};

  int n = profits.size();
  int maxWeight = 50;

  int maxProfit = knapsack(profits, weights, maxWeight, n);

  cout << "The max profit that can be obtained is: " << maxProfit << '\n';

  return 0;
}
