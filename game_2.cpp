#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, p1 = 0, p2 = 0, step = 0;
  cin >> n;
  vector<int> A(n);

  for (int i = 0; i < n; ++i) {
    cin >> A[i];
  }

  if (n >= 2) {
    int f = 0, l = n - 1;
    while (f != l + 1) {
      if (A[f] + A[l - 1] > A[l] + A[f + 1]) {
        if (step % 2 == 0) {
          p1 += A[f];
        } else {
          p2 += A[f];
        }
        ++step;
        ++f;
      } else {
        if (step % 2 == 0) {
          p1 += A[l];
        } else {
          p2 += A[l];
        }
        ++step;
        --l;
      }
    }
    if (p1 > p2) {
      cout << 1;
    } else if (p1 < p2) {
      cout << 2;
    } else {
      cout << 0;
    }
  } else if (!n) {
    cout << 0;
  } else {
    cout << 1;
  }
  return 0;
}
