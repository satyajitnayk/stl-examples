#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &nums) {
  for (int num : nums) {
    cout << num << " ";
  }
  cout << "\n";
}
int main() {
  vector<int> nums = {5, 2, 9, 1};
  // ascending order
  sort(nums.begin(), nums.end());
  print(nums);

  // descending order
  sort(nums.begin(), nums.end(), greater<int>());
  print(nums);

  return 0;
}