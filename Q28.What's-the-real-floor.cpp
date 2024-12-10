/** Description:
 * Americans are odd people: in their buildings, the first floor is actually the ground floor and there is no 13th floor (due to superstition).
 * Write a function that given a floor in the american system returns the floor in the european system.
 * With the 1st floor being replaced by the ground floor and the 13th floor being removed, the numbers move down to take their place. In case of above 13, they move down by two because there are two omitted numbers below them.
 * Basements (negatives) stay the same as the universal level.
 * More information here
 * 
 * Examples
 * 1  =>  0 
 * 0  =>  0
 * 5  =>  4
 * 15  =>  13
 * -3  =>  -3
 * URL: https://www.codewars.com/kata/574b3b1599d8f897470018f6
*/
#include <iostream>

int getRealFloor(int f) {
    if (f > 0 && f < 13) 
        return f - 1;
    else if (f > 13)
        return f - 2 ;
    else return f;
}

int main () {
    for (int i = -5; i<20; i++) {
        std::cout << i << " -> " << getRealFloor(i) << std::endl;
    }
    return 0;
}