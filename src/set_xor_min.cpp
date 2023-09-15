#include <iostream>
#include <set>

using namespace std;

int find_min_xor(set<int> s, int x) {
  int min_xor = INT32_MAX;
  for (int i : s) {
    if (x ^ i < min_xor)
      min_xor = x ^ i;
  }
  return min_xor;
}

int main() {
  set<int> s;
  int q, o, x;

  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> o >> x;
    switch (o) {
    case 0:
      s.insert(x);
      break;
    case 1:
      s.erase(x);
      break;
    case 2:
      cout << find_min_xor(s, x) << '\n';
      break;
    }
  }
}