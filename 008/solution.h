#include <iostream>
// #include <vector>
#include <stdlib.h>     /* abs */

using namespace std;
class Solution {
    public:
        int myAtoi(string str) {
            static int max = 2147483647;
            static int min = -2147483648;
            static int baseTen = 214748364;
            int overflowValue = max;
            int length = str.size();
            int strCounter = 0;
            // get rid of the whitespace
            while (strCounter < length && str[strCounter] == " "[0]) strCounter ++;
            if (strCounter == length) return 0;  // not valid input 1.:  all white space

            int output = 0;
            
            // check for minus mark or positive mark
            int positive = 1;
            if (str[strCounter] == "+"[0]) {
                positive = 1;
                strCounter ++;
                overflowValue = max;
            } else if (str[strCounter] == "-"[0]){
                positive = -1;
                strCounter ++;
                overflowValue = min;
            }

            // input available, check for 1-0
            int digitCounter = 0;
            while(strCounter < length && str[strCounter] - "0"[0] >= 0 && str[strCounter] - "9"[0] <= 0) {
                //validation check
                
                if (digitCounter == 9) {
                    // now it is dangerous, 9 digits are in position
                    if (abs(output) > baseTen) return overflowValue;
                    else if (abs(output) == baseTen) {
                        if ((str[strCounter] - "0"[0] > 7 && positive == 1) ||
                                (str[strCounter] - "0"[0] > 8 && positive == -1))
                            return overflowValue;
                    }
                } else if (digitCounter >= 10) return overflowValue;  //
                
                output = output * 10 + (str[strCounter] - "0"[0]) * positive;
                //std::cout << output << std::endl;
                strCounter ++;
                digitCounter ++;
            }
            return output;
        };
};
