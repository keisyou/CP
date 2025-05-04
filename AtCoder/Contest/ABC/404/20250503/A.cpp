#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  string alphabet = "abcdefghijklnmopqrstuvwxyz";
  cin >> S;

  for (int i = 0; i < alphabet.size(); i++) {
    for (int t = 0; t < S.size(); t++) {
      if (alphabet[i] == S[t]) {
        alphabet.erase(i, 1);
        i--;
      }
    }
  }

  cout << alphabet[0] << endl;
}
