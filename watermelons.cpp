#include <iostream>
// #include <vector>
// #include <algorithm>

using namespace std;

int main() {
    // int n, element;
    // vector<int> v;
    // cin >> n;
    // for (size_t i = 0; i < n; ++i) {
    //     cin >> element;
    //     v.push_back(element);
    // }
    // sort(v.begin(), v.end());
    // cout << v[0] << " " << v[n-1];
    // return 0;
    int n, var;
    cin >> n;
    int min = 30001;
    int max = 0;
    for (int i = 0; i < n; ++i) {
        cin >> var;
        if (var > max) max = var;
        if (var < min) min = var;
    }
    cout << min << " " << max;
    return 0;
}