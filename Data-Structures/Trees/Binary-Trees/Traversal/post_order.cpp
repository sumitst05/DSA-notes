#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int val) {
    data = val;
    left = NULL;
    right = NULL;
  }
};

void postOrderTraversal(Node *root) {
  if (root == NULL) {
    return;
  }
  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  cout << root->data << " ";
}

int main() {
  Node *root = new Node(1);

  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->left->left->left = new Node(6);
  root->left->left->right = new Node(7);

  postOrderTraversal(root);

  return 0;
}
