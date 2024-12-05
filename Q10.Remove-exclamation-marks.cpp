/** Description:
 * Write function RemoveExclamationMarks which removes all exclamation marks from a given string.
 */

#include <iostream>
#include <string>

using namespace std;

string removeExclamationMarks(string str){
    string newStr = "";
    for(char c: str) {
        if (c != '!'){
            newStr += c;
        }
    }
    return newStr;
}
