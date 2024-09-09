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
int knapsack(vector<int> profits, vector<int> weights,
             vector<vector<int>> &memo, int maxWeight, int n) {
  // Base case: if maxWeight is reached or all items are selected
  if (maxWeight == 0 || n == 0) {
    return 0;
  }

  // if the result is already calculated, return it
  if (memo[n][maxWeight] != -1) {
    return memo[n][maxWeight];
  }

  // if weight of current item (nth item... checking (n - 1)th because of 0
  // based indexing) is more than maxWeight, then it cannot be selected. So we
  // move on to next element by decreasing n to n - 1 (so next time it will
  // check weights[newN - 1] > maxWeight, where newN=n-1)
  if (weights[n - 1] > maxWeight) {
    // record this result in memo and return it
    memo[n][maxWeight] = knapsack(profits, weights, memo, maxWeight, n - 1);
    return memo[n][maxWeight];
  }

  // we either include or exclude an item based on the profit that it will incur

  // selecting an item by subtracting it's weight from maxWeight, adding it's
  // profit to the total profit that will occur and moving to next item
  int profit_on_inclusion =
      profits[n - 1] +
      knapsack(profits, weights, memo, maxWeight - weights[n - 1], n - 1);

  // not selecting the item and moving to next item
  int profit_on_exclusion = knapsack(profits, weights, memo, maxWeight, n - 1);

  // return the max between both
  memo[n][maxWeight] = max(profit_on_inclusion, profit_on_exclusion);
  return memo[n][maxWeight];
}

int main() {
  vector<int> profits = {25, 50, 75, 25, 30, 10};
  vector<int> weights = {30, 10, 20, 10, 30, 20};

  int n = profits.size();
  int maxWeight = 50;

  // Initialize a 2D memoization table
  // The size of memo is (n + 1) x (maxWeight + 1)
  // The first dimension (n + 1) accounts for the number of items (including 0
  // items) The second dimension (maxWeight + 1) accounts for all possible
  // weights from 0 to maxWeight The value -1 indicates that the result for this
  // state has not been computed yet
  vector<vector<int>> memo(n + 1, vector<int>(maxWeight + 1, -1));

  int maxProfit = knapsack(profits, weights, memo, maxWeight, n);

  cout << "The max profit that can be obtained is: " << maxProfit << '\n';

  return 0;
}
