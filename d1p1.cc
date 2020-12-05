#include <bits/stdc++.h>

using namespace std;

void solve() {
  int target = 2020;
  vector<int> num;
  int n;
  while (cin >> n) {
    int complement = target - n;
    if (find(num.begin(), num.end(), complement) != num.end()) {
      cout << n * complement << endl;
      return;
    }
    num.push_back(n);
  }
}

int main() {
  solve();
}


