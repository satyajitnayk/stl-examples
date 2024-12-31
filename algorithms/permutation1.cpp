#include <algorithm>
#include <iostream>
using namespace std;

void permuteNumbers() {
  vector<int> nums = {1, 2, 3}; // Initial permutation
  do {
    for (int num : nums) {
      cout << num << " "; // Print current permutation
    }
    cout << "\n";
  } while (
      next_permutation(nums.begin(), nums.end())); // Generate next permutation
}

void permuteString() {
  string s = "abc";
  do {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));
}

int main() {
  permuteNumbers();
  permuteString();
  return 0;
}
