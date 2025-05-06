#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, count = 0;
  vector<int> A;
  cin >> N;

  for (int i = 0; i < N; i++) {
    int Ai;
    cin >> Ai;
    A.push_back(Ai);
  }

  bool flag = true;
  while (flag) {
    count++;
    for (int i = 0; i < A.size(); i++) {
      if (A[i] % 2 == 0) {
        A[i] /= 2;
      } else {
        count--;
        flag = false;
        break;
      }
    }
  }

  cout << count << endl;
}
