#include <iostream>

using namespace std;

int main() {
    int n, var;
    cin >> n;
    int count_f = 0;
    int count_s = 0;
    for (int i = 0; i < n; ++i) {
        cin >> var;
        if (var == 1) {count_f++;} else {count_s++;}
    }
    cout << min(count_f, count_s);
    return 0;
}