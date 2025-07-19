#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  int x;
  cin >> x;

  string ans = "No";
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      ans = "Yes";
      break;
    }
  }

  cout << ans << endl;
}
