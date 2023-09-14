#include <iostream>

using namespace std;

int binarySearch(int array[], int l, int r, int res) {
  int index;
  while (l <= r) {
    int mid = (l + r) / 2;
    if (array[mid] == res)
      return mid;
    if (array[mid] > res)
      r = mid - 1;
    else
      l = mid + 1;
  }
  return -1;
}

int main() {
  int array[101], n, search;

  cin >> search;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> array[i];

  int foundIndex = binarySearch(array, 0, n - 1, search);
  foundIndex != -1 ? cout << search << " is in the array at index " << foundIndex : cout << search << " does not appear in the array";
  return 0;
}