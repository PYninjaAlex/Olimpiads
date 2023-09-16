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
  if (A[n - 1] < A[n - 2] + A[n - 3]) {
    cout << A[n - 1] + A[n - 2] + A[n - 3];
    return 0;
  }
  cout << 0;
  return 0;
}
