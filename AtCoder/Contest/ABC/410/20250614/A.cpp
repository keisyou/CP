#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, count = 0;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  int K;
  cin >> K;

  for (int age : A) {
    if (age >= K) count++;
  }

  cout << count << endl;
}
