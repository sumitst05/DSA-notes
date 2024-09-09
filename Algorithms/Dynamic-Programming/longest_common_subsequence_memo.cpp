/*
 * The Longest Common Subsequence (LCS) problem is be described as follows:
 *
 * Given two strings, s1 and s2, find the longest subsequence that is present in
 * both strings.
 * A subsequence is a sequence derived from another sequence where
 * some elements may be omitted but the order of remaining elements is
 * preserved.
 *
 */

#include <bits/stdc++.h>
using namespace std;

// returns length of longest common subsequence and updates the memo with the
// longest length on each step
int lcs(string s1, string s2, int m, int n, vector<vector<int>> &memo) {
  // base case:
  // if either string gets empty
  if (m == 0 || n == 0) {
    return 0;
  }

  // if already computed, return the result for that state
  if (memo[m][n] != -1) {
    return memo[m][n];
  }

  // if characters at current index in both strings are equal, include it in lcs
  // and move both indices
  if (s1[m - 1] == s2[n - 1]) {
    memo[m][n] = 1 + lcs(s1, s2, m - 1, n - 1, memo) + s1[m - 1];
    return memo[m][n];
  }

  // else find the maximum LCS length by excluding one character either from s1
  // or s2
  else {
    int len1 = lcs(s1, s2, m - 1, n, memo);
    int len2 = lcs(s1, s2, m, n - 1, memo);

    memo[m][n] = max(len1, len2);
  }

  return memo[m][n];
}

// function to backtrack the memo to find the longest common subsequence
string findLCS(string s1, string s2) {
  int m = s1.length(), n = s2.length();

  // initialize 2d memo table with -1
  vector<vector<int>> memo(m + 1, vector<int>(n + 1, -1));

  // populate the memo table with length of lcs in each state
  lcs(s1, s2, m, n, memo);

  string lcs = "";

  // reconstructing the lcs using memo table
  int i = m, j = n;
  while (i > 0 && j > 0) {
    if (s1[i - 1] == s2[j - 1]) {
      // characters match, so include the character in LCS
      lcs = s1[i - 1] + lcs;
      i--;
      j--;
    } else {
      // move to the cell with greater length value to trace back the longest
      // common subsequence
      if (memo[i - 1][j] > memo[i][j - 1]) {
        i--;
      } else {
        j--;
      }
    }
  }

  return lcs;
}

int main() {
  string s1 = "hello!", s2 = "hello world!";
  int m = s1.length(), n = s2.length();

  string lcs_s1_s2 = findLCS(s1, s2);

  cout << "Longest Common Subsequence of '" << s1 << "' and '" << s2 << "' is '"
       << lcs_s1_s2 << "'\n";

  return 0;
}
