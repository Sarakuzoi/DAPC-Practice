#include <iostream>
#include <fstream>

using namespace std;

ifstream in("speeding.in");
ofstream out("speeding.out");

int main() {
  int n, m, len, lim, road[100] = { 0 }, current = 0, maxi = 0, speed;
  in >> n >> m;
  for (int i = 0; i < n; i++) {
    in >> len >> lim;
    for (int j = current; j < current + len; j++) {
      road[j] = lim;
    }
    current += len;
  }
  current = 0;
  for (int i = 0; i < m; i++) {
    in >> len >> speed;
    for (int j = current; j < current + len; j++) {
      if (speed - road[j] > maxi) maxi = speed - road[j];
    }
    current += len;
  }
  out << maxi;
}