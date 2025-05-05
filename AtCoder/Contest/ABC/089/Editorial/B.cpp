#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  set<char> S;

  cin >> N;

  for (int i = 0; i < N; i++) {
    char c;
    cin >> c;
    S.insert(c);
  }

  if (S.size() == 3) {
    cout << "Three" << endl;
  } else {
    cout << "Four" << endl;
  }
}
