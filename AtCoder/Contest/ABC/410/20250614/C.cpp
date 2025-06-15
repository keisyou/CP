#include <bits/stdc++.h>
using namespace std;

int main() {
  // 整数列Aの長さ N
  // クエリ回数 Q
  int N, Q;
  cin >> N >> Q;

  // 整数列 A
  vector<int> A(N);
  for (int i = 0; i < N; i++) A.at(i) = i+1;

  for (int i = 0; i < Q; i++) {
    int type;
    cin >> type;

    if (type == 1) {
      int j, num;
      cin >> j >> num;

      A.at(j-1) = num;
    }

    if (type == 2) {
      int j;
      cin >> j;

      cout << A.at(j-1) << endl;
    }

    if (type == 3) {
      int j;
      cin >> j;

      for (int k = 0; k < j; k++) {
        int num = A[0];
        A.erase(A.begin());
        A.push_back(num);
      }
    }
  }
}
