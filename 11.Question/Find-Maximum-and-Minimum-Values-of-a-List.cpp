#include <iostream>
#include <vector>

using namespace std;

int min(vector<int> list){
    int min = list.at(0);

    for (int value: list)
        if (min > value)
            min = value;
    
    return min;
}

int max(vector<int> list){
    int max = list.at(0);

    for (int value: list)
        if (max < value)
            max = value;
    
    return max;
}