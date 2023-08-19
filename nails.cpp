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

  if (n == 2) {
    result += A[1] - A[0];
  } else if (n == 3) {
    result += (A[1] - A[0]) + (A[2] - A[1]);
  } else {
    result += A[1] - A[0];
    // cout << "first result: " << result << endl;
    result += A[n - 1] - A[n - 2];
    m[A[n - 2]] = true;
    // cout << "second result: " << result << endl;

    for (size_t p = 2; p < n - 2; ++p) {
      // cout << "p = " << p << endl;
      if (!m.count(A[p])) {
        int var1 = A[p + 1] - A[p];
        // cout << "var1 = " << var1 << endl;
        int var2 = A[p] - A[p - 1];
        // cout << "var2 = " << var2 << endl;
        if (var1 <= A[p + 2] - A[p + 1]) {
          result += var1;
          m[A[p + 1]] = true;
          // cout << "var1 <= var2" << endl;
        } else {
          result += var2;
          // cout << "var1 > var2" << endl;
        }
      }
    }
  }
  cout << result;
  return 0;
}
