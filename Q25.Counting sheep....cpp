/** Description:
 * Consider an array/list of sheep where some sheep may be missing from their place. We need a function that counts the number of sheep present in the array (true means present).
 * For example,
 * { true,  true,  true,  false,
 *   true,  true,  true,  true,
 *   true,  false, true,  false,
 *   true,  false, false, true,
 *   true,  true,  true,  true,
 *   false, false, true,  true }
 * The correct answer would be 17.
 * Hint: Don't forget to check for bad values like null/undefined
 * URL: https://www.codewars.com/kata/54edbc7200b811e956000556
*/

#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) 
{
    int counter = 0;
    for (bool value: arr) {
        if (value)
            counter++;
    }
    return counter;

    // Or i can make using one of the algorithms such as count() function that can i pass the begin and end of vector and the value that i want him to count 🫡
}
