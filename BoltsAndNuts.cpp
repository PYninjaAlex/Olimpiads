#include <iostream>

using namespace std;

int main() {
  int k1, m1, k2, m2;
  float l1, l2;
  cin >> k1 >> l1 >> m1 >> k2 >> l2 >> m2;
  l1 /= 100;
  l2 /= 100;
  int result = k1 * l1 * m1 + k2 * l2 * m2;
  int a1 = k1 * (1 - l1), a2 = k2 * (1 - l2);
  if (a1 > a2) {
    result += (a1 - a2) * m1;
  } else {
    result += (a2 - a1) * m2;
  }
  cout << result;
  return 0;
}
