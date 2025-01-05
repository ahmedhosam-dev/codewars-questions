/** Description:
 * Write a function which converts the input string to uppercase.
 * URL: https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7
*/

#include <string>

std::string makeUpperCase (const std::string& input_str) {
    std::string stringToUpper = "";
    for (char c: input_str)
        stringToUpper.push_back(toupper(c));
    return stringToUpper;
}
