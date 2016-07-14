#include <iostream>
// #include <vector>
#include <stdlib.h>     /* abs */
#include <cmath>

using namespace std;
class Solution {
    public:    
        bool isMatchRecursion(string s, string p) {
            // the p is the boss. Always satisfy the p
            // '.' Matches any single character.
            // '*' Matches zero or more of the preceding element.
            if (p.empty()) return s.empty();

            if (p[1] == '*') {
                // in this case, we might do group matching
                if (isMatchRecursion(s, p.substr(2))) return true;  // this group is useless
                else if (s.empty() != true &&  // take one char out and continues
                        (s[0] == p[0] || p[0] == '.') && 
                        isMatchRecursion(s.substr(1), p)) return true;  
                else return false;
            } else {
                // in this case, we do single char matching. And it is strict
                if (s.empty() != true &&  // take one char out and continues
                        (s[0] == p[0] || p[0] == '.') && 
                        isMatchRecursion(s.substr(1), p.substr(1))) return true;  
            }

            return false;
        }

};
