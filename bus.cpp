#include <iostream>

using namespace std;

int main() {
    int n, j;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> j;
        if (j <= 437) {
            cout << "Crash " << i+1;
            exit(0);
        }
    } 
    cout << "No crash";
    return 0;
}