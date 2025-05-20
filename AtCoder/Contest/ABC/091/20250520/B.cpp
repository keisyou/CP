#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, count = 0;
  cin >> N;

  vector<string> s(N);
  for (int i = 0; i < N; i++)
    cin >> s.at(i);

  cin >> M;
  vector<string> t(M);
  for (int i = 0; i < M; i++)
    cin >> t.at(i);

  int answer = 0;
  for (int i = 0; i < N; i++) {
    int point = 0;
    for (int j = 0; j < N; j++) if (s[i] == s[j]) point++;
    for (int j = 0; j < M; j++) if (s[i] == t[j]) point--;
    answer = max(answer, point);
  }

  cout << answer << endl;
}
