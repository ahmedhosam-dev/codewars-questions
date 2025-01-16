/** Description:
 * If you can't sleep, just count sheeps!!
 * Task:
 * Given a non-negative integer, 3 for example, return a string with a murmur: "1 sheep...2 sheep...3 sheep...". Input will always be valid, i.e. no negative integers.
 * URL: https://www.codewars.com/kata/5b077ebdaf15be5c7f000077
*/

#include <string>

std::string countSheep(int number) {
    std::string result = "";
    for (int num = 1; num <= number; num++) {
        result += std::to_string(num) + " sheep...";
    }
    return result;
}