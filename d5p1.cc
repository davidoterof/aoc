#include <bits/stdc++.h>

using namespace std;

// F's and L's are 0's, B's and R's are 1's, then it is only
// convert binary to decimal

void solve() {
  int max = 0;
  string line;
  while (cin >> line) {
    int num = 0;
    int b = 512;
    for (char c : line) {
      if (c == 'B' || c == 'R') {
        num = num + b;
      }
      b = b / 2;
    }
    if (num > max) {
      max = num;
    }
  }
  cout << max << endl;
}

int main() {
  solve();
}
