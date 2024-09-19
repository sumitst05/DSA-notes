#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  char c;        // character
  int frequency; // character's frequency
  Node *left;    // left child
  Node *right;   // right child

  Node(char c, int frequency) {
    left = NULL;
    right = NULL;

    this->c = c;
    this->frequency = frequency;
  }
};

// dfs the min heap to generate codes from the huffman tree (min heap)
void getCodes(Node *root, string code, map<char, string> &codes) {
  if (!root) {
    return;
  }

  // if the node is a leaf node, add it's code to the map
  if (root->c != '*') {
    codes[root->c] = code;
  }

  // traverse left and right subtrees updating the code
  getCodes(root->left, code + "0", codes);
  getCodes(root->right, code + "1", codes);
}

string huffmanEncoding(string message) {
  map<char, int> mp;
  for (auto c : message) {
    mp[c]++;
  }

  // Comparator to create a min-heap based on frequency
  auto compareNodes = [](Node *l, Node *r) {
    return l->frequency > r->frequency;
  };

  // min heap to store nodes in ascending order of their frequencies
  priority_queue<Node *, vector<Node *>, decltype(compareNodes)> pq(
      compareNodes);

  // Create a node for each character and push it into the priority queue
  for (auto itr : mp) {
    pq.push(new Node(itr.first, itr.second));
  }

  // Building the Huffman Tree
  Node *root;
  while (pq.size() != 1) {
    // Select and remove the two nodes with the smallest frequencies
    Node *left = pq.top();
    pq.pop();

    Node *right = pq.top();
    pq.pop();

    // combine their frequencies to create an internal node
    root = new Node('*', left->frequency + right->frequency);
    root->left = left;
    root->right = right;

    // add the internal node into the min heap
    pq.push(root);
  }

  // map to store codes of each character in message
  map<char, string> codes;
  getCodes(root, "", codes);

  // encoding the message
  string result = "";
  for (auto c : message) {
    result += codes[c];
  }

  // printing huffman encoding of each character
  for (auto i : codes) {
    cout << i.first << ": " << i.second << '\n';
  }

  // encoded message
  return result;
}

int main() {
  string message = "Hello World!";

  string encoding = huffmanEncoding(message);

  cout << encoding << '\n';

  return 0;
}
