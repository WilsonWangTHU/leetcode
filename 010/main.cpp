#include "solution.h"
#include <iostream>
#include <cmath>

int main() {
    Solution test;
    std::cout << test.isMatch("aa","aa") << std::endl;
    std::cout << test.isMatch("aa", "a*") << std::endl;
    std::cout << test.isMatch("aa", ".*") << std::endl;
    std::cout << test.isMatch("ab", ".*") << std::endl;
    std::cout << test.isMatch("aab", "c*a*b") << std::endl;
    std::cout << test.isMatch("aab", "c*.*b") << std::endl;
    return 0;
}
