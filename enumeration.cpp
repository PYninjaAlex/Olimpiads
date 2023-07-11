#include <iostream>

using namespace std;

int main() {
    int n, v, s;
    cin >> n;
    int max = 0;
    int floor = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v >> s;
        if (s == 1 && max < v) {
            floor = i+1;
            max = v;
        }
    } 
    if (max == 0) {
        cout << -1;
    } else {
        cout << floor;
    }
    return 0;
}