#include <bits/stdc++.h>

using namespace std;

// F's and L's are 0's, B's and R's are 1's, then it is only
// convert binary to decimal

void solve() {
  int max = 0;
  string line;
  vector<int> ids;
  while (cin >> line) {
    int num = 0;
    int b = 512;
    for (char c : line) {
      if (c == 'B' || c == 'R') {
        num = num + b;
      }
      b = b / 2;
    }
    ids.push_back(num);
  }
  sort(ids.begin(), ids.end());
  for (int i = 0; i < (ids.size() - 1); i++) {
    if (ids[i + 1] - ids[i] == 2) {
      cout << ids[i] + 1 << endl;
    }
  }
}

int main() {
  solve();
}
