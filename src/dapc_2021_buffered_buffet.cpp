#include <iostream>

using namespace std;

int main() {
  int n, x, a[50001], sum = 0;
  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a, a + n);

  sum += 2 * a[n - 1];
  for (int i = n - 2; i > 0; i--)
    sum += a[i];

  cout << sum;
}