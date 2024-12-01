#include <iostream>
#include <string>

using namespace std;

string reverseString (string str ) {
    string newStr = "";
    
    for (int i = str.length() - 1; i >= 0; i--)
        newStr += str[i];

    return newStr;
}

int main() {
    cout << reverseString("hello") << endl;

    return 0;
}