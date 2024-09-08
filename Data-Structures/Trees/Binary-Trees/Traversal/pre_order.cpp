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

// 1. Visit the root
// 2. Traverse the left subtree
// 3. Traverse the right subtree

void preOrderTraversal(Node *root) {
  if (root == NULL) {
    return;
  }
  cout << root->data << " ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}

int main() {
  Node *root = new Node(1);

  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->right = new Node(6);

  preOrderTraversal(root);

  return 0;
}
