/** Description:
 * Your task is to sum the differences between consecutive pairs in the array in descending order.
 * Example
 * [2, 1, 10]  -->  9
 * In descending order: [10, 2, 1]
 * Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9
 * If the array is empty or the array has only one element the result should be 0 (Nothing in Haskell, None in Rust).
 * URL: https://www.codewars.com/kata/5b73fe9fb3d9776fbf00009e
*/

#include <vector>
#include <algorithm>

int sumOfDifferences(const std::vector<int>& arr){
    if (arr.empty()) return 0;
    auto p = std::minmax_element(arr.cbegin(), arr.cend());
    return *p.second - *p.first;
}
