#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, ans = 0;
    cin >> n >> m;
    vector<bool> c[n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            bool cij;
            cin >> cij;
            c[i].push_back(cij);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) { 
            if (c[i][j]) {
                ++ans;
                for (int k = i; k < n; ++k) {
                    for (int u = j; u < m; ++u) {
                        c[k][u] = !c[k][u];
                    }
                }
            }
        }
    }
    cout << ans;
    return 0;
}