#include <bits/stdc++.h>
using namespace std;

string to_lower(string s) {
  std::transform(s.begin(), s.end(), s.begin(),
                 [](unsigned char c) { return tolower(c); });
  return s;
}

int main() {
  string W, T;
  cin >> W;
  W = to_lower(W);
  int ans = 0;
  while (cin >> T) {
    if (T == "END_OF_TEXT") {
      break;
    }
    T = to_lower(T);
    if (W == T) {
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}