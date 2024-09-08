#include <iostream>
#include <queue>

using namespace std;

int main() {
  priority_queue<int> mypq;

  // inserting elements
  mypq.push(30);
  cout << "Priority Queue after push(30): ";
  while (!mypq.empty()) {
    cout << mypq.top() << " ";
    mypq.pop();
  }
  cout << endl;

  mypq.push(10);
  mypq.push(20);
  mypq.push(5);
  cout << "Priority Queue after push(10), push(20), push(5): ";
  while (!mypq.empty()) {
    cout << mypq.top() << " ";
    mypq.pop();
  }
  cout << endl;

  // getting the top element
  mypq.push(10);
  mypq.push(20);
  mypq.push(5);
  cout << "Top element of the Priority Queue: " << mypq.top() << endl;

  // getting the size of the queue
  cout << "Size of the Priority Queue: " << mypq.size() << endl;

  // checking if the queue is empty
  cout << "Is the Priority Queue empty? ";
  if (mypq.empty()) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  // swapping the contents of two queues
  priority_queue<int> mypq2;
  mypq2.push(15);
  mypq2.push(25);
  cout << "Priority Queue 1 before swap: ";
  while (!mypq.empty()) {
    cout << mypq.top() << " ";
    mypq.pop();
  }
  cout << endl;
  cout << "Priority Queue 2 before swap: ";
  while (!mypq2.empty()) {
    cout << mypq2.top() << " ";
    mypq2.pop();
  }
  cout << endl;

  mypq.push(10);
  mypq.push(20);
  mypq.push(5);
  swap(mypq, mypq2);
  cout << "Priority Queue 1 after swap: ";
  while (!mypq.empty()) {
    cout << mypq.top() << " ";
    mypq.pop();
  }
  cout << endl;
  cout << "Priority Queue 2 after swap: ";
  while (!mypq2.empty()) {
    cout << mypq2.top() << " ";
    mypq2.pop();
  }
  cout << endl;

  /*
   * Note: emplace is similar to push, but it constructs the new element in
   * place, using its arguments to initialize the element. This can be more
   * efficient than creating the element separately and then passing it to push.
   */

  // emplace elements into the queue
  mypq.emplace(30);
  mypq.emplace(10);
  mypq.emplace(20);
  cout << "Priority Queue after emplace(30), emplace(10), emplace(20): ";
  while (!mypq.empty()) {
    cout << mypq.top() << " ";
    mypq.pop();
  }
  cout << endl;

  // clearing the contents of the queue
  mypq.push(10);
  mypq.push(20);
  mypq.push(5);
  mypq.push(15);
  mypq.push(25);
  mypq.push(30);
  mypq.push(35);
  mypq.push(40);
  mypq.push(45);
  mypq.push(50);
  cout << "Priority Queue before clear(): ";
  while (!mypq.empty()) {
    cout << mypq.top() << " ";
    mypq.pop();
  }
  cout << endl;
  cout << "Priority Queue after clear(): ";
  while (!mypq.empty()) {
    cout << mypq.top() << " ";
    mypq.pop();
  }
  cout << endl;

  return 0;
}
