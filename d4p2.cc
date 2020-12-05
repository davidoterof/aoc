#include <bits/stdc++.h>

using namespace std;

bool is_valid(string field, string value) {
  if (field == "byr") {
    int num = stoi(value);
    return num <= 2002 && num >= 1920;
  }

  if (field == "iyr") {
    int num = stoi(value);
    return num <= 2020 && num >= 2010;
  }

  if (field == "eyr") {
    int num = stoi(value);
    return num <= 2030 && num >= 2020;
  }

  if (field == "hgt") {
    if (value.length() < 4) {
      return false;
    }
    string units = value.substr(value.length() - 2);
    int num = stoi(value.substr(0, value.length() - 2));
    if (units == "cm") {
      return num >= 150 && num <= 193;
    }
    if (units == "in") {
      return num >= 59 && num <= 76;
    }
    return false;
  }

  if (field == "hcl") {
    return value[0] == '#' && value.length() == 7;
  }

  if (field == "ecl") {
    return value == "amb" || value == "blu" || value == "brn" || value == "gry"
      || value == "grn" || value == "hzl" || value == "oth";
  }

  if (field == "pid") {
    return value.length() == 9;
  }
}

void solve() {
  string line;
  int valid = 0;
  int fields = 0;
  string temp;
  while (getline(cin, line)) {
    stringstream ss(line);
    while(ss >> temp) {
      string key = temp.substr(0, 3);
      string value = temp.substr(4);
      fields = fields + is_valid(key, value);
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
