#include <bits/stdc++.h>
using namespace std;

int main() {
  string x;
  while (true) {
    cin >> x;
    if (x == "0") {
      break;
    }
    int sum = 0;
    for (char c : x) {
      sum += c - '0';
    }
    cout << sum << endl;
  }
}