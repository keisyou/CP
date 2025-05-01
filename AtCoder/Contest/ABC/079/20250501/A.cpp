#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;

  int count = 1;
  for (int i = 0; i < N.size() - 1; i++) {
    if (N[i] == N[i+1]) {
      count++;

      if (count > 2) {
        break;
      }
    } else {
      count = 1;
    }
  }

  if (count > 2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
