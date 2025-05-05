#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  string kinds = "Three";

  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> S;

    if (S == "Y")
    {
      kinds = "Four";
    }
  }

  cout << kinds << endl;
}
