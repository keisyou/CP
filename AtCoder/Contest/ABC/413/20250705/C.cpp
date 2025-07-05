#include <bits/stdc++.h>
using namespace std;

// ver 4
int main () {
  int q;
  cin >> q;

  vector<vector<int>> a;
  int pointer = 0;

  for (int i = 0; i < q; i++) {
    int type;
    cin >> type;

    if (type == 1) {
      int c, x;
      cin >> c >> x;
      a.push_back({x, c});
    }

    if (type == 2) {
      int k;
      cin >> k;

      long total = 0;

      for (int j = )

      cout << total << endl;
    }
  }
}


// ver 3
// int main() {
//   int q;
//   cin >> q;

//   vector<int> a;
//   for (int i = 0; i < q; i++) {
//     int type;
//     cin >> type;

//     if (type == 1) {
//       int c, x;
//       cin >> c >> x;
//       for (int j = 0; j < c; j++) a.push_back(x);
//     }

//     if (type == 2) {
//       int k;
//       cin >> k;

//       long total = 0;
//       for (int j = 0; j < k; j++) {
//         total += a[j];
//       }

//       a.erase(a.begin(), a.begin() + k);
//       cout << total << endl;
//     }
//   }
// }


// ver 2
// int main() {
//   int q;
//   cin >> q;

//   vector<int> a;
//   for (int i = 0; i < q; i++) {
//     int type;
//     cin >> type;

//     if (type == 1) {
//       int c, x;
//       cin >> c >> x;
//       for (int j = 0; j < c; j++) a.push_back(x);
//     }

//     if (type == 2) {
//       int k;
//       cin >> k;

//       long total = 0;
//       for (int j = 0; j < k; j++) {
//         total += a[0];
//         a.erase(a.begin());
//       }

//       cout << total << endl;
//     }
//   }
// }


// ver 1
// int main() {
//   int q;
//   cin >> q;

//   vector<int> a;
//   int pointer = 0;
//   for (int i = 0; i < q; i++) {
//     int type;
//     cin >> type;

//     if (type == 1) {
//       int c, x;
//       cin >> c >> x;
//       for (int j = 0; j < c; j++) a.push_back(x);
//     }

//     if (type == 2) {
//       int k;
//       cin >> k;

//       long total = 0;
//       for (int j = pointer; j < pointer + k; j++) {
//         total += a[j];
//       }

//       pointer += k;
//       cout << total << endl;
//     }
//   }
// }
