#include <bits/stdc++.h>

using namespace std;

void solve() {
  string line;
  int valid = 0;
  int fields = 0;
  string temp;
  while (getline(cin, line)) {
    stringstream ss(line);
    while(ss >> temp) {
      if(temp.substr(0, 3) != "cid") {
        fields++;
      }
    }
    if (line.empty()) {
      if (fields == 7) {
        valid++;
      }
      fields = 0;
    }
  }
  cout << valid << endl;
}

int main() {
  solve();
}
