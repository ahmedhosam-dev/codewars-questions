/** Description:
 * The function is not returning the correct values. Can you figure out why?
 * Example (Input --> Output ):
 * 3 --> "Earth"
 * URL: https://www.codewars.com/kata/515e188a311df01cba000003
*/

/** ORIGIN CODE
 * #include <string>
 *
 * std::string get_planet_name(int id)
 * {
 *    std::string name;
 *    switch (id) {
 *    case 1: name = "Mercury";
 *    case 2: name = "Venus";
 *    case 3: name = "Earth";
 *    case 4: name = "Mars";
 *    case 5: name = "Jupiter";
 *    case 6: name = "Saturn";
 *    case 7: name = "Uranus";
 *    case 8: name = "Neptune";
 *    }
 *    return name;
 * }
 */

// Solved code
#include <string>

std::string get_planet_name(int id)
{
    std::string name;
    switch (id) {
    case 1: name = "Mercury"; break;
    case 2: name = "Venus"; break;
    case 3: name = "Earth"; break;
    case 4: name = "Mars"; break;
    case 5: name = "Jupiter"; break;
    case 6: name = "Saturn"; break;
    case 7: name = "Uranus"; break;
    case 8: name = "Neptune"; break;
    }
    return name;
}