#include <iostream>
#include <string>
#include <vector>
#include <algorithm>    // std::find
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // the complexity should be 0(n), and if we use
        // divide-and-conquer, it should be 0(nlogn)
        //
        vector<char> group;
        uint maxLength = 0;

        for (int iPos = 0; iPos < int(s.length()); iPos ++) {
            vector<char>::iterator it = 
                find(group.begin(), group.end(), s[iPos]);

            if (it == group.end()) {
                // nothing find, a new one
                group.push_back(s[iPos]);

                // check for maximum
                if (group.size() > maxLength) 
                    maxLength = group.size(), cout << maxLength;
            
            } else {
                // old one found!
                group.erase(group.begin(), it + 1);
                group.push_back(s[iPos]);
            }
            
            cout << group.data() << endl;
        }
        
        return (int)maxLength;
    }
};
