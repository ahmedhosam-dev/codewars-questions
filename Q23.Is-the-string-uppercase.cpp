/** Description: 
 * Task
 * Create a method to see whether the string is ALL CAPS.
 * Examples (input -> output)
 * "c" -> False
 * "C" -> True
 * "hello I AM DONALD" -> False
 * "HELLO I AM DONALD" -> True
 * "ACSKLDFJSgSKLDFJSKLDFJ" -> False
 * "ACSKLDFJSGSKLDFJSKLDFJ" -> True
 * In this Kata, a string is said to be in ALL CAPS whenever it does not contain any lowercase letter so any string containing no letters at all is trivially considered to be in ALL CAPS.
 * URL: https://www.codewars.com/kata/56cd44e1aa4ac7879200010b
*/

#include <string>

bool is_uppercase(const std::string &s) {
    for (char c: s) 
        if (islower(c))
            return false;
    return true;
}