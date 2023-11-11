#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
		data = val;
		left = NULL;
		right = NULL;
    }
};

Node* insertNode(Node* node, int val) {
    // If the current node is NULL, create a new node with the given value and return it
    if(node == NULL) {
        return new Node(val);
    }

    // If the value to be inserted is less than the current node's value,
    // recursively insert it into the left subtree
    if(val < node->data) {
        node->left = insertNode(node->left, val);
    } 
    // If the value is greater or equal, recursively insert it into the right subtree
    else {
        node->right = insertNode(node->right, val);
    }

    // Return the modified node (the current node)
    return node;
}

void printBST(Node* node) {
    if (node == NULL) return;

    printBST(node->left);

    cout << node->data << " ";

    printBST(node->right);
}

int main() {
    Node* root = new Node(1);
    root = insertNode(root, 8);
    root = insertNode(root, 3);
    root = insertNode(root, 9);
    root = insertNode(root, 6);
    root = insertNode(root, 7);
    root = insertNode(root, 10);
    root = insertNode(root, 14);
    root = insertNode(root, 4);

    //    1
    //     \
    //      8
    //    /  \
    //   3   9
    //    \   \
    //    6    10
    //   / \
    //  4   7
    //       \
    //       14

    printBST(root);

    return 0;
}
