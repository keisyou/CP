#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int N;
  vector<pair<char, ll>> P;
  cin >> N;
  ll sum = 0;
  for (int i = 0; i < N; i++) {
    char c;
    ll L;
    cin >> c >> L;
    sum += L;
    if (sum > 100) {
      cout << "Too Long" << endl;
      return 0;
    }
    P.push_back({c, L});
  }
  for (auto [c, l] : P) {
    while (l--) cout << c;
  }
  cout << endl;
}
