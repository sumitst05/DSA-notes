/*
 * Deletion in a binary tree
 * Replacing the deleted node with the deepest node in the tree
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

void printTree(Node *node) {
  if (node == NULL) {
    return;
  }
  printTree(node->left);
  cout << node->data << " ";
  printTree(node->right);
}

int levelOrder(Node *node) {
  if (!node)
    return 0;
  queue<Node *> q;
  q.push(node);
  int val;
  while (!q.empty()) {
    Node *temp = q.front();
    q.pop();
    val = temp->data;
    if (temp->left) {
      q.push(temp->left);
    }
    if (temp->right) {
      q.push(temp->right);
    }
  }
  return val;
}

void replace(Node *node, int val, int dat) {
  if (!node)
    return;
  if (node->data == val) {
    node->data = dat;
  }
  replace(node->left, val, dat);
  replace(node->right, val, dat);
  return;
}

void remove(Node *root, int val) {
  if (!root)
    return;
  if (root->left && root->left->data == val) {
    root->left = NULL;
  } else if (root->right && root->right->data == val) {
    root->right = NULL;
  }
  remove(root->left, val);
  remove(root->right, val);
}

Node *deleteNode(Node *root, int val) {
  int dat = levelOrder(root);
  remove(root, dat);
  replace(root, val, dat);
  return NULL;
}

int main() {
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);

  cout << "Before deletion: " << '\n';
  printTree(root);
  cout << '\n';

  deleteNode(root, 4);

  cout << "After deletion: " << '\n';
  printTree(root);
  return 0;
}
