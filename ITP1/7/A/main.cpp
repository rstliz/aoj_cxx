#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, f, r;

  while (true) {
    cin >> m >> f >> r;
    if (m == -1 && f == -1 && r == -1) {
      break;
    }
    if (m == -1 || f == -1) {
      cout << "F" << endl;
      continue;
    }

    int sum = m + f;
    if (80 <= sum) {
      cout << "A" << endl;
      continue;
    }
    if (65 <= sum && sum < 80) {
      cout << "B" << endl;
      continue;
    }
    if (50 <= sum && sum < 65) {
      cout << "C" << endl;
      continue;
    }
    if (30 <= sum && sum < 50) {
      if (50 <= r) {
        cout << "C" << endl;
      } else {
        cout << "D" << endl;
      }
      continue;
    } else {
      cout << "F" << endl;
    }
  }

  return 0;
}