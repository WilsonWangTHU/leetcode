#include "solution.h"
#include <iostream>

int main() {
    Solution test;
    std::cout << test.longestPalindrome("") << std::endl;  // ""
    std::cout << test.longestPalindrome("a") << std::endl;  // "a"
    std::cout << test.longestPalindrome("aaaaa") << std::endl;  // "aaaaa"
    std::cout << test.longestPalindrome("xxasdsaqwe") << std::endl;  // "asdsa"
    std::cout << test.longestPalindrome("xxadaqweswqe") << std::endl;  // "asdsa"
    std::cout << test.longestPalindrome("xxadaxwxqqwewqe") << std::endl;  // "qwewq"
    return 0;
}
