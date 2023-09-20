#include <algorithm>
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
  sort(A.begin(), A.end());
  for (int i = n - 1; i > 1; --i) {
    if (A[i] < A[i - 1] + A[i - 2]) {
      cout << A[i] + A[i - 1] + A[i - 2];
      return 0;
    }
  }
  cout << 0;
  return 0;
}
