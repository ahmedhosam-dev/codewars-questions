/** Description:
 * Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.
 * The output should be two capital letters with a dot separating them.
 * It should look like this:
 * Sam Harris => S.H
 * patrick feeney => P.F
 * URL: https://www.codewars.com/kata/57eadb7ecd143f4c9c0000a3
*/

#include <string>

std::string abbrevName(std::string name)
{
    std::string abName = "";
    abName.push_back(toupper(name.at(0)));

    int i = 0;
    for (; i <= name.length(); i++) {
        if (name[i] == ' ')
            break;
    }
    abName.push_back('.');
    abName.push_back(toupper(name.at(i + 1)));
    return abName; 
}