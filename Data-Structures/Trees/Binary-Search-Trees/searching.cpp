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

// Function to search a node with given data 'key'
Node *searchNode(Node *root, int key) {
  // Return root on base case when root is null or root itself has the key
  if (root == NULL || root->data == key) {
    return root;
  }

  // if key is smaller than root's data then search the left subtree
  if (key < root->data) {
    return searchNode(root->left, key);
  }
  // else search the right subtree
  else {
    return searchNode(root->right, key);
  }
}

Node *insert(Node *node, int val) {
  if (node == NULL)
    return new Node(val);
  if (val < node->data) {
    node->left = insert(node->left, val);
  } else {
    node->right = insert(node->right, val);
  }
  return node;
}

void printBST(Node *root) {
  if (root == NULL)
    return;
  printBST(root->left);
  cout << root->data << " ";
  printBST(root->right);
}

int main() {
  Node *root = new Node(5);
  root = insert(root, 2);
  root = insert(root, 8);
  root = insert(root, 3);
  root = insert(root, 7);
  root = insert(root, 11);
  root = insert(root, 9);
  printBST(root);
  cout << '\n';

  int key = 7;
  // if returned value is null, key was not found!
  if (!searchNode(root, key)) {
    cout << "Key: " << key << ", not found!" << '\n';
  } else {
    cout << "Key: " << key << ", found in the BST" << '\n';
  }
  return 0;
}
