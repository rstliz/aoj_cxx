#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  while (true) {
    cin >> n;
    if (n == 0) {
      break;
    }

    vector<double> s(n);
    for (int i = 0; i < n; i++) {
      cin >> s[i];
    }
    double sum = accumulate(s.begin(), s.end(), 0);
    double avg = sum / n;

    double div_sum = 0;
    for (auto v : s) {
      div_sum += pow(v - avg, 2);
    }
    double stddiv = sqrt(div_sum / n);
    printf("%.6f\n", stddiv);
  }

  return 0;
}