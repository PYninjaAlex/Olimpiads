#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; ++i) {
    cin >> A[i];
  }
  if (n == 1) {
    cout << 0;
  } else {
    vector<int> m{0, 0};
    for (int k = 1; k < n; ++k) {
      if (k == 1) {
        m.push_back(min(3 * abs(A[k] - A[k - 2]), abs(A[k] - A[k - 1])));
      } else {
        m.push_back(min(3 * abs(A[k] - A[k - 2]) + m[k - 1],
                        m[k] + abs(A[k] - A[k - 1])));
      }
    }
    cout << m[n];
  }
  return 0;
}
