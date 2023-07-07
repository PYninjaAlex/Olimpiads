#include <iostream>
#include <iostream>

using namespace std;

int main() {
    string place;
    int x;
    cin >> place >> x;
    if (place.size() == 6 && x % 2 == 1) {cout << "Yes";} 
    else if (place.size() == 6 && x % 2 == 0) {cout << "No";}
    else if (place.size() == 4 && x % 2 == 1) {cout << "Yes";}
    else {cout << "No";}
    return 0; 
}