#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n, k, t, min_cnt, index_min_cnt;
    cin >> n >> k >> t;
    vector<int> a(n), b(n), cnt(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    } 
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    } 
    for (int i = 0; i < n; ++i) {
        cnt[i] = b[i] / a[i];
    }
    while (t--) {
        min_cnt = 10e6;
        for (int i = 0; i < n; ++i) { 
            if (cnt[i] < min_cnt) { 
                min_cnt = cnt[i];
                index_min_cnt = i;
            }
        }
        b[index_min_cnt] += k;
        cnt[index_min_cnt] = b[index_min_cnt] / a[index_min_cnt];
    }

    for (int i = 0; i < n; ++i) { 
        if (cnt[i] < min_cnt) { 
            min_cnt = cnt[i];
        }
    }
    cout << min_cnt;
    return 0;
}