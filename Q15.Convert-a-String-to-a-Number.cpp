/** Description
* We need a function that can transform a string into a number. What ways of achieving this do you know?

* Note: Don't worry, all inputs will be strings, and every string is a perfectly valid representation of an integral number.

* Examples
* "1234" --> 1234
* "605"  --> 605
* "1405" --> 1405
* "-7" --> -7
*/

#include <iostream>
#include <string>

using namespace std;

int string_to_number(const std::string& s) {
    int num = 0;
    int n = s.size();
    bool neg = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == '-'){
            neg = true;
            continue;
        }
        num = num * 10 + (int(s[i]) - 48);
    }

    return (neg) ? num * -1: num;
}

int main() {
    cout << string_to_number("-12345799") << endl;
    return 0;
}