#include <bits/stdc++.h>
using namespace std;

int main() {
  char ch;

  vector<char> counter(256, 0);
  while (cin >> ch) {
    if ('A' <= ch && ch <= 'Z') {
      ch += ('a' - 'A');
    }
    counter[ch]++;
  }

  for (char i = 'a'; i <= 'z'; i++) {
    printf("%c : %d\n", i, counter[i]);
  }

  return 0;
}