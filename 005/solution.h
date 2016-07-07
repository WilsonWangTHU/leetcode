#include <iostream>
#include <vector>
#include <algorithm>    // std::sort

using namespace std;
class Solution {
    public:
        string longestPalindrome(string s) {

            if (s.size() <= 1) return s;
            int maxLength = -1;
            int searchStart = 0, searchEnd = 0;
            int maxStart = 0, maxEnd = 0;
            // find the head and tail.
            for (int middle = 0; middle < s.size(); middle ++) {

                // middle is the center of all
                searchStart = middle;
                searchEnd = middle;
                
                // std::cout << "Move: " << s[searchStart] << " " << s[searchEnd] << std::endl;
                // the duplicate ones, only consider moving searchEnd
                while(searchStart - 1 >= 0 && s[searchStart - 1] == s[middle]) {
                    searchStart --;
                }

                while(searchEnd + 1 < s.size() && s[searchEnd + 1] == s[middle]) {
                    searchEnd ++;
                }

                // std::cout << "Move: " << s[searchStart] << " " << s[searchEnd] << std::endl;
                middle = searchEnd;  // next time the middle starts from the end
                                     // of the duplicate ones


                // now, extend the range, if it is still valid
                while (searchEnd + 1 < s.size() && searchStart - 1 >= 0
                        && s[searchEnd + 1] == s[searchStart -1]) {
                    searchEnd ++;
                    searchStart --;
                    // std::cout << "temp: " << s.substr(maxStart, maxEnd) << std::endl;
                }

                // record the max and min
                if (searchEnd - searchStart < maxLength) continue;

                maxLength = searchEnd - searchStart;
                maxStart = searchStart;
                maxEnd = searchEnd;
                //std::cout << s.substr(maxStart, maxEnd - 1) << std::endl;
            
            }

            return s.substr(maxStart, maxLength + 1);
        }
};
