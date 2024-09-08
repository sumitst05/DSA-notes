#include <bits/stdc++.h>
using namespace std;

int main() {
  string str = "da ta s t ruc ture s";

  str.erase(remove(str.begin(), str.end(), ' '),
            str.end()); // removes whitespaces from the strings

  cout << str << '\n';
  return 0;
}
