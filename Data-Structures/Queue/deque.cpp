#include <bits/stdc++.h>
using namespace std;

int main() {
  deque<int> mydeque;

  // inserting elements at the front using insertFront()
  mydeque.push_front(20);
  cout << "Deque after insertFront(20): ";
  for (auto x : mydeque) {
    cout << x << " ";
  }
  cout << endl;

  mydeque.push_front(10);
  cout << "Deque after insertFront(10): ";
  for (auto x : mydeque) {
    cout << x << " ";
  }
  cout << endl;

  // inserting elements at the back using insertLast()
  mydeque.push_back(30);
  cout << "Deque after insertLast(30): ";
  for (auto x : mydeque) {
    cout << x << " ";
  }
  cout << endl;

  mydeque.push_back(40);
  cout << "Deque after insertLast(40): ";
  for (auto x : mydeque) {
    cout << x << " ";
  }
  cout << endl;

  // deleting elements from the front using deleteFront()
  mydeque.pop_front();
  cout << "Deque after deleteFront(): ";
  for (auto x : mydeque) {
    cout << x << " ";
  }
  cout << endl;

  // deleting elements from the back using deleteLast()
  mydeque.pop_back();
  cout << "Deque after deleteLast(): ";
  for (auto x : mydeque) {
    cout << x << " ";
  }
  cout << endl;

  // getting the front element using getFront()
  cout << "Front element of the deque: " << mydeque.front() << endl;

  // getting the rear element using getRear()
  cout << "Rear element of the deque: " << mydeque.back() << endl;

  // checking if the deque is empty using isEmpty()
  cout << "Is the deque empty? ";
  if (mydeque.empty()) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  // checking if the deque is full using isFull()
  cout << "Is the deque full? It is not applicable for deque." << endl;

  // getting the size of the deque using size()
  cout << "Size of the deque: " << mydeque.size() << endl;

  // removing all elements from the deque using clear()
  mydeque.clear();
  cout << "Deque after clear(): ";
  for (auto x : mydeque) {
    cout << x << " ";
  }
  cout << endl;

  /* Note: emplace_front and emplace_back construct the new element(s) directly
   * in the deque's memory space, while push_front and push_back add already
   * constructed elements to the deque by copying or moving them. This can
   * result in more efficient code as the objects can be constructed directly in
   * the memory space of the container, without the need for temporary objects
   * or additional copies/moves.
   */

  // inserting elements using emplace_front()
  mydeque.emplace_front(50);
  cout << "Deque after emplace_front(50): ";
  for (auto x : mydeque) {
    cout << x << " ";
  }
  cout << endl;

  // inserting elements using emplace_back()
  mydeque.emplace_back(60);
  cout << "Deque after emplace_back(60): ";
  for (auto x : mydeque) {
    cout << x << " ";
  }
  cout << endl;

  // changing the size of the deque using resize()
  mydeque.resize(3);
  cout << "Deque after resize(3): ";
  for (auto x : mydeque) {
    cout << x << " ";
  }
  cout << endl;

  // assigning new values to the elements using assign()
  mydeque.assign({1, 2, 3});
  cout << "Deque after assign({1, 2, 3}): ";
  for (auto x : mydeque) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}
