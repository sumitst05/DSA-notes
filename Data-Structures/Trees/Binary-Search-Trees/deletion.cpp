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

// Function to delete a node using it's data
Node *deleteNode(Node *root, int key) {
  if (root != NULL) {
    // If key is smaller than root->data, go left
    if (key < root->data) {
      root->left = deleteNode(root->left, key);
    }
    // If key is larger than root->data, go right
    else if (key > root->data) {
      root->right = deleteNode(root->right, key);
    }
    // If root itself is to be deleted (or we have reached the node to be
    // deleted)
    else {
      // For 0 child, root is leaf node, return NULL
      if (root->left == NULL && root->right == NULL) {
        return NULL;
      }
      // For 1 child, return the child present
      if (root->left == NULL || root->right == NULL) {
        return root->left ? root->left : root->right;
      }
      // For 2 children, find minimum of right side or maximum of left side
      // and put that data in root
      Node *temp = root->left;
      while (temp->right != NULL)
        temp = temp->right;
      root->data = temp->data;
      root->left = deleteNode(root->left, temp->data);
    }
  }
  return root;
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
  root = insert(root, 4);
  root = insert(root, 6);
  root = insert(root, 3);
  root = insert(root, 2);
  root = insert(root, 1);
  root = insert(root, 7);

  cout << "BST before deletion: " << '\n';
  printBST(root);
  cout << '\n';

  root = deleteNode(root, 4);
  root = deleteNode(root, 7);

  cout << "BST after deletion: " << '\n';
  printBST(root);
  return 0;
}
