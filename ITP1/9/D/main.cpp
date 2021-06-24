#include <bits/stdc++.h>
using namespace std;

int main() {
  string src;
  int q;
  cin >> src;
  cin >> q;

  string comm, arg3;
  int arg1, arg2;
  for (int i = 0; i < q; i++) {
    cin >> comm;
    if (comm == "replace") {
      cin >> arg1 >> arg2 >> arg3;
      src = src.replace(arg1, arg2 - arg1 + 1, arg3);
    }
    if (comm == "reverse") {
      cin >> arg1 >> arg2;
      reverse(src.begin() + arg1, src.begin() + arg2 + 1);
    }
    if (comm == "print") {
      cin >> arg1 >> arg2;
      cout << (src.substr(arg1, arg2 - arg1 + 1)) << endl;
    }
  }
}