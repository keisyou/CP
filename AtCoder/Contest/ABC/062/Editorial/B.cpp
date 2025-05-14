#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> a(H);

  for (int i = 0; i < H; i++) cin >> a[i];
  vector<string> S(H+2, string(W+2, '#'));

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      S[i+1][j+1] = a[i][j];
    }
  }

  for (int i = 0; i < S.size(); i++) cout << S[i] << endl;
}
