#include <iostream>

using namespace std;

int main() {
  string left = "qwertasdfgzxcvb", right = "yuiophjklnm", s;
  bool prev = 1, is_dickensian = false;

  cin >> s;
  for (int i = 0; i < left.size(); i++)
    if (left[i] == s[0]) {
      prev = 0;
      break;
    }
  for (int i = 1; i < s.size(); i++) {
    if (prev == 0) {
      is_dickensian = false;
      for (int j = 0; j < right.size(); j++)
        if (s[i] == right[j]) {
          is_dickensian = true;
          break;
        }
      prev = 1;
      if (!is_dickensian) goto output;
    }
    else {
      is_dickensian = false;
      for (int j = 0; j < left.size(); j++)
        if (s[i] == left[j]) {
          is_dickensian = true;
          break;
        }
      prev = 0;
      if (!is_dickensian) goto output;
    }
  }

output:
  is_dickensian ? cout << "yes" : cout << "no";
  return 0;
}