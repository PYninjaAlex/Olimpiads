#include <iostream>
#include <string>

using namespace std;

int main() {
  int res = 0;
  string n;
  cin >> n;
  for (char c : n) {
    if (c == '0' || c == '6' || c == '9') {
      ++res;
    } else if (c == '8') {
      res += 2;
    }
  }
  cout << res;
  return 0;
}
