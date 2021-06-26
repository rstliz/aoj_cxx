#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, C;
  cin >> a >> b >> C;
  double S, L, h;
  double PI = acos(-1); // PI = 3.141593...
  double rad = C * PI / 180;

  S = a * b * sin(rad) / 2;
  L = a + b + sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(rad));
  h = b * sin(rad);

  printf("%.6f\n", S);
  printf("%.6f\n", L);
  printf("%.6f\n", h);
}