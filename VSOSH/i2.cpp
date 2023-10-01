#include <iostream>
#include <vector>

using namespace std;

int main() {
  int L, N, p = 0, result = 0;
  cin >> L >> N;
  vector<int> D(N);
  for (int i = 0; i < N; ++i) {
    cin >> D[i];
  }
  while (p < N) {
    if (D[p]) {
      ++result;
      p += L;
    } else {
      ++p;
    }
  }
  cout << result;
  return 0;
}
