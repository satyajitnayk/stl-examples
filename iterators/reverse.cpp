#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {1, 2, 3, 4, 5};
  // Reverse iteration using rbegin() and rend()
  cout << "Reverse order: ";
  for (auto it = nums.rbegin(); it != nums.rend(); ++it) {
    cout << *it << " ";
  }
  cout << endl;
  return 0;
}
