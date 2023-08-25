#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> X(n);
  map<int, int> S;

  for (int i = 0; i < n; ++i) {
    cin >> X[i];
    cin >> S[X[i]];
  }

  sort(X.begin(), X.end());
  vector<int> m{0, S[X[0]]};

  for (int i = 2; i <= n; ++i) {
    m.push_back(min(m[i - 2], m[i - 1]) + S[X[i - 1]]);
  }
  cout << m[n];
  return 0;
}
