/*The process of combining more than one string together is known as
 * Concatenation.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1 = "The quick brown fox ";
  string s2 = "jumps over the lazy dog.";

  // Using '+'  operator:
  string x = s1 + s2;
  cout << x << '\n';

  // Using appned() function
  cout << "\nBefore concatenating: \n";
  cout << "String1 = " << s1 << '\n' << "String2 : " << s2 << '\n';

  s1.append(s2); // appends s2 at the end of s1

  cout << "\nAfter concatenating: \n";
  cout << "String1 = " << s1 << '\n' << "String2 : " << s2 << '\n';
  return 0;
}
