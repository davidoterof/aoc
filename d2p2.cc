#include<bits/stdc++.h>

using namespace std;

void solve() {
  int low;
  int high;
  char dash, dots;
  char letter;
  string pass;

  int result = 0;
  while (cin >> low >> dash >> high >> letter >> dots >> pass) {
    if (!(pass[low - 1] == letter) != !(pass[high - 1] == letter)) {
      result++;
    }
  }

  cout << result << endl;
}

int main() {
  solve();
}
