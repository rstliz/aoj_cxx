#include <bits/stdc++.h>
using namespace std;

int main() {
  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;

  string ans = "Yes";
  if ((x - r) < 0 || (x + r) > W) {
    ans = "No";
  } else if ((y - r) < 0 || (y + r) > H) {
    ans = "No";
  }

  cout << ans << endl;
}