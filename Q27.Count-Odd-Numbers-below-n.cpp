/** Description:
 * Given a number n, return the number of positive odd numbers below n, EASY!
 * Examples (Input -> Output)
 * 7  -> 3 (because odd numbers below 7 are [1, 3, 5])
 * 15 -> 7 (because odd numbers below 15 are [1, 3, 5, 7, 9, 11, 13])
 * Expect large Inputs!
 * URL: https://www.codewars.com/kata/59342039eb450e39970000a6
*/

int odd_count(int n){
    if (n == 0)
        return 0; 
    return (n % 2 == 0) ? odd_count(n - 1): odd_count(n - 1);
}

int old_school(int n) {
    int result = 0;
    for (int num = n; num > 0; num--) {
        if (num % 2 == 0) {
            result++;
        }
    }
    return result;
}

#include <iostream>

int main () {
    int number = 25;
    std::cout << odd_count(number) << std::endl;
    std::cout << old_school(number) << std::endl;
    return 0;
} 

