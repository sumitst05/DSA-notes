// Two-Dimensional array
#include <iostream>
using namespace std;

int main() {
  // initializing a two dimensional array
  int x[3][2] = {{0, 1}, {2, 3}, {4, 5}};
  // output each array element's value
  cout << "2-D Array" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      cout << "Element at [" << i << "][" << j << "]: ";
      cout << x[i][j] << endl;
    }
  }
  cout << '\n';

  // initializing a 3-dimensional array
  int y[2][3][2] = {{{0, 1}, {2, 3}, {4, 5}}, {{6, 7}, {8, 9}, {10, 11}}};
  cout << "3-D Array" << endl;
  // output each element's value
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      for (int k = 0; k < 2; ++k) {
        cout << "Element at [" << i << "][" << j << "][" << k
             << "] = " << y[i][j][k] << endl;
      }
    }
  }
  return 0;
}
