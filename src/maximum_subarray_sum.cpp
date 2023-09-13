#include <iostream>

using namespace std;

int main() {
  int n, array[101], sum, a, b;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> array[i];

  // O(n^2)
  int best = 0;
  for (a = 0; a < n; a++) {
    sum = 0;
    for (b = a; b < n; b++) {
      sum += array[b];
      best = max(sum, best);
    }
  }
  cout << best << '\n';

  // O(n)
  best = 0, sum = 0;
  for (int a = 0; a < n; a++) {
    sum = max(array[a], sum + array[a]);
    best = max(sum, best);
  }
  cout << best;
  return 0;
}