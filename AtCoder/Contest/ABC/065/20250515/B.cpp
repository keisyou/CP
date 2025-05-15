#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, count = 0, button = 0;
  cin >> N;
  vector<int> buttons(N);

  for (int i = 0; i < N; i++) cin >> buttons[i];

  vector<int> seen(N, false);
  while (button != 1) {
    seen[button] = true;
    button = buttons[button] - 1;
    count++;

    if (seen[button]) {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << count << endl;
}
