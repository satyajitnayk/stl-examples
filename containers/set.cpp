#include <iostream>
#include <set>
#include <vector>
using namespace std;

int firstMissingPositive(vector<int> &nums) {
  set<int> s(nums.begin(), nums.end());
  int smallest = 1;
  while (s.count(smallest)) {
    smallest++;
  }
  return smallest;
}

int main() {
  vector<int> nums = {3, 9, 2, -1, 1};
  set<int> s(nums.begin(), nums.end());
  // cout << s.count(1) << "\n";
  cout << "Smallest Missing Positive: " << firstMissingPositive(nums) << endl;
  return 0;
}