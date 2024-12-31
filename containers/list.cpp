#include <iostream>
#include <list>
using namespace std;

void print(list<int> &nums) {
  for (int num : nums) {
    cout << num << " ";
  }
  cout << "\n";
}

int main() {
  list<int> nums;
  nums.push_back(10);
  nums.push_front(30);
  nums.push_back(40);
  nums.push_front(50);
  print(nums);

  nums.pop_front();
  print(nums);

  nums.pop_back();
  print(nums);

  auto it = nums.begin();
  advance(it, 1);
  nums.erase(it);
  print(nums);

  // Erase all occurrences of value 3
  nums.remove(30);
  print(nums);

  return 0;
}