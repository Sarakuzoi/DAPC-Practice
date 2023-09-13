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

  // Pairs are sorted primarily by their first element
  vector<pair<int, int>> v2;
  v2.push_back({ 1,5 });
  v2.push_back({ 2,3 });
  v2.push_back({ 1,2 });
  sort(v.begin(), v.end());
  // v2 now has (1, 2), (1, 5), (2, 3)

  // Same with tuples
  vector<tuple<int, int, int>> v3;
  v3.push_back({ 2,1,4 });
  v3.push_back({ 1,5,3 });
  v3.push_back({ 2,1,3 });
  sort(v.begin(), v.end());
  // v3 now has (1,5,3), (2,1,3), (2,1,4)
}