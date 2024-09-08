#include <bits/stdc++.h>
using namespace std;

class MinHeap {
public:
  // size of minHeap
  int length() { return this->data.size(); }

  // is minHeap empty?
  bool empty() { return this->data.empty(); }

  // while insertion, the element is inserted at the bottomost position in the
  // minHeap and from there it makes it's way up to the correct position by
  // heapifying upwards
  void insert(int val) {
    this->data.push_back(val);
    this->heapifyUp(this->length() - 1);
  }

  // removal in a minHeap basically fetches the topmost node and then the heap
  // preforms a heapify down in order to put the new minimum element at the
  // topmost position
  int remove() {
    if (this->length() == 0) {
      cerr << "Heap is empty!" << '\n';
      return -1;
    }

    // store the minimum element (top of heap)
    int out = this->data[0];

    // swap the top of heap with the last element in heap array
    swap(this->data[0], this->data.back());
    this->data.pop_back();

    // perform heapify down to get new minimum
    this->heapifyDown(0);

    // retutn stored minimum value
    return out;
  }

private:
  vector<int> data;

  // gets the index of parent of a node
  int parent(int idx) { return (idx - 1) / 2; }

  // gets the left child index of a node
  int leftChild(int idx) { return 2 * idx + 1; }

  // gets the right child index of a node
  int rightChild(int idx) { return 2 * idx + 2; }

  void heapifyUp(int idx) {
    // if heap is empty no need to heapify!
    if (this->length() == 0) {
      return;
    }

    // store parent's index, parent's value, current node's value
    int pIdx = this->parent(idx);

    int pVal = this->data[pIdx];
    int val = this->data[idx];

    // if current node's value is lesser than it's parent's value then it
    // deserves to be on it's parent's position (since it is a minHeap)
    if (val < pVal) {
      // swap positions
      swap(this->data[idx], this->data[pIdx]);
      // heapify up to maintain heap order
      this->heapifyUp(pIdx);
    }
  }

  void heapifyDown(int idx) {
    // store left child's index and value, right child's index and value,
    // and the current node's value
    int lIdx = this->leftChild(idx);
    int rIdx = this->rightChild(idx);

    int lVal = this->data[lIdx];
    int rVal = this->data[rIdx];
    int val = this->data[idx];

    // if current node's index is mode than the size of out heap (out of
    // bounds) then no need to heapify down
    if (idx >= this->length() - 1 || lIdx >= this->length() - 1) {
      return;
    }

    // get the minimum out of current, left and right nodes to find out who
    // will become the parent
    int minimum = min({this->data[lIdx], this->data[idx], this->data[rIdx]});

    // if left child is the minimum, make it the parent and heapify down,
    // else if right child is the minimum, makie it the parent and heapify
    // down
    if (lVal == minimum) {
      swap(this->data[idx], this->data[lIdx]);
      this->heapifyDown(lIdx);
    } else if (rVal == minimum) {
      swap(this->data[idx], this->data[rIdx]);
      this->heapifyDown(rIdx);
    }
  }
};

int main() {
  MinHeap minHeap;

  minHeap.insert(9);
  minHeap.insert(7);
  minHeap.insert(2);
  minHeap.insert(4);
  minHeap.insert(1);
  minHeap.insert(6);
  minHeap.insert(3);
  minHeap.insert(5);
  minHeap.insert(8);

  cout << minHeap.length() << '\n';

  while (!minHeap.empty()) {
    cout << minHeap.remove() << " ";
  }
  cout << '\n';

  cout << minHeap.length() << '\n';

  return 0;
}
