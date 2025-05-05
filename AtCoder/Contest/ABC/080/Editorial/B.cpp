#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int fx = 0;
  int X = N;
  while (X) {
    fx += X % 10;
    X /= 10;
  }

  if (N % fx == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
