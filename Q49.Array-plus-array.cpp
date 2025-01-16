/** Description:
 * I'm new to coding and now I want to get the sum of two arrays... Actually the sum of all their elements. I'll appreciate for your help.
 * P.S. Each array includes only integer numbers. Output is a number too.
 * URL: https://www.codewars.com/kata/5a2be17aee1aaefe2a000151
*/

#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
    int result;
    for (int num: a) { result += num; }
    for (int num: b) { result += num; }
    return result;
}
