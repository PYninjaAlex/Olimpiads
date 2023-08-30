#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cin >> n;

  vector<int> A(n);
  for (int i = 0; i < n; ++i) {
    cin >> A[i];
  }

  cin >> m;
  vector<int> M[m];

  for (int i = 0; i < m; ++i) {
    int n1, n2;
    cin >> n1 >> n2;
    M[i].push_back(n1);
    M[i].push_back(n2);
  }

  for (int i = 0; i < m; ++i) {
    int n1 = M[i][0], n2 = M[i][1];

    if (n1 == n2) {
      cout << A[n1 - 1];
    } else {
      for (int j = n1 - 1; j < n2; ++j) {
        cout << A[j] << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}
