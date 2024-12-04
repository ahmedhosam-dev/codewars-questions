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