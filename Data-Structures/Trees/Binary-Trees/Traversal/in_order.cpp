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

// 1. Traverse the left subtree
// 2. Visit the root.
// 3. Traverse the right subtree
void inOrderTraversal(Node *root) {
  if (root == NULL) {
    return;
  }
  inOrderTraversal(root->left);
  cout << root->data << " ";
  inOrderTraversal(root->right);
}

int main() {
  Node *root = new Node(1);

  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->left->left->right = new Node(6);

  inOrderTraversal(root);

  return 0;
}
