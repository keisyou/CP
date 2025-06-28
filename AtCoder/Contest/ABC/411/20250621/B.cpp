#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> di(n-1);
  for (int i = 0; i < n-1; i++) cin >> di[i];

  for (int i = 0; i < n - 1; i++) {
    int distance = 0;
    for (int j = i; j < n - 1; j++) {
      distance += di[j];
      cout << distance << ' ';
    }
    cout << endl;
  }
}
