#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> sn(n);
  for (int i = 0; i < n; i++) cin >> sn[i];

  vector<string> result;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j) result.push_back(sn[i] + sn[j]);
    }
  }

  sort(result.begin(), result.end());
  result.erase(unique(result.begin(), result.end()), result.end());

  cout << result.size() << endl;
}
