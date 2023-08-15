#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int k, n;
  cin >> k >> n;
  if (k == 1) {
    cout << 1;
  } else {
    int size_A = n + k;
    vector<unsigned long long int> A(size_A);
    A[k - 1] = 1;
    A[k] = 1;
    A[k + 1] = 2;
    for (int i = k + 2; i < size_A; ++i) {
      for (int j = 1; j <= k; ++j) {
        A[i] += A[i - j];
      }
    }
    cout << A[size_A - 1];
  }
  return 0;
}
