/** Description:
 * You take your son to the forest to see the monkeys. You know that there are a certain number there (n), but your son is too young to just appreciate the full number, he has to start counting them from 1.
 * As a good parent, you will sit and count with him. Given the number (n), populate an array with all numbers up to and including that number, but excluding zero.
 * For example(Input --> Output):
 * 10 --> [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
 *  1 --> [1]
 * URL: https://www.codewars.com/kata/56f69d9f9400f508fb000ba7
*/

#include <vector>

std::vector<int> MonkeyCount(int n) {
    std::vector<int> result;
    for (int num = 1; num <= n; num++)
        result.push_back(num);
    return result;
}