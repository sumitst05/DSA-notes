#include <bits/stdc++.h>
using namespace std;

class MaxHeap {
public:
    MaxHeap() {}

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
        if(this->data.size() == 0) {
            return;
        }

        int pIdx = this->parent(idx);

        int pVal = this->data[pIdx];
        int val = this->data[idx];

        if(val > pVal) {
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

        int maximum = max({ lVal, val, rVal });

        if(lVal == maximum) {
            swap(this->data[idx], this->data[lIdx]);
            this->heapifyDown(lIdx);
        } else if(rVal == maximum) {
            swap(this->data[idx], this->data[rIdx]);
            this->heapifyDown(rIdx);
        }
    }
};

int main() {
    MaxHeap maxHeap;

    maxHeap.insert(9);
    maxHeap.insert(7);
    maxHeap.insert(2);
    maxHeap.insert(4);
    maxHeap.insert(1);
    maxHeap.insert(6);
    maxHeap.insert(3);
    maxHeap.insert(5);
    maxHeap.insert(8);

    cout << maxHeap.length() << '\n';

    while(!maxHeap.empty()) {
        cout << maxHeap.remove() << " ";
    }
    cout << '\n';

    cout << maxHeap.length() << '\n';

    return 0;
}
