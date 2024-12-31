#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  // Min-heap using priority_queue
  priority_queue<int, vector<int>, greater<int>> minHeap;

  // Push elements
  minHeap.push(10);
  minHeap.push(20);
  minHeap.push(5);

  // Print and remove elements in priority order: acsending order
  cout << "Priority queue (min-heap): ";
  while (!minHeap.empty()) {
    cout << minHeap.top() << " ";
    minHeap.pop();
  }
  cout << endl;

  return 0;
}