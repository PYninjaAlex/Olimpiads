#include <iostream>

using namespace std;

int main() {
    int n;
    int res = 0;
    cin >> n;
    if (n == 0) {
        cout << 1;
        return 0;
    } 
    for (int i = 1; i <= abs(n); ++i) {
            res += i;
        }
    if (n >= 0) {
        cout << res;
    } else {
        cout << -res + 1;
    } 
}