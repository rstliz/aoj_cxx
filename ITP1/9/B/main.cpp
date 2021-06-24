#include <bits/stdc++.h>
using namespace std;

int main() {
  string cards;
  int m, h;
  while (cin >> cards) {
    if (cards == "-") {
      break;
    }
    cin >> m;
    string pop, base = cards;
    for (int i = 0; i < m; i++) {
      cin >> h;
      pop = base.substr(0, h);
      base = base.substr(h) + pop;
    }
    cout << base << endl;
  }
}