#include <iostream>

bool isDivisible(int n, int x, int y) {
    return (n % x && n % y) ? true : false;
}