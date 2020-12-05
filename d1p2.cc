#include <bits/stdc++.h>

using namespace std;

void solve() {
  int target = 2020;

  vector<int> elems;

  int count = 0;

  int n;
  while (cin >> n) {
    elems.push_back(n);
    count++;
  }

  for (int i = 0; i < count; i++) {
    for (int j = i; j < count; j++) {
      int temp = target - (elems[i] + elems[j]);
      if (find(elems.begin(), elems.end(), temp) != elems.end()) {
        cout << elems[i] * elems[j] * temp << endl;
        return;
      }
    }
  }
}

int main() {
  solve();
}
