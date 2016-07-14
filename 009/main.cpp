#include "solution.h"
#include <iostream>
#include <cmath>

int main() {
    Solution test;
    std::cout << test.isPalindrome(11) << std::endl;
    std::cout << test.isPalindrome(121) << std::endl;
    std::cout << test.isPalindrome(2) << std::endl;
    std::cout << test.isPalindrome(123454321) << std::endl;
    std::cout << test.isPalindrome(1234554321) << std::endl;
    std::cout << test.isPalindrome(1230000321) << std::endl;
    std::cout << test.isPalindrome(1030000301) << std::endl;

    std::cout << "Negtive: ----------" << std::endl;
    std::cout << test.isPalindrome(123554321) << std::endl;
    std::cout << test.isPalindrome(-123554321) << std::endl;
    std::cout << test.isPalindrome(-2147483648) << std::endl;
    std::cout << test.isPalindrome(2147483647) << std::endl;
    std::cout << test.isPalindrome(-2147447412) << std::endl;
    std::cout << test.isPalindrome(1000021) << std::endl;
    return 0;
}
