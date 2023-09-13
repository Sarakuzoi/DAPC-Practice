#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v = { 4,2,5,3,5,8,3 };

  // Increasing
  sort(v.begin(), v.end());
  for (int i; i < v.size(); i++) cout << v[i] << ' ';

  cout << '\n';

  // Decreasing
  sort(v.rbegin(), v.rend());
  for (int i; i < v.size(); i++) cout << v[i] << ' ';

  // Increasing
  int n = 7; // array size
  int a[] = { 4,2,5,3,5,8,3 };
  sort(a, a + n);

  string s = "monkey";
  sort(s.begin(), s.end()); // prints "ekmnoy"
}