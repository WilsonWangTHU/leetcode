#include <iostream>
// #include <vector>

using namespace std;
class Solution {
    public:
        int reverse(int x) {
            // x is the input of the problem, int is from -2147483648 ~ +2147483647
            // The idea is simple: get each digit and then check for validation
            static int posOverflowdigit[10] = {2, 1, 4, 7, 4, 8, 3, 6, 4, 7};
            static int negOverflowdigit[10] = {2, 1, 4, 7, 4, 8, 3, 6, 4, 8};

            int digit[10];
            int count = 0;
            bool positive = 0;
            int* overflowdigit = NULL;
            if (x > 0) {
                positive = 1;
                overflowdigit = posOverflowdigit;
            } else {
                if (x == -2147483648) return 0;
                x = -x;
                overflowdigit = negOverflowdigit;
            }


            // get the digit
            while (x >= 10) {
                digit[count] = x % 10;
                x = (x - digit[count]) / 10; 
                count ++;
            } digit[count] = x; // the last digit

            // the validation
            if (count == 9) {
                for (int idigit = 0; idigit <= count; idigit ++) {
                    if (overflowdigit[idigit] > digit[idigit]) {
                        break;
                    } else {
                        if (overflowdigit[idigit] < digit[idigit]) return 0;
                    }
                }
            }

            // the output
            int output = 0;
            int* digitPointer = digit + count;
            for (int iPower = 1; digitPointer - digit >= 0; iPower *= 10) {
                output += (*digitPointer) * iPower;
                digitPointer --;
            }
            
            return output * (2 * (positive) - 1);
        }
};
