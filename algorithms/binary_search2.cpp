#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Person {
  string name;
  int age;

  // Overload the < operator to compare based on age
  bool operator<(const Person &other) const { return age < other.age; }
};

// use this as functor
struct CompareAge {
  bool operator()(const Person &p1, const Person &p2) {
    return p1.age < p2.age;
  }
};

int main() {
  vector<Person> people = {
      {"Alice", 30},
      {"Bob", 25},
      {"Charlie", 35},
  };
  // Sorting in ascending order (default operator < is used)
  // using lambda function
  sort(people.begin(), people.end(), CompareAge());

  Person target = {"", 30}; // Searching for a person with age 30
  bool found = binary_search(people.begin(), people.end(), target);
  if (found) {
    cout << "\nFound person with age " << target.age << "\n";
  } else {
    cout << "\nPerson with age " << target.age << " not found.\n";
  }

  return 0;
}