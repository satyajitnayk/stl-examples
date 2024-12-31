#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Person {
  string name;
  int age;
};

// Custom comparator (max-heap by age)
struct compareAge {
  bool operator()(const Person &p1, const Person &p2) {
    // Greater age has higher priority
    // (if p1's age is < p2's age, p1 will be put after p2)
    return p1.age < p2.age;
  }
};

int main() {
  // Min-heap using priority_queue and Custom Data Types with Comparators
  priority_queue<Person, vector<Person>, compareAge> pq;

  /// Push elements
  pq.push({"Alice", 30});
  pq.push({"Bob", 25});
  pq.push({"Charlie", 35});

  // Print and remove elements
  cout << "Priority queue (max-heap by age): " << endl;
  while (!pq.empty()) {
    Person p = pq.top();
    cout << p.name << " (" << p.age << ")" << endl;
    pq.pop();
  }

  return 0;
}