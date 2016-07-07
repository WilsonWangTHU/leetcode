#include <iostream>
// #include <vector>

using namespace std;
class Solution {
    public:
        string convert(string s, int numRows) {
            // some assertions
            int stringSize = int(s.size());
            if (s.size() <= 1 || numRows <= 1) return s;
            if (numRows <= 0) return "";

            // now, calculate how many element for each row
            // one batch containes 2n - 1
            int residue = stringSize % (2 * numRows - 2);
            int numBatch = (stringSize - residue) / (2 * numRows - 2);

            // result and moving pointer
            char* result = new char [s.size()];
            char* pointer = result;

            // get everthing ready row by row
            for (int iRow = 1; iRow <= numRows; iRow ++) {

                if (iRow == 1 || iRow == numRows) {  // each batch has one ele
                    for (int iEle = 1; iEle <= numBatch; iEle ++) {
                        *pointer = s[(2 * numRows - 2) * (iEle - 1) + iRow - 1];
                        pointer ++;
                    } 
                    if (residue >= iRow) {
                        *pointer = s[s.size() - residue + iRow - 1];
                        pointer ++;
                    }
                }

                else { // each batch has two ele
                
                    int former = iRow;
                    int latter = 2 * numRows - former;
                    for (int iEle = 1; iEle <= numBatch; iEle ++) {
                        *pointer = s[(2 * numRows - 2) * (iEle - 1) + former - 1];
                        pointer ++;
                        *pointer = s[(2 * numRows - 2) * (iEle - 1) + latter - 1];
                        pointer ++;
                    }
                    if (residue >= former) {
                        *pointer = s[s.size() - residue + former - 1];
                        pointer ++;
                    }
                    if (residue >= latter) {
                        *pointer = s[s.size() - residue + latter - 1];
                        pointer ++;
                    }
                }
            }

            return string(result);
        }
};
