#include "solution.h"
#include <stdio.h>

int main(int argc, char** argv){
    int inputa[] = {7};
    vector<int> a(inputa, inputa + 1);
    int inputb[] = {1,2,3,4,5,6,8};
    vector<int> b(inputb, inputb + 7);
    Solution test;
    cout << test.findMedianSortedArrays(a, b) << endl;
    return 0;
}
