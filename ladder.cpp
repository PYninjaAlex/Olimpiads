#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  vector<int> m;
  int result = 0;

  for (int i = 0; i < n; ++i) {
    cin >> A[i];
  }

  for (int i = 0; i < n - 1; ++i) {
    if (A[i] > 0) {
      result += A[i];
      m.push_back(i + 1);
    } else if (A[i + 1] > 0) {
      result += A[i + 1];
      m.push_back(i + 2);
      ++i;
    } else {
      if (A[i] > A[i + 1]) {
        result += A[i];
        m.push_back(i + 1);
      } else {
        result += A[i + 1];
        m.push_back(i + 2);
        ++i;
      }
    }
  }

  if (m[m.size() - 1] != n) {
    m.push_back(n);
    result += A[n - 1];
  }
  cout << result << "\n";
  for (int u : m) {
    cout << u << " ";
  }
  return 0;
}
