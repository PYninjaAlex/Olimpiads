#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> A(n), s;

  for (size_t i = 0; i < n; ++i) {
    cin >> A[i];
  }
  sort(A.begin(), A.end());

  if (n == 2) {
    cout << A[1] - A[0];
    return 0;
  }

  s.push_back(A[1] - A[0]);
  s.push_back(A[2] - A[0]);
  for (size_t p = 2; p < n - 1; ++p) {
    s.push_back(min(s[p - 1], s[p - 2]) + A[p + 1] - A[p]);
  }
  cout << s[n - 2];
  return 0;
}
