#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  char op;

  while (true) {
    cin >> a >> op >> b;
    if (op == '+')
      printf("%d\n", a + b);
    if (op == '-')
      printf("%d\n", a - b);
    if (op == '*')
      printf("%d\n", a * b);
    if (op == '/')
      printf("%d\n", a / b);
    if (op == '?')
      break;
  }
}