/** Description:
 * Write a function which calculates the average of the numbers in a given array.
 * Note: Empty arrays should return 0.
 * URL: https://www.codewars.com/kata/57a2013acf1fa5bfc4000921
*/

#include <vector>

double calcAverage(const std::vector<int>& values){
    double result = 0;
    int numbersCount = 0;
    for (const int num: values) {
        result += num;
        numbersCount++;
    }
    return result / numbersCount;
}