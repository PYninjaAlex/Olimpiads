#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int convert_p_to_10(int p, string n) {
  if (p > 30) {
    cout << "Impossible :)";
    return 0;
  }
  int result = 0, k;
  for (int i = 0; i < n.size(); ++i) {
    if (n[i] < 'A') {
      k = n[i] - '0';
    } else {
      k = (int)(n[i] - 'A') + 10;
    }
    result += k * (int)(pow(p, n.size() - 1 - i));
  }
  return result;
}

string convert_10_to_p(int p, int n) {
  string result = "";
  vector<int> V;
  int o;
  while (n > 0) {
    V.insert(V.begin(), n % p);
    n /= p;
  }
  for (int u : V) {
    if (u > 9) {
      result += u + 'A' - 10;
    } else {
      result += u + '0';
    }
  }
  return result;
}

int main() {
  int p, n;
  cin >> p;
  cin >> n;
  cout << convert_10_to_p(p, n);
  return 0;
}
