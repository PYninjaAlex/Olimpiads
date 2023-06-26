#include<iostream>

int main() 
{ 
    long long a;
    std::cin >> a;
    a = a / 10; 
    std::cout << a * (a + 1) * 100 + 25;
    return 0; 
 } 