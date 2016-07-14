#include <iostream>
// #include <vector>
#include <stdlib.h>     /* abs */
#include <cmath>

using namespace std;
class Solution {
    public:
        bool isPalindrome(int x) {
            // the overflow negative ones, and the negative ones
            // if (x == -2147483648) return false;
            if (x < 0) return false;

            /*
            while(x > 9) {
                // the last digit and the first digit
                if ((x % 10) == floor(x / pow(10, floor(log10(x))))) {
                    // update x
                    // TODO: WHAT ABOUT 00000?
                    x = x - (x % 10) * pow(10, floor(log10(x)));
                    x = (x - (x % 10)) / 10;
                } else return false;
            }
            */



            int origin = x;
            int reverse = 0;
            while(x) {
                reverse = reverse * 10 + (x % 10);
                x = (x - (x % 10)) / 10;
            }

            if (origin == reverse) return true;
            else return false;
        }
};
