#include <iostream>
#include <vector>
#include <algorithm>    // std::sort

using namespace std;
class Solution {
    public:
        string reverseString(string s) {
            if (s.size() == 0) return s;

            char* temp = new char[s.size()];
            char* pointer = temp;

            for (std::string::reverse_iterator rit = s.rbegin(); rit != s.rend(); ++ rit) {
                *pointer = *rit;
                pointer ++;

            }

            return std::string(temp);
        }
};
