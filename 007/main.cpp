#include "solution.h"
#include <iostream>

int main() {
    Solution test;
    
    std::cout << test.reverse(12345) << std::endl;  // ""
    std::cout << test.reverse(123450) << std::endl;  // ""
    std::cout << test.reverse(1234500) << std::endl;  // ""
    std::cout << test.reverse(-1234500) << std::endl;  // ""
    std::cout << test.reverse(-1234500) << std::endl;  // ""
    std::cout << test.reverse(-1234500) << std::endl;  // ""
    
    std::cout << test.reverse(1000000003) << std::endl;  // "0"
    std::cout << test.reverse(-1000000003) << std::endl;  // "0"
    std::cout << test.reverse(2147483647) << std::endl;  // "0"
    std::cout << test.reverse(-2147483648) << std::endl;  // "0"
    return 0;
}
