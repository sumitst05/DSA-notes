#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;
  int height;

  Node(int val) {
    data = val;
    left = NULL;
    right = NULL;
    height = 1;
  }
};

// Function to get the height of a node
int getHeight(Node *node) { return (node != NULL) ? node->height : 0; }

// Function to update the height of a node
void updateHeight(Node *node) {
  if (node != NULL) {
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
  }
}

// Function to perform left rotation
Node *leftRotate(Node *x) {
  Node *y = x->right; // y is the right child of x
  Node *Tl =
      y->left; // Tl is the left child of y (subtree that needs to be moved)

  // Perform rotation
  y->left = x;   // Make x the left child of y
  x->right = Tl; // Set Tl as the right child of x

  // Update heights
  updateHeight(x); // Update the height of x
  updateHeight(y); // Update the height of y

  return y; // Return the new parent, which is y after the rotation
}

// Function to perform right rotation
Node *rightRotate(Node *y) {
  Node *x = y->left; // x is the left child of y
  Node *Tr =
      x->right; // Tr is the right child of x (subtree that needs to be moved)

  // Perform rotation
  x->right = y; // Make y the right child of x
  y->left = Tr; // Set Tr as the left child of y

  // Update heights
  updateHeight(y); // Update the height of y
  updateHeight(x); // Update the height of x

  return x; // Return the new parent, which is x after the rotation
}

// Function to get the balance factor of a node
int getBalanceFactor(Node *node) {
  return (node != NULL) ? getHeight(node->left) - getHeight(node->right) : 0;
}

// Function to insert a node into the AVL tree
Node *insertNode(Node *node, int value) {
  // Perform standard BST insertion
  if (node == NULL) {
    return new Node(value);
  }

  if (value < node->data) {
    node->left = insertNode(node->left, value);
  } else if (value > node->data) {
    node->right = insertNode(node->right, value);
  } else {
    // Duplicate values are not allowed
    return node;
  }

  // Update height of the current node
  updateHeight(node);

  // Get the balance factor to check if the node is unbalanced
  int balance = getBalanceFactor(node);

  // Left Left Case
  // when the tree is already left-heavy and we want to insert in the left left
  // of the parent
  if (balance > 1 && value < node->left->data) {
    return rightRotate(node);
  }

  // Right Right Case
  // when the tree is already right-heavy and we want to insert in the right
  // right of the parent
  if (balance < -1 && value > node->right->data) {
    return leftRotate(node);
  }

  // Left Right Case
  // when the tree is already left-heavy and we want to insert in the left right
  // of the parent
  if (balance > 1 && value > node->left->data) {
    node->left = leftRotate(node->left);
    return rightRotate(node);
  }

  // Right Left Case
  // when the tree is already right-heavy and we want to insert in the right
  // left of the parent
  if (balance < -1 && value < node->right->data) {
    node->right = rightRotate(node->right);
    return leftRotate(node);
  }

  // The tree is already balanced
  return node;
}

void printAVLTree(Node *root) {
  if (root == NULL)
    return;
  printAVLTree(root->left);
  cout << root->data << " ";
  printAVLTree(root->right);
}

int main() {
  Node *root = new Node(40);
  // root = insertNode(root, 20);
  // root = insertNode(root, 30);
  // root = insertNode(root, 15);
  // root = insertNode(root, 5);
  root = insertNode(root, 10);
  root = insertNode(root, 50);
  root = insertNode(root, 30);
  root = insertNode(root, 20);
  root = insertNode(root, 60);

  printAVLTree(root);

  cout << '\n' << root->data << '\n';

  return 0;
}
