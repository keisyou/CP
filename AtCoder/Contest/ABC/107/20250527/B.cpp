#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<char>> grid(H, vector<char>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) cin >> grid.at(i).at(j);
  }

  vector<bool> row(H, false);
  vector<bool> col(W, false);
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (grid.at(i).at(j) == '#') {
        row[i] = true;
        col[j] = true;
      }
    }
  }

  for (int i = 0; i < H; i++) {
    if (row.at(i)) {
      for (int j = 0; j < W; j++) {
        if (col.at(j)) {
          cout << grid.at(i).at(j);
        }
      }
      cout << endl;
    }
  }
}
