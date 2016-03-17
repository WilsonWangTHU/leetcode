#include "solution.h"

int main() {
    vector<int> test;

    // test data
    test.push_back(5);
    test.push_back(75);
    test.push_back(25);
    Solution theSol;
    theSol.twoSum(test, 100);
    return 0;
}
