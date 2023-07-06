#include <iostream>

using namespace std;

int main() {
    int res = 0;
    for (int i = 0; i < 4; ++i) {
        int a, b;
        cin >> a >> b;
        res += a - b;
    } 
    if (res == 0) {
        cout << "DRAW";
    } else if (res > 0) {
        cout << "1";
    } else {
        cout << "2";
    }
    return 0;
}