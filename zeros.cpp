#include <iostream>
#include <string>

using namespace std;

int main() {
    int best = 0;
    int var = 0;

    string s;
    getline(cin, s);

    for (char i : s) {
        if (i == '0') {
            var++;
        } else {
            if (var > best) {best = var;}
            var = 0;
        }
    } 
    if (var > best) {best = var;}
    cout << best;
    return 0;
}
