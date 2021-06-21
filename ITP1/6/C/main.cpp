#include <bits/stdc++.h>
using namespace std;

int B[5][4][11];
int main() {
  int n, b, f, r, v;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> b >> f >> r >> v;

    B[b][f][r] += v;
    if (B[b][f][r] < 0) {
      B[b][f][r] = 0;
    }
    if (B[b][f][r] > 9) {
      B[b][f][r] = 9;
    }
  }
  for (int bi = 1; bi <= 4; bi++) {
    for (int fi = 1; fi <= 3; fi++) {
      for (int ri = 1; ri <= 10; ri++) {
        cout << " " << B[bi][fi][ri];
      }
      cout << endl;
    }
    if (bi != 4) {
      cout << "####################" << endl;
    }
  }
}