#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, j = 1;
  float max = 0;
  cin >> n;
  vector<float> V(n), P(n);

  for (int i = 0; i < n; ++i) {
    cin >> V[i];
  }

  for (int i = 0; i < n; ++i) {
    cin >> P[i];
  }

  for (int k = 0; k < n; ++k) {
    if (max < V[k] * (P[k] / 100)) {
      max = V[k] * (P[k] / 100);
      j = k + 1;
    }
  }
  cout << j;
  return 0;
}
