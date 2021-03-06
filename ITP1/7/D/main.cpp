#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, l;
  cin >> n >> m >> l;

  vector<vector<int>> A(n, vector<int>(m, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> A[i][j];
    }
  }

  vector<vector<int>> B(m, vector<int>(l, 0));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < l; j++) {
      cin >> B[i][j];
    }
  }

  vector<vector<long>> C(n, vector<long>(l, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      for (int k = 0; k < m; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      if (j)
        cout << " ";
      cout << C[i][j];
    }
    cout << endl;
  }
}