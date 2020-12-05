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
    int count = 0;
    for (char c : pass) {
      if (c == letter) {
        count++;
      }
    }
    if (count >= low && count <= high) {
      result++;
    }
  }

  cout << result << endl;
}

int main() {
  solve();
}
