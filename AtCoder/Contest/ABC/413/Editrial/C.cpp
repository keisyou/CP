#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int q;
  cin >> q;

  queue<pair<ll, ll>> que;
  while (q--) {
    int type;
    cin >> type;

    if (type == 1) {
      ll c, x;
      cin >> c >> x;
      que.emplace(c, x);
    }

    if (type == 2) {
      ll k;
      cin >> k;

      ll answer = 0;
      while (!que.empty() && que.front().first <= k) {
        answer += que.front().first * que.front().second;
        k -= que.front().first;
        que.pop();
      }

      if (k != 0) {
        que.front().first -= k;
        answer += que.front().second * k;
      }

      cout << answer << endl;
    }
  }
}
