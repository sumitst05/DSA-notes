/*The find() method is used to search the string for a specific character or a
 * substring*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "String";
  char c = 'i';
  cout << "String : " << s << '\n';
  cout << "Position of \'i\' is ";
  cout << s.find('i') << '\n';

  cout << '\n';

  string str = "String is an array of characters!";
  string substr = "array";
  cout << "String : " << str << '\n';
  cout << "Position of substring \'array\' is ";
  cout << str.find(substr) << '\n';
  return 0;
}
