#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {1, 2, 3, 4, 5};
  // print reverse nums using stack
  stack<int> st;
  for (int num : nums) {
    st.push(num);
  }

  while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;
  return 0;
}