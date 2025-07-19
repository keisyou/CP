#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<int> ans;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '#') {
      ans.push_back(i+1);
    }
  }

  for (int i = 0; i < ans.size(); i+=2) {
    cout << ans[i] << ',' << ans[i+1] << endl;
  };
}
