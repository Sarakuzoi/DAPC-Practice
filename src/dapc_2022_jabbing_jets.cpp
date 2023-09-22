#include <iostream>
#include <cmath>
constexpr double pi = M_PI;

using namespace std;

int main() {
  int n, e, r, sum = 0;
  cin >> n >> e;
  for (int i = 0; i < n; i++) {
    cin >> r;
    double circumference = 2 * pi * r;
    int holes = (int)(circumference / e);
    sum += holes;
    cout << holes << ' ';
  }
  cout << sum;
  return 0;
}