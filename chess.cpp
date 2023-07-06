#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<char> available_field = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    vector<char> available_field_numbers = {'1', '2', '3', '4', '5', '6', '7', '8'};
    string step;
    cin >> step;
    if (step.size() != 4) {
        cout << "ERROR";
        return 1;
    }
    if (step[2] == '-' && find(available_field.begin(), available_field.end(), step[0]) == available_field.end() && find(available_field.begin(), available_field.end(), step[3]) == available_field.end() && find(available_field_numbers.begin(), available_field_numbers.end(), step[1]) == available_field_numbers.end() && find(available_field_numbers.begin(), available_field_numbers.end(), step[4]) == available_field_numbers.end()) {
        int index = -1;
        for (int i = 0; i < available_field.size(); ++i) {
            if (available_field[i] == step[0]) {
                index = i;
                break;
            }
        }
        if (abs(stoi(string(1, step[1])) - stoi(string(1, step[4]))) != 2) {
            cout << "NO";
            return 1;
        } else if (step[3] == available_field[index - 1] || step[3] == available_field[index + 1]) {
            cout << "YES";
            return 0;
        } 
    } else {
        cout << "ERROR";
        return 1;
    }
} 