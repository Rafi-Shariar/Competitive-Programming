#include <iostream>
#include <string>

int main() {
    std::string s = "VISIT http://topcoder.com/";

    // Use substr with a single argument to extract from startPos to the end of the string
    std::string tmp = s.substr(6);

    std::cout << "Result: " << tmp << std::endl;

    return 0;
}
