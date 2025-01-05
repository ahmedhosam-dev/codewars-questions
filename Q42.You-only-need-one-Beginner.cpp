/** Description:
 * You will be given an array a and a value x. All you need to do is check whether the provided array contains the value.
 * a can contain numbers or strings. x can be either.
 * Return true if the array contains the value, false if not.
 * URL: https://www.codewars.com/kata/57cc975ed542d3148f00015b
*/

#include <vector>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
    for (auto c: seq)
        if (c == elem)
            return true;
    return false;
}