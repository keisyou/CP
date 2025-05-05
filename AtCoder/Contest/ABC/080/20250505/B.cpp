#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;

  int sum = 0;
  for (int i = 0; i < N.size(); i++) {
    sum += N.at(i) - '0';
  }

  if (stoi(N) % sum == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
