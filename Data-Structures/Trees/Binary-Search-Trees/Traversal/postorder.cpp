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

void postorder(Node* root) {
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

Node* insert(Node* node, int val) {
    if(node == NULL) {
        return new Node(val);
    }
    if(val < node->data) {
        node->left = insert(node->left, val);
    } else {
        node->right = insert(node->right, val);
    }
    return node;
}

int main() {
    Node* root = new Node(5);
    root = insert(root, 2);
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 11);
    root = insert(root, 9);

    postorder(root);
    return 0;
}
