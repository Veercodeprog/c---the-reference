#include <iostream>

consteval int get_values(int a, int b) {
    return a + b;
}   

int main() {

std::cout << get_values(1, 2) << std::endl;

    return 0;
}



