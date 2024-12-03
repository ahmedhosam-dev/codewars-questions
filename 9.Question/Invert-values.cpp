#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> invert(vector<int> values)
{
	for (int &val: values)	
		val = -val;
    return values;
}