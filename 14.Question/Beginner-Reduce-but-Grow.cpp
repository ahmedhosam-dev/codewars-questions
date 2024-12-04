#include <iostream>
#include <vector>

using namespace std;

int grow(std::vector<int> nums) {
    int result;
    for (auto& num: nums)
        result *= num;

    return result;
}