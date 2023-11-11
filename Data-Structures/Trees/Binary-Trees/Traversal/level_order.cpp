#include <bits/stdc++.h>
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

void levelOrderTraversal(Node* root) {
    if(root == NULL) {
        return;
    }
    // We are using a queue to store the address of the nodes
    queue<Node*> q;  
    // Pushing the root node alongwith NULL in the queue to mark end of the level
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        Node* node = q.front();
        q.pop();
        // if the popped element is not NULL, we print it
        // if the popped element is NULL, we push NULL in the queue
        // if the popped element is not NULL, we push its left and right child in the queue
        // we repeat this process until the queue is empty
        if(node != NULL) {
            cout << node->data << " ";
            if(node->left) {
                q.push(node->left);
            }
            if(node->right) {
                q.push(node->right);
            }
        } else if(!q.empty()) {
            q.push(NULL);
        }
    }
}

int main() {
    Node* root = new Node(1);
    
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);
    root->left->left->right = new Node(7);

    levelOrderTraversal(root);

    return 0;
}
