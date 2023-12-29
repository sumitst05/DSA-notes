#include <bits/stdc++.h>
using namespace std;

class MinHeap {
public:
    int length() {
        return this->data.size();
    }

    bool empty() {
        return this->data.empty();
    }

    void insert(int val) {
        this->data.push_back(val);
        this->heapifyUp(this->length() - 1);
    }

    int remove() {
        if(this->length() == 0) {
            cerr << "Heap is empty!" << '\n';
            return -1;
        }

        int out = this->data[0];

        swap(this->data[0], this->data.back());
        this->data.pop_back();

        this->heapifyDown(0);

        return out;
    }

    void printHeap() {
        int i = 0;
        while(i < this->length()) {
            cout << this->data[i] << " ";
            i++;
        }
        cout << '\n';
    }

private:
    vector<int> data;

    int parent(int idx) {
        return (idx - 1) / 2;
    }

    int leftChild(int idx) {
        return 2 * idx + 1;
    }

    int rightChild(int idx) {
        return 2 * idx + 2;
    }

    void heapifyUp(int idx) {
        if(this->length() == 0) {
            return;
        }

        int pIdx = this->parent(idx);

        int pVal = this->data[pIdx];
        int val = this->data[idx];

        if(val < pVal) {
            swap(this->data[idx], this->data[pIdx]);
            this->heapifyUp(pIdx);
        }
    }

    void heapifyDown(int idx) {
        int lIdx = this->leftChild(idx);
        int rIdx = this->rightChild(idx);

        int lVal = this->data[lIdx];
        int rVal = this->data[rIdx];
        int val = this->data[idx];

        if(idx >= this->length() - 1 || lIdx >= this->length() - 1) {
            return;
        }

        int minimum = min({ this->data[lIdx], this->data[idx], this->data[rIdx] });

        if(lVal == minimum) {
            swap(this->data[idx], this->data[lIdx]);
            this->heapifyDown(lIdx);
        } else if(rVal == minimum) {
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

    while(!minHeap.empty()) {
        cout << minHeap.remove() << " ";
    }
    cout << '\n';

    cout << minHeap.length() << '\n';

    return 0;
}
