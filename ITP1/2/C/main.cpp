#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> V(3);
  cin >> V[0];
  cin >> V[1];
  cin >> V[2];

  sort(V.begin(), V.end());

  for (int i = 0; i < 3; i++) {
    if (i)
      cout << " ";
    cout << V[i];
  }
  cout << endl;
}