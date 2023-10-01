#include <iostream>

using namespace std;

void S1(int n, int &a, int &b, int &c) {
  int x = 0, y = 0, z = 0;
  if (n < 4) {
    a = 1;
    b = 1;
    c = 1;
    return;
  }
  S1(n - 1, x, y, z);
  a = x + y + z;
  b = x;
  c = y;
}

void S2(int n, int &a, int &b, int &c) {
  int x = 1, y = 1, z = 1, z1;
  for (int i = 4; i <= n; ++i) {
    z1 = z;
    z = y;
    y = x;
    x = y + z + z1;
  }
  a = x;
  b = y;
  c = z;
  return;
}

int main() {
  int a = 0, b = 0, c = 0;
  for (int n = 1; n < 11; n++) {
    S2(n, a, b, c);
    cout << a << " " << b << " " << c << endl;
  }
  return 0;
}
