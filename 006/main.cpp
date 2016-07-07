#include "solution.h"
#include <iostream>

int main() {
    Solution test;
    std::cout << test.convert("1234567890-=", 2) << std::endl;  // ""
    std::cout << test.convert("1234567890-=", 1) << std::endl;  // ""
    std::cout << test.convert("1234567890-=", 3) << std::endl;  // ""
    std::cout << test.convert("1234567890-=", 4) << std::endl;  // ""
    std::cout << test.convert("1234567890-=", 5) << std::endl;  // ""
    std::cout << test.convert("Apalindromeisaword,phrase,number,orothersequenceofunitsthatcanbereadthesamewayineitherdirection,withgeneralallowancesforadjustmentstopunctuationandworddividers.", 4) << std::endl;  // ""
    return 0;
}
