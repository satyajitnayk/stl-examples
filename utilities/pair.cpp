#include <iostream>
#include <utility> // for std::pair
using namespace std;

template <typename T1, typename T2> void printPair(pair<T1, T2> p) {
  cout << "first: " << p.first << ", second: " << p.second << endl;
}

int main() {
  // Creating a pair to represent a coordinate
  pair<int, int> point = {5, 10};
  printPair(point);

  // using make pair we do not have to define types in pair
  auto p = make_pair(1, "Hello");
  printPair(p);

  return 0;
}
