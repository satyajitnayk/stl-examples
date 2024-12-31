#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  unordered_map<int, int> mp;
  for (int i = 0; i < nums.size(); i++) {
    int complement = target - nums[i];
    if (mp.count(complement)) {
      return {mp[complement], i};
    }
    mp[nums[i]] = i;
  }
  return {};
}

int main() {
  vector<int> nums = {2, 8, 7, 11, 15};
  int target = 9;
  vector<int> res = twoSum(nums, target);
  cout << res[0] << " " << res[1] << "\n";
  return 0;
}