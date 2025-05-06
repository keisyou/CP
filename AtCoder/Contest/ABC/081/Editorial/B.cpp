#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, count, minimum = pow(10, 9);
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> A;
    count = 0;

    while (A % 2 == 0) {
      count++;
      A /= 2;
    }

    minimum = min(count, minimum);
  }

  cout << minimum << endl;
}
