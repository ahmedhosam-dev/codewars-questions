/** Description:
 * Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives.

 * [1, 2, 3, 4, 5] --> [-1, -2, -3, -4, -5]
 * [1, -2, 3, -4, 5] --> [-1, 2, -3, 4, -5]
 * [] --> []
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> invert(vector<int> values)
{
	for (int &val: values)	
		val = -val;
    return values;
}