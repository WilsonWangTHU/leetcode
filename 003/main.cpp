#include "solution.h"
#include <stdio.h>

int main(int argc, char** argv){
    string test = string(argv[1]);
    Solution solTest;
    cout << solTest.lengthOfLongestSubstring(test) << endl;
    return 0;
}
