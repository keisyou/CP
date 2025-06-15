#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> X(Q);
  for (int i = 0; i < Q; i++) {
    int x;
    cin >> x;

    if (x == 0) {
      int l = 100000000;
      for (int j = 1; j <= N; j++) l = min(l, X[j]);
      for (int j = 1; j <= N; j++) {
        if (l == X[j]) {
          x = j;
          break;
        }
      }
    }

    cout << x << " ";
    X[x]++;
  }
  cout << endl;
}
