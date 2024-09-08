#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "Time Machine";
  string x = s.substr(5); // selects and stores the substring after index 4
  string y =
      s.substr(5, 6); // selects and stores the substring from index 4 to 6
  cout << "String: " << s << '\n';
  cout << "\nSubstrings: \n";
  cout << x << '\n';
  cout << y << '\n';
  return 0;
}
