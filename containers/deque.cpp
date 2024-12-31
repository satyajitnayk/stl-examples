#include <deque>
#include <iostream>
using namespace std;

int main() {
  //  double ended queue
  deque<int> dq;

  // Insert elements at the back
  dq.push_back(10);
  dq.push_back(20);

  // Insert elements at the front
  dq.push_front(5);
  dq.push_front(0);

  // Print deque : 0,5,10,20
  cout << "Deque: ";
  for (int num : dq) {
    cout << num << " ";
  }
  cout << endl;

  // Remove elements from front and back
  dq.pop_front();
  dq.pop_back();

  // Print deque after removal: 5, 10
  cout << "After pop operations: ";
  for (int num : dq) {
    cout << num << " ";
  }
  cout << endl;

  // Access elements: 5 , 10
  cout << "Front: " << dq.front() << ", Back: " << dq.back() << endl;

  return 0;
}