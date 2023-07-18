#include <iostream>

using namespace std;

int main() {
    int n, t;
    cin >> n;
    int best = 0;
    int res = 0;
    for (int i = 0; i < n; ++i) {
        cin >> t;
        if (t > 0) { res += 1;}
        else {
            if (best < res) { best = res; } 
            res = 0;
        }
    }
    if (best < res) { best = res;}
    cout << best;
    return 0;
}