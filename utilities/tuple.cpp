#include <iostream>
#include <tuple>
using namespace std;

// A tuple in C++ is used to store multiple related values (more than two),
// and you can access the individual elements by their index using
// std::get<index>().

int main() {
  // Creating a tuple to store an integer, string, and double
  // when we use {} to assign we need to define tyes on LHS
  tuple<int, string, double> t = {1, "Hello", 3.14};
  // Accessing the values using get<>
  cout << "Integer: " << get<0>(t) << endl;
  cout << "String: " << get<1>(t) << endl;
  cout << "Double: " << get<2>(t) << endl;

  // using make_tuple we do not have to define types
  auto x = make_tuple(1, "Hello", 3.14);

  cout << "Integer: " << get<0>(x) << endl;
  cout << "String: " << get<1>(x) << endl;
  cout << "Double: " << get<2>(x) << endl;

  return 0;
}
