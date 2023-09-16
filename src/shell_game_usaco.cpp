#include <iostream>

using namespace std;

int main() {
  int a[3] = { 1, 2, 3 }, s1, s2, x, n, cnt[3] = { 0 };

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s1 >> s2 >> x;
    swap(a[s1 - 1], a[s2 - 1]);
    cnt[a[x - 1]]++;
  }

  int maxi = 0;
  for (int i = 0; i < 3; i++)
    if (cnt[i] > maxi) maxi = cnt[i];

  cout << maxi;
  return 0;
}