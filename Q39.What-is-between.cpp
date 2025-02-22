/** Description:
 * Complete the function that takes two integers (a, b, where a < b) and return an array of all integers between the input parameters, including them.
 * For example:
 * a = 1
 * b = 4
 * --> [1, 2, 3, 4]
 * URL: https://www.codewars.com/kata/55ecd718f46fba02e5000029
*/

#include <vector>

std::vector<int> between(int start, int end) {
    std::vector<int> result{};
    for (int s = start; s <= end; s++) {
        result.push_back(s);
    }
    return result;
}  