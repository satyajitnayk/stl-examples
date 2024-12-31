#include <iostream>
#include <map>
using namespace std;

int main() {
  string s = "interview";
  map<char, int> freq;
  for (char c : s) {
    freq[c]++;
  }

  for (auto [ch, count] : freq) {
    cout << ch << ": " << count << " ";
  }
  cout << "\n";
}