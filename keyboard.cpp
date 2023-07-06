#include <iostream>

using namespace std;

int main() {
    string keyboard = "qwertyuiopasdfghjklzxcvbnmq";
    char c;
    cin >> c;
    for (int i = 0; i < keyboard.size(); ++i) {
        if (c == keyboard[i]) {
            cout << keyboard[i+1];
            break;
        }
    }
    return 0;
}