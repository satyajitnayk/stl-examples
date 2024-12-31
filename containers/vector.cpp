#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums) {
  int maxSum = nums[0], currentSum = 0;
  for (int num : nums) {
    currentSum = max(num, num + currentSum);
    maxSum = max(maxSum, currentSum);
  }
  return maxSum;
}

int main() {
  vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  cout << "Max Subarray Sum: " << maxSubArray(nums) << endl;
  return 0;
}