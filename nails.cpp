#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  int n;
  int result = 0;
  cin >> n;
  vector<int> A(n);
  map<int, bool> m;

  for (size_t i = 0; i < n; ++i) {
    cin >> A[i];
  }
  sort(A.begin(), A.end());

  result += A[1] - A[0];
  m[A[1]] = true;

  for (size_t p = 2; p < n; ++p) {
    if (!m.count(A[p])) {
      if (p == n - 1) {
        result += A[p] - A[p - 1];
      } else {
        int var1 = A[p + 1] - A[p];
        int var2 = A[p] - A[p - 1];
        if (var1 <= var2 && p + 1 != n - 2) {
          result += var1;
          m[A[p + 1]] = true;
        } else {
          result += var2;
        }
      }
    }
  }
  cout << result;
  return 0;
}
