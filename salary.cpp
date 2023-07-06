#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        if (a > c) {cout << a - min(b, c);}
        else {cout << c - b;}
    } else {
        if (b > c) {cout << b - min(a, c);}
        else {cout << c - a;}
    }
}