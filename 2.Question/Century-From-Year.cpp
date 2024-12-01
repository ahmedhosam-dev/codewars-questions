#include <iostream>

int centuryFromYear(int year) {
    return !(year % 100) ? year / 100 : (year / 100) + 1;
}

int main() {
    std::cout << centuryFromYear(1705) << " Sould be 18." << std::endl;
    std::cout << centuryFromYear(1900) << " Sould be 19." << std::endl;
    std::cout << centuryFromYear(1601) << " Sould be 17." << std::endl;
    std::cout << centuryFromYear(2000) << " Sould be 20." << std::endl;
    std::cout << centuryFromYear(2742) << " Sould be 28." << std::endl;
    std::cout << centuryFromYear(1212) << " Sould be //." << std::endl;
    std::cout << centuryFromYear(1211) << " Sould be //." << std::endl;
    return 0;
}