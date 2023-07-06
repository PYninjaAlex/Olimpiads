#include <iostream>

using namespace std;

int main() {
    unsigned long long max = 0;
    unsigned long long var;
    for (int i = 0; i < 3; ++i) { 
        cin >> var;
        if (max < var) {
            max = var;
        }
    }
    cout << max << endl;
}
    