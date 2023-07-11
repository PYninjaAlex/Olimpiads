#include <iostream>

using namespace std;

int main() {
    int n; 
    cin >> n;
    if (n == 1 || n == 2 || n == 4 || n == 8 || n == 16 || n == 32 || n == 64 || n == 128 || n == 256 || n == 512 || n == 1024 || n == 2048 || n == 4096 || n == 8192) { cout << "YES"; } else { cout << "NO"; }   
    return 0;
}