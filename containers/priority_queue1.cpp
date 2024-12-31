// A std::priority_queue in C++ is a container adapter that provides
// constant-time access to the largest or smallest element, depending on the
// comparator used. By default, it behaves as a max-heap (largest element at the
// top).

#include <iostream>
#include <queue>
using namespace std;

// Max Heap
int main() {
  priority_queue<int> pq;

  // Push elements
  pq.push(10);
  pq.push(20);
  pq.push(5);

  // Print and remove elements in priority order: Descending order
  cout << "Priority queue (max-heap): ";
  while (!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
  }
  cout << endl;

  return 0;
}