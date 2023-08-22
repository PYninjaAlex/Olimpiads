#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  int n, var1, var2;
  cin >> n;
  vector<int> X(n);
  map<int, int> m;
  for (int i = 0; i < n; ++i) {
    cin >> var1 >> var2;
    X[i] = var1;
    m[X[i]] = var2;
  }

  sort(X.begin(), X.end());

  for (int x : X) {
  }
  return 0;
}
