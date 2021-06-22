#include <bits/stdc++.h>
using namespace std;

int main() {
  char c;

  while (true) {
    scanf("%c", &c);
    if (c == '\n') {
      break;
    }

    int diff = 'a' - 'A';

    if ('a' <= c && c <= 'z') {
      cout << (char)(c - diff);
    } else if ('A' <= c && c <= 'Z') {
      cout << (char)(c + diff);
    } else {
      cout << c;
    }
  }

  cout << endl;

  return 0;
}