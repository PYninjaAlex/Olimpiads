#include <iostream>

using namespace std;

int main () {
  int max = -10000;
  int min = 10000;
  int var;
  int i = 1;
  while (cin >> var) {
    if (i % 2 == 0 && max < var) { max = var; }
    else if (i % 2 == 1 && min > var) { min = var; }
    ++i;
  }
  cout << max + min;
  return 0;
}
