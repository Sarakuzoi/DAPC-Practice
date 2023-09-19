#include <iostream>
#include <utility>

using namespace std;

bool my_cmp(pair<int, int> x, pair<int, int> y) {
  return x.second < y.second;
}

int main() {
  int n, x, div_index, mul_index;
  pair<int, int> b[50001];

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    b[i] = make_pair(i, x);
  }

  sort(b, b + n, my_cmp);

  for (int i = 0; i < n; i++)
    for (int j = n - 1; j >= 0; j--)
      if (b[j].second % b[i].second == 0 && i != j) {
        mul_index = b[j].first;
        div_index = b[i].first;
        goto output;
      }

output:
  cout << div_index + 1 << ' ' << mul_index + 1;
  return 0;
}