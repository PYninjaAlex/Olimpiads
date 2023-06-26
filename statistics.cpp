#include <iostream>
#include <vector>

using namespace std;

int main() {
    int length;
    cin >> length;
    vector<int> days(length); 

	for (size_t i = 0; i < days.size(); ++i) {
        cin >> days[i];
    }		
    vector<int> even_days;  
    vector<int> odd_days;

    for (int day : days) {
        if (day % 2 == 0) {
            even_days.push_back(day);
        } else {
            odd_days.push_back(day);
        }
    }

    for (int day : odd_days) {
        cout << day << " ";
    }

    cout << "\n";

    for (int day : even_days) {
        cout << day << " ";
    }

    cout << "\n";

    if (even_days.size() >= odd_days.size()) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}