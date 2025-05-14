#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> a(N, 0);

  for (int i = 0; i < M*2; i++) {
    int num;
    cin >> num;

    a[num-1]++;
  }

  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << endl;
  }
}
