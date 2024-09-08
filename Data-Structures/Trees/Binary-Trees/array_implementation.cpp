/*
 * Array Implementation of a Binary Tree with 10 nodes
 * Array follows 0 based indexing
 * Thus if parent is at 'i'th node,
 * Left child will be at '2 * i + 1' th node
 * and
 * Right child will be at '2 * i + 2' th node
 */

#include <bits/stdc++.h>
using namespace std;

char binTree[10] = {'\0'};

void insertRoot(char key) {
  if (binTree[0] != '\0')
    cout << "The tree already has a root" << '\n';
  else
    binTree[0] = key;
}

void insertLeft(char key, int parent) {
  if (binTree[parent] == '\0') {
    cout << "Cannot set child node at " << 2 * parent + 1
         << ". No parent found!" << '\n';
  } else {
    binTree[2 * parent + 1] = key;
  }
}

void insertRight(char key, int parent) {
  if (binTree[parent] == '\0') {
    cout << "Cannot set child node at " << 2 * parent + 2
         << ". No parent found!" << '\n';
  } else {
    binTree[2 * parent + 2] = key;
  }
}

void printTree() {
  for (int i = 0; i < 10; i++) {
    if (binTree[i] != '\0') {
      cout << binTree[i];
    } else {
      cout << "-";
    }
  }
}

int main() {
  insertRoot('A');
  insertLeft('B', 0);
  insertRight('C', 0);
  insertLeft('D', 1);
  insertRight('E', 1);
  insertRight('F', 2);
  printTree();
  return 0;
}
