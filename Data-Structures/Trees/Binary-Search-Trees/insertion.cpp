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

Node* insert(Node* node, int val) {
    if(node == NULL) return new Node(val);
    if(val < node->data) {
        node->left = insert(node->left, val);
    } else {
        node->right = insert(node->right, val);
    }
    return node;
}

void printBST(Node* root) {
    if(root == NULL) return;
    printBST(root->left);
    cout << root->data << " ";
    printBST(root->right);
}

int main() {
    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(8);
    root->left->left = new Node(2);
    root->left->left->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(10);
    cout << "BST before insertion: " << '\n';
    printBST(root);
    cout << '\n';

    root = insert(root, 1);
    root = insert(root, 9);

    cout << "BST after insertion: " << '\n';
    printBST(root);

    return 0;
}
