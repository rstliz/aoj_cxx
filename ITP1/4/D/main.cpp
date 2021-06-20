#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long v;
  long long max_v = -1000001;
  long long min_v = 1000001;
  long long sum_v = 0;

  for (int i = 0; i < n; i++) {
    cin >> v;
    max_v = max(max_v, v);
    min_v = min(min_v, v);
    sum_v += v;
  }
  cout << min_v << " " << max_v << " " << sum_v << endl;
}