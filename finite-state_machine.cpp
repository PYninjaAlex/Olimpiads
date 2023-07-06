#include <iostream>
#include <vector>

using namespace std;

int main() {
    int k;
    cin >> k;
    vector<int> res;

    for (int i = 0; i < k; ++i) {
        int n, m;
        cin >> n >> m;
        res.push_back(19 * m + (n + 239)*(n + 366) / 2);
    }

    for (int j : res) {
        cout << j << "\n";
    }
    return 0;
}