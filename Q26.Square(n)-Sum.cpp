/** Description:
 * Complete the square sum function so that it squares each number passed into it and then sums the results together.
 * For example, for [1, 2, 2] it should return 9 because 1^2 + 2^2 + 2^2 = 9. (^ -> square)
 * URL: https://www.codewars.com/kata/515e271a311df0350d00000f
*/

#include <vector>

int square_sum(const std::vector<int>& numbers)
{
    int result = 0;
    for (const int &num: numbers)
        result += num * num;
    return result;
}