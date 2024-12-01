#include <iostream>

// This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.

int simpleMultiplication(int a){
    return (a % 2 == 0) ? a * 8 : a * 9;
}

int main() {
    std::cout << simpleMultiplication(2) << " -> Should be 16" << std::endl;
    std::cout << simpleMultiplication(1) << " -> Should be 9" << std::endl;
    std::cout << simpleMultiplication(8) << " -> Should be 6r" << std::endl;
    std::cout << simpleMultiplication(4) << " -> Should be 32" << std::endl;
    std::cout << simpleMultiplication(5) << "-> Should be 45" << std::endl;

    return 0;
}

