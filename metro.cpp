#include <iostream>

using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;  
  if (a < b) {
    cout << min(a + n - b - 1, b - a - 1);
  }
  else {
    cout << min(b + n - a - 1, a - b - 1);
  }
  return 0;    
} 
