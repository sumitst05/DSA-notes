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

// returns longest common subsequence
string lcs(string s1, string s2) {
  int m = s1.length(), n = s2.length();

  vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      // If characters match, increment the lenght of lcs found so far (include
      // the character in lcs)
      if (s1[i - 1] == s2[j - 1]) {
        dp[i][j] = 1 + dp[i - 1][j - 1];
      }

      // If characters don't match, choose the longer LCS from previous
      // results
      else {
        int len1 =
            dp[i - 1][j]; // lenght of LCS excluding current character of s1
        int len2 =
            dp[i][j - 1]; // lenght of LCS excluding current character of s2

        // select the maximum length
        dp[i][j] = max(len1, len2);
      }
    }
  }

  string lcs = "";

  // reconstructing the lcs from dp table
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
      if (dp[i - 1][j] > dp[i][j - 1]) {
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

  string lcs_s1_s2 = lcs(s1, s2);

  cout << "Longest Common Subsequence of '" << s1 << "' and '" << s2 << "' is '"
       << lcs_s1_s2 << "'\n";

  return 0;
}
