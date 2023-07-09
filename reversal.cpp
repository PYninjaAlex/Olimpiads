#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, var;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; ++i) {
        cin >> var;
        v.insert(v.begin(), var);
    } 

    for (int elem : v) {
        cout << elem << " ";
    }

    return 0;
}