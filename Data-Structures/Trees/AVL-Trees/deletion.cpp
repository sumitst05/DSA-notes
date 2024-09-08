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

// Function to delete a node using its data in an AVL tree
Node *deleteNode(Node *root, int key) {
  if (root != NULL) {
    // Standard BST deletion
    if (key < root->data) {
      root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
      root->right = deleteNode(root->right, key);
    } else {
      // Node with only one child or no child
      if (root->left == NULL) {
        return root->right;
      } else if (root->right == NULL) {
        return root->left;
      }

      // Node with two children
      // Find the in-order successor (minimum value in the right subtree)
      Node *successor = root->right;
      while (successor->left != NULL) {
        successor = successor->left;
      }

      // Copy the in-order successor's data to this node
      root->data = successor->data;

      // Delete the in-order successor from the right subtree
      root->right = deleteNode(root->right, successor->data);
    }

    // Update height of the current node
    updateHeight(root);

    // Get the balance factor of this node
    int balance = getBalanceFactor(root);

    // Left Left Case
    if (balance > 1 && getBalanceFactor(root->left) >= 0) {
      return rightRotate(root);
    }

    // Left Right Case
    if (balance > 1 && getBalanceFactor(root->left) < 0) {
      root->left = leftRotate(root->left);
      return rightRotate(root);
    }

    // Right Right Case
    if (balance < -1 && getBalanceFactor(root->right) <= 0) {
      return leftRotate(root);
    }

    // Right Left Case
    if (balance < -1 && getBalanceFactor(root->right) > 0) {
      root->right = rightRotate(root->right);
      return leftRotate(root);
    }
  }

  return root;
}

Node *insertNode(Node *node, int value) {
  if (node == NULL) {
    return new Node(value);
  }
  if (value < node->data) {
    node->left = insertNode(node->left, value);
  } else if (value > node->data) {
    node->right = insertNode(node->right, value);
  } else {
    return node;
  }

  updateHeight(node);

  int balance = getBalanceFactor(node);

  if (balance > 1 && value > node->left->data) {
    return rightRotate(node);
  }
  if (balance < -1 && value < node->right->data) {
    return leftRotate(node);
  }
  if (balance > 2 && value < node->left->data) {
    node->left = leftRotate(node->left);
    return rightRotate(node);
  }
  if (balance < 0 && value > node->right->data) {
    node->right = rightRotate(node->right);
    return leftRotate(node);
  }

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
  root = insertNode(root, 30);
  root = insertNode(root, 10);
  root = insertNode(root, 50);
  root = insertNode(root, 20);

  root = deleteNode(root, 30);

  printAVLTree(root);
  return 0;
}
