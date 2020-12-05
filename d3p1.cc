#include <bits/stdc++.h>

using namespace std;

int solve(int step_down, int step_right) {
  int count = 1;
  string line;
  cin >> line;
  int result = 0;
  int width;

  int right_so_far = 1 + step_right;
  while (cin >> line) {
    count++;
    width = line.size();
    if (count % step_down == 0 && line[(right_so_far - 1) % width] == '#') {
      result++;
    }

    right_so_far += step_right;
  }

  return result;
}

int main() {
  cout << solve(1, 3) << endl;
}
