#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, num;
  char t;

  cin >> n;
  map<char, vector<int>> mp;
  for (int i = 0; i < n; i++) {
    cin >> t >> num;
    mp[t].emplace_back(num);
  }

  vector<char> type = {'S', 'H', 'C', 'D'};
  for (auto c : type) {
    for (int i = 1; i <= 13; i++) {
      if (std::find(mp[c].begin(), mp[c].end(), i) == mp[c].end()) {
        cout << c << " " << i << endl;
      }
    }
  }
}