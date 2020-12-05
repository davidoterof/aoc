#include <bits/stdc++.h>

using namespace std;

vector<string> read_input() {
  vector<string> input;
  string line;
  while (cin >> line) {
    input.push_back(line);
  }

  return input;
}

long long solve(vector<string> input, int step_down, int step_right) {
  int lines = input.size();
  int width = input[0].size();

  long long result = 0;
  int right = step_right;
  for (int i = step_down; i < lines; i += step_down) {
    if (input[i][right % width] == '#') {
      result++;
    }
    right += step_right;
  }

  return result;
}

int main() {
  vector<string> input = read_input();
  cout << solve(input, 1, 1) * solve(input, 1, 3) * solve(input, 1, 5) * solve(input, 1, 7) * solve(input, 2, 1) << endl;
}
