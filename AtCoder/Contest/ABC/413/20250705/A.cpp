#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int total = 0;
  for (int i = 0; i < n; i++) {
    int size;
    cin >> size;
    total += size;
  }

  if (total <= m) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
