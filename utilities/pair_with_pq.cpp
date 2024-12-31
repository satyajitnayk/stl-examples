#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main() {
  // Max-heap priority queue (greater<int> to prioritize larger values)
  priority_queue<pair<int, string>> pq;

  // Insert pairs into the priority queue
  pq.push({10, "apple"});
  pq.push({20, "banana"});
  pq.push({5, "cherry"});

  // Print elements in order of priority
  while (!pq.empty()) {
    cout << pq.top().first << " - " << pq.top().second << endl;
    pq.pop();
  }

  return 0;
}
