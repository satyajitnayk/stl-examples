#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Person {
  string name;
  int age;
};

void print(vector<Person> &people) {
  for (auto person : people) {
    cout << person.name << " " << person.age << "\n";
  }
}

// use this as functor
struct CompareAge {
  bool operator()(const Person &p1, const Person &p2) {
    return p1.age > p2.age;
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
  sort(people.begin(), people.end(),
       [](const Person &p1, const Person &p2) { return p1.age < p2.age; });
  cout << "ascending order of age\n";
  print(people);

  // descending order or age
  // using Functor(struct as function)
  sort(people.begin(), people.end(), CompareAge());
  cout << "descending order of age\n";
  print(people);

  return 0;
}