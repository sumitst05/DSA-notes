/*
 * Fractional Knapsack Problem:
 * The fractional knapsack problem involves selecting items to maximize profit
 * while staying within a weight capacity of a knapsack. Each item has a weight
 * and a profit associated with it, and the goal is to achieve the maximum
 * profit by including fractions of items if necessary, such that the total
 * weight does not exceed the knapsack's capacity.
 *
 * To solve this problem using a greedy approach:
 * 1. Compute the profit-to-weight ratio for each item. This ratio represents
 * the profit per unit weight for each item.
 * 2. Sort all items based on their profit-to-weight ratios in descending order.
 * This ensures that we consider the most profitable items first.
 * 3. Initialize the knapsack's remaining capacity and set the total profit to
 * zero.
 * 4. Iterate through the sorted list of items:
 *    - If the current item can fit completely within the remaining capacity of
 * the knapsack, take it in full and update the remaining capacity and total
 * profit.
 *    - If the current item cannot fit completely, take as much of the item as
 * possible (i.e., a fraction of it) to fully utilize the remaining capacity of
 * the knapsack and add the corresponding profit.
 * 5. Return the total accumulated profit, which represents the maximum profit
 * achievable within the given weight capacity of the knapsack.
 *
 * This approach ensures that the solution is both efficient and optimal for the
 * fractional knapsack problem by leveraging a greedy strategy.
 */

#include <bits/stdc++.h>
using namespace std;

double fractionalKnapsack(vector<int> profits, vector<int> weights,
                          int maxWeight) {
  double maxProfit = 0.0;

  vector<pair<double, int>> items; // {profit/weight, index}
  // Calculate profit-to-weight ratios and store them with their indices
  for (int i = 0; i < profits.size(); i++) {
    if (weights[i] > 0) {
      items.push_back({double(profits[i]) / weights[i], i});
    }
  }

  // Sorting items based on profit-to-weight ratio in descending order
  sort(items.begin(), items.end(), greater<>());

  for (auto item : items) {
    int index = item.second;
    int profit = profits[index];
    int weight = weights[index];

    if (maxWeight >= weight) {
      // If the item fits completely within the remaining capacity
      maxWeight -= weight;
      maxProfit += profit;
    } else {
      // If only a fraction of the item can fit
      maxProfit += profit * (double(maxWeight) / weight);
      maxWeight = 0;
      break; // capacity exhausts
    }
  }

  return maxProfit;
}

int main() {
  vector<int> profits = {25, 50, 75, 25, 30, 10};
  vector<int> weights = {30, 10, 20, 10, 30, 20};

  int maxWeight = 50;

  double maxProfit = fractionalKnapsack(profits, weights, maxWeight);

  cout << fixed << setprecision(2) << maxProfit << '\n';

  return 0;
}
