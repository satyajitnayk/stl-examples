#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {1, 3, 5, 7};
  int target = 5;
  // binary search always to be performed on a sorted array
  if (binary_search(nums.begin(), nums.end(), target)) {
    cout << "Found" << endl;
  } else {
    cout << "Not Found" << endl;
  }
  return 0;
}