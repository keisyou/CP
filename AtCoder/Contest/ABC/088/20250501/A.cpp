#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  int balance = N % 500;

  if (balance <= A) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
