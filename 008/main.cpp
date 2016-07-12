#include "solution.h"
#include <iostream>

int main() {
    Solution test;
    /*
    std::cout << test.myAtoi("1234") << std::endl;  // "0"
    std::cout << test.myAtoi("    1234") << std::endl;  // "0"
    std::cout << test.myAtoi("    1234sdaq") << std::endl;  // "0"
    std::cout << test.myAtoi("    +1234sdaq") << std::endl;  // "0"
    std::cout << test.myAtoi("    -1234sdaq") << std::endl;  // "0"
    std::cout << test.myAtoi("  sda  -1234sdaq") << std::endl;  // "0"
    std::cout << test.myAtoi("  sda") << std::endl;  // "0"
    std::cout << test.myAtoi("  ") << std::endl;  // "0"
    */
    std::cout << test.myAtoi("2147483647") << std::endl;  // "0"
    std::cout << test.myAtoi("  2147483647as") << std::endl;  // "0"
    std::cout << test.myAtoi("2147483648") << std::endl;  // "0"
    std::cout << test.myAtoi("2147483649") << std::endl;  // "0"
    std::cout << test.myAtoi("3147483649") << std::endl;  // "0"
    std::cout << test.myAtoi("22147483649") << std::endl;  // "0"
    std::cout << test.myAtoi("-2147483648") << std::endl;  // "0"
    std::cout << test.myAtoi("-2147483649") << std::endl;  // "0"
    std::cout << test.myAtoi("-12147483649") << std::endl;  // "0"
    std::cout << test.myAtoi("-2247483649") << std::endl;  // "0"
    return 0;
}
