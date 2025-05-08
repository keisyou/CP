#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  string B[50];
  cin >> H >> W;
  for (int i = 0; i < H; i++) {
    cin >> B[i];
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (B[i][j] == '.') {
        int c = 0;

        for (int dx = -1; dx < 2; dx++) {
          for (int dy = -1; dy < 2; dy++) {
            if (dx == 0 && dy == 0) continue;
            int xx = j + dx;
            int yy = i + dy;

            if (0 <= xx && xx < W && 0 <= yy && yy < H) {
              if (B[yy][xx] == '#') c++;
            }
          }
        }

        B[i][j] = char('0' + c);
      }
    }
  }

  for (int i = 0; i < H; i++) cout << B[i] << endl;
}
