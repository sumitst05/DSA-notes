/*
 * Insertion in a binary tree using level order traversal
 */

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

Node *insertNode(Node *root, int val) {
  if (root == NULL) {
    root = new Node(val);
  } else {
    queue<Node *> q;
    q.push(root);
    while (!q.empty()) {
      Node *node = q.front();
      q.pop();
      if (node->left) {
        q.push(node->left);
      } else {
        node->left = new Node(val);
        return root;
      }
      if (node->right) {
        q.push(node->right);
      } else {
        node->right = new Node(val);
        return root;
      }
    }
  }
  return root;
}

void printTree(Node *node) {
  if (node == NULL)
    return;
  printTree(node->left);
  cout << node->data << " ";
  printTree(node->right);
}

int main() {
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);

  cout << "Before insertion" << '\n';
  printTree(root);
  cout << '\n';

  insertNode(root, 5);

  cout << "After insertion" << '\n';
  printTree(root);
  return 0;
}
