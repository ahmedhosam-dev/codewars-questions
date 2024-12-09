/** Description: 
 * Your task is to create a function that does four basic mathematical operations.
 * The function should take three arguments - operation(string/char), value1(number), value2(number).
 * The function should return result of numbers after applying the chosen operation.
 * Examples(Operator, value1, value2) --> output
 * ('+', 4, 7) --> 11
 * ('-', 15, 18) --> -3
 * ('*', 5, 5) --> 25
 * ('/', 49, 7) --> 7
 * URL: https://www.codewars.com/kata/57356c55867b9b7a60000bd7
*/

#include <stdexcept>
#include <iostream>

int basicOp(char op, int val1, int val2) {
    try {
    switch (op) {
        case '+': return val1 + val2;
        case '-': return val1 - val2;
        case '*': return val1 * val2;
        case '/':
            if (val2 == 0) throw std::invalid_argument("Can't divided by 0");
            return val1 / val2;
        default:
            throw std::invalid_argument("Invalid operator.");
    }
    } catch (const std::invalid_argument &e ) {
        std::cerr << "Exception: " << e.what() << std::endl; 
    }
    return 0;
}