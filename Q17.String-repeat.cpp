/** Description:
 * 
 * Write a function that accepts an integer n and a string s as parameters, and returns a string of s repeated exactly n times.
 * 
 * Examples (input -> output)
 * 6, "I"     -> "IIIIII"
 * 5, "Hello" -> "HelloHelloHelloHelloHello"
 *
 * URL: https://www.codewars.com/kata/57a0e5c372292dd76d000d7e
 */
#include <string>

using namespace std;

string repeat_str(size_t repeat, const string& str) {
    string result = "";
    for (int i = 0; i < repeat; i++){
        result += str;
    }
    return result;
}
