#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, distance = 0;
  cin >> N >> K;

  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;

    if (x * 2 < (K - x) * 2) {
      distance += x * 2;
    } else {
      distance += (K - x) * 2;
    }
  }

  cout << distance << endl;
}
