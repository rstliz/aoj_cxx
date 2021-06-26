#include <bits/stdc++.h>
using namespace std;
int n;
vector<double> x, y;

double calc_dist(double p) {
  double sum = 0;
  for (int i = 0; i < n; i++) {
    sum += pow(abs(x[i] - y[i]), p);
  }

  return pow(sum, 1.0 / p);
}

int main() {
  cin >> n;
  int v;

  for (int i = 0; i < n; i++) {
    cin >> v;
    x.emplace_back(v);
  }
  for (int i = 0; i < n; i++) {
    cin >> v;
    y.emplace_back(v);
  }

  double poo = 0.0;
  for (int i = 0; i < n; i++) {
    poo = max(poo, abs(x[i] - y[i]));
  }

  printf("%.6f\n", calc_dist(1));
  printf("%.6f\n", calc_dist(2));
  printf("%.6f\n", calc_dist(3));
  printf("%.6f\n", poo);
}