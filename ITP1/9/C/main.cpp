#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string taro_card, hanako_card;
  int taro_p = 0, hanako_p = 0;
  for (int i = 0; i < n; i++) {
    cin >> taro_card >> hanako_card;
    if (taro_card > hanako_card) {
      taro_p += 3;
    }
    if (taro_card == hanako_card) {
      taro_p++;
      hanako_p++;
    }
    if (taro_card < hanako_card) {
      hanako_p += 3;
    }
  }
  cout << taro_p << " " << hanako_p << endl;

  return 0;
}