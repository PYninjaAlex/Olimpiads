#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> 

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    int sum_of_natural_nums = 0;
    int multiplying = 1;
    if (n < 3) {
        multiplying = 0;
    }

    int max_value = 0; 
    int min_value = 0;

    int max_index = 0;
    int min_index = 0;

    for (size_t i = 0; i < n; ++i) {
        cin >> numbers[i];
        if (numbers[i] < min_value) {
             min_value = numbers[i];
             min_index = i;
        }
       
        else if (numbers[i] > max_value) {
            max_value = numbers[i];
            max_index = i;
        } 
    }     

    for (int i : numbers) {
        if (i > 0) {
            sum_of_natural_nums += i;
        }
    }

    if (max_index > min_index) {
        for (int i = min_index + 1; i < max_index; ++i) {
            multiplying *= numbers[i];
        }
    } else {
        for (int i = max_index + 1; i < min_index; ++i) {
            multiplying *= numbers[i];
        }            
    }      
    cout << sum_of_natural_nums << " " << multiplying << endl;
    cout << max_value << " " << max_index << " " << min_value << " " << min_index;
    return 0;
}