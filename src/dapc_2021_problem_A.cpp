#include <iostream>
#include <utility>

using namespace std;

int main() {
  int n, x, a[50001], div, mul;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  // Naive solution:
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (a[j] % a[i] == 0 && i != j) {
        div = i;
        mul = j;
        goto output_first;
      }
output_first:
  cout << div + 1 << ' ' << mul + 1 << '\n';

  // Optimized solution:
  sort(a, a + n);
  for (int i = 0; i < n; i++)
    for (int j = n - 1; j >= 0; j--)
      if (a[j] % a[i] == 0 && j != i) {
        div = a[i];
        mul = a[j];
        goto output_second;
      }
output_second:
  cout << div << " divides " << mul;
  return 0;
}