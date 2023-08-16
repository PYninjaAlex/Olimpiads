#include <iostream>
#include <string>
#include <vector>

using namespace std;

string strings_sum(string str1, string str2) {
  string result = "";
  int p = 0;
  int str1_size = str1.size();
  int str2_size = str2.size();
  if (str1_size > str2_size) {
    for (int i = 0; i < (str1_size - str2_size); ++i) {
      str2.insert(0, "0");
    }
  } else {
    for (int i = 0; i < (str2_size - str1_size); ++i) {
      str1.insert(0, "0");
    }
  }
  str1_size = str1.size();
  str2_size = str2.size();
  for (int i = str1_size - 1; i >= 0; --i) {
    int var = (int)(str1[i] - '0') + (int)(str2[i] - '0') + p;
    if (var > 9) {
      p = var / 10;
    } else {
      p = 0;
    }
    result.insert(0, to_string(var % 10));
  }
  if (p) {
    result.insert(0, to_string(p));
  }
  return result;
}

int main() {
  string s, s2;
  cin >> s >> s2;
  cout << strings_sum(s, s2);
}
