#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a != 0) {
    cout << a;
  }
  if (b == 1 && a != 0) {
    cout << "+x";
  } else if (b == 1) {
    cout << "x";
  } else if (b == -1) {
    cout << "-x";
  } else if (b < 0) {
    cout << b << "x";
  } else if (b != 0 && a != 0) {
    cout << "+" << b << "x";
  } else if (b != 0) {
    cout << b << "x";
  }
  if (c == 1 && (b != 0 || a != 0)) {
    cout << "+y";
  } else if (c == 1) {
    cout << "y";
  } else if (c == -1) {
    cout << "-y";
  } else if (c < 0) {
    cout << c << "y";
  } else if ((a != 0 || b != 0) && c != 0) {
    cout << "+" << c << "y";
  } else if (c != 0) {
    cout << c << "y";
  }
  if (!a && !b && !c) {
    cout << 0;
  }
  return 0;
}
