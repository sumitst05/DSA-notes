/*
 * Tower of Hanoi is a classic problem in recursion and backtracking.
 * The problem consists of three rods and a number of disks of different sizes
 * which can slide onto any rod. The puzzle starts with the disks neatly stacked
 * in ascending order of size on one rod (the source rod), with the smallest disk
 * on top, and the objective is to move the entire stack to another rod (the target rod),
 * following these rules:
 *
 * 1. Only one disk can be moved at a time.
 * 2. Each move consists of taking the upper disk from one of the stacks and placing it
 *    on top of another stack or on an empty rod.
 * 3. No larger disk may be placed on top of a smaller disk.
 */

#include <bits/stdc++.h>
using namespace std;


void towerOfHanoi(int n, char from, char to, char aux) {
  // Base case: If there's only one disk, move it directly from the 'from' rod to the 'to' rod.
  if (n == 1) {
    cout << "Move disk 1 from " << from << " to " << to << '\n';
    return;
  }

  // Move n-1 disks from the 'from' rod to the 'aux' rod using the 'to' rod as auxiliary.
  towerOfHanoi(n - 1, from, aux, to);

  // Move the nth disk from the 'from' rod to the 'to' rod.
  cout << "Move disk " << n << " from " << from << " to " << to << '\n';

  // Move the n-1 disks from the 'aux' rod to the 'to' rod using the 'from' rod as auxiliary.
  towerOfHanoi(n - 1, aux, to, from);
}

int main() {
  int n = 3; // Number of disks
  towerOfHanoi(n, 'A', 'C', 'B');
  return 0;
}
