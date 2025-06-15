#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;

  // ボールの数字が入っている配列
  vector<int> X(Q);
  for (int i = 0; i < Q; i++) {
    cin >> X.at(i);
  }

  // N番目の箱に何個のボールが入っているか測定するための配列
  vector<int> boxNumbers(N);

  // Xi番目のボールを入れた箱の番号を入れる配列
  vector<int> B(Q);

  for (int i = 0; i < Q; i++) {
    if (X.at(i) == 0) {
      auto it = min_element(boxNumbers.begin(), boxNumbers.end());
      B.at(i) = distance(boxNumbers.begin(), it)+1;
      boxNumbers.at(distance(boxNumbers.begin(), it))++;
    } else {
      B.at(i) = X.at(i);
      boxNumbers.at(X.at(i) - 1)++;
    }
  }

  for (int i = 0; i < Q; i++) {
    if (i == Q-1) {
      cout << B.at(i) << endl;
    } else {
      cout << B.at(i) << " ";
    }
  }
}
