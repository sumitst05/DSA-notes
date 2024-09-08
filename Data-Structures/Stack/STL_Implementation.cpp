#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> st;

  // Push elements into stack
  st.push(10);
  st.push(20);
  st.push(30);

  // Print the size of the stack
  cout << "Stack size: " << st.size() << endl;

  // Check if stack is empty
  if (st.empty())
    cout << "Stack is empty" << endl;
  else
    cout << "Stack is not empty" << endl;

  // Print the top element of the stack
  cout << "Top element: " << st.top() << endl;

  // Pop elements from stack
  st.pop();
  st.pop();

  // Print the size of the stack after popping
  cout << "Stack size after popping: " << st.size() << endl;

  // Print all the elements of the stack
  cout << "Stack elements: ";
  while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;

  return 0;
}
