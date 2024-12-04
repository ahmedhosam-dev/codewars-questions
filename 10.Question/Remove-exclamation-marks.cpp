#include <iostream>

using namespace std;

#include <string>

string removeExclamationMarks(string str){
    string newStr = "";
    for(char c: str) {
        if (c != '!'){
            newStr += c;
        }
    }
    return newStr;
}
