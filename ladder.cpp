#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }

  vector<int> m{0, v[0]};

  for (int j = 1; j < n; ++j) {
    m.push_back(max(m[j], m[j - 1]) + v[j]);
  }

  int size_m = m.size();

  cout << m[size_m - 1] << "\n";
  int i = size_m - 1;
  vector<int> right_way;
  right_way.push_back(i);

  do {
    if (m[i - 1] > m[i - 2]) {
      right_way.insert(right_way.begin(), i - 1);
      --i;
    } else if (i != 2) {
      right_way.insert(right_way.begin(), i - 2);
      i -= 2;
    } else {
      i -= 2;
    }
  } while (i > 1);
  for (int k : right_way) {
    cout << k << " ";
  }
}
