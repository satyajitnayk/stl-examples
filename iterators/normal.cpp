#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {1, 2, 3, 4, 5};
  cout << "Reverse order: ";
  for (auto it = nums.begin(); it != nums.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;
  return 0;
}
