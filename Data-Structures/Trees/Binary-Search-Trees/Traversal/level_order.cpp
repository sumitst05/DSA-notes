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

void levelOrder(Node* root) {
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);  // enque the root

    while(!q.empty()) {
        // Print the front of the queue and remove it 
        Node* node = q.front();
        cout << node->data << " ";
        q.pop();

        // Enqueue left child
        if(node->left) {
            q.push(node->left);
        }
        // Enqueue right child
        if(node->right) {
            q.push(node->right);
        }
    }
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

    levelOrder(root);
    return 0;
}

