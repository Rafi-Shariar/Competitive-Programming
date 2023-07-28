#include <iostream>
#include<bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> greedy_algorithm(int n) {
  /*
  Divides n into 3 people using the greedy algorithm.

  Args:
    n: The number to divide

  Returns:
    The 3 people who have the minimum distance between them
  */

  vector<int> people(3, 0);
  vector<int> numbers = {1, 2, 3};

  for (int i = 0; i < n; i++) {
    int smallest_number = *min_element(numbers.begin(), numbers.end());
    people[i % 3] += smallest_number;
    numbers.erase(numbers.begin() + find(numbers.begin(), numbers.end(), smallest_number));
  }

  return people;
}

int main() {
  int n = 10;
  vector<int> people = greedy_algorithm(n);

  for (int i = 0; i < 3; i++) {
    cout << people[i] << " ";
  }
  cout << endl;

  return 0;
}
