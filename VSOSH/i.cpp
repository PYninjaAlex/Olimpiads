#include <iostream>

using namespace std;

int main() {
  int A, B, C, result = 0;
  cin >> A >> B >> C;
  for (;;) {
    if (A) {
      --A;
      ++result;
    } else {
      break;
    }
    if (B) {
      --B;
      ++result;
    } else {
      break;
    }
    if (C) {
      --C;
      ++result;
    } else {
      break;
    }
    if (B) {
      --B;
      ++result;
    } else {
      break;
    }
  }
  cout << result;
  return 0;
}
