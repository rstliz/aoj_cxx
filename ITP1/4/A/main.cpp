#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b;
  cin >> a >> b;

  int d = a / b;
  double r = (int)a % (int)b;
  double f = a / b;

  cout << d << " ";
  cout << r << " ";
  printf("%.5lf\n", f);
}