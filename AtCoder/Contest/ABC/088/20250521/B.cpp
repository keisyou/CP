#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Alice = 0, Bob = 0;
  cin >> N;
  vector<int> cards(N);
  for (int i = 0; i < N; i++) cin >> cards.at(i);

  sort(cards.begin(), cards.end());
  reverse(cards.begin(), cards.end());

  for (int i = 0; i < cards.size(); i+=2) {
    Alice += cards[i];
    Bob += cards[i+1];
  }

  cout << Alice - Bob << endl;
}
