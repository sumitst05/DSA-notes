#include<bits/stdc++.h>
using namespace std;

class Node {
public: 
    int data;
    Node* left;
    Node* right;
    int height;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
        height = 1;
    }
};

int getHeight(Node* node) {
    return node != NULL ? node->height : 0;
}

void updateHeight(Node* node) {
    if(node != NULL) {
        node->height = max(getHeight(node->left), getHeight(node->right)) + 1;
    }
}

Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* Tl = y->left;

    y->left = x;
    x->right = Tl;

    updateHeight(x);
    updateHeight(y);

    return y;
}

Node* rightRotate(Node *y) {
    Node* x = y->left;
    Node* Tr = x->right;

    x->right = y;
    y->left = Tr;

    updateHeight(y);
    updateHeight(x);

    return x;
}

int getBalanceFactor(Node* node) {
    return node != NULL ? getHeight(node->left) - getHeight(node->right) : 0;
}

// Function to search a node with given data 'key'
Node* searchNode(Node* root, int key) {
    // Return root on base case when root is null or root itself has the key
    if(root == NULL || root->data == key) {
        return root;
    }

    // if key is smaller than root's data then search the left subtree 
    if(key < root->data) {
        return searchNode(root->left, key);
    }
    // else search the right subtree
    else {
        return searchNode(root->right, key);
    }
}

Node* insertNode(Node* node, int value) {
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

    if (balance > 1 && value < node->left->data) {
        return rightRotate(node);
    }

    if (balance < -1 && value > node->right->data) {
        return leftRotate(node);
    }

    if (balance > 1 && value > node->left->data) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    if (balance < -1 && value < node->right->data) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

void printAVTree(Node* root) {
    if(root == NULL) return;
    printAVTree(root->left);
    cout << root->data << " ";
    printAVTree(root->right);
}

int main() {
    Node* root = new Node(40);
    root = insertNode(root, 10);
    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 60);

    printAVTree(root);
    cout << '\n';

    int key = 30;
    // if returned value is null, key was not found!
    if(!searchNode(root, key)) {
        cout << "Key: " << key << ", not found!" << '\n';
    } else {
        cout << "Key: " << key << ", found in the AVL Tree" << '\n';
    }

    return 0;

    return 0;
}
