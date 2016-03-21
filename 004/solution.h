#include <iostream>
#include <string>
#include <vector>
#include <algorithm>    // std::find
using namespace std;


class Solution {
public:
    double findMedianSortedArrays(
            vector<int>& nums1, vector<int>& nums2) {
        int sizeS1 = int(nums1.size());
        int sizeS2 = int(nums2.size());

        // check the length of the array
        //
        if (sizeS1 == 0) return nums2[sizeS2 / 2];
        if (sizeS2 == 0) return nums1[sizeS1 / 2];

        // check the order of the element
        if (nums1[0] > nums1[sizeS1 - 1]) 
            reverse(nums1.begin(), nums1.end());
        if (nums2[0] > nums2[sizeS2 - 1]) 
            reverse(nums2.begin(), nums2.end());

        int numElm = sizeS1 + sizeS2;
        int halfNum = (numElm + 1) / 2;

        // the initializing of parameters
        int endS1 = sizeS1 - 1, startS1 = 0;
        int endS2 = sizeS2 - 1, startS2 = 0;
        int posS1 = 0, posS2 = 0;
        int biggerNum = 0, smallerNum = 0;

        for (;;) {

            if (endS1 - startS1 <= 1 && endS2 - startS2 <= 1) {
                // all the number is now sorted, only four ele left
                //
                vector<int> final;
                final.push_back(nums1[endS1]);
                final.push_back(nums2[endS2]);
                final.push_back(nums1[startS1]);
                final.push_back(nums2[startS2]);

                std::sort(final.begin(), final.end());
                cout << final[0] << final[1] << final[2] << final[3] << endl;
                cout << smallerNum << endl;
                return final[halfNum - smallerNum - 1];
            }
            
            posS1 = (endS1 + startS1 + 1) / 2;  // new positions
            posS2 = (endS2 + startS2 + 1) / 2;

            if (nums2[posS2] > nums1[posS1]) {
                // take out the irrelevant part
                //
                if (smallerNum + posS1 - startS1 < halfNum) {
                    smallerNum += (posS1 - startS1);
                    startS1 = posS1;
                } else if (smallerNum + posS1 - startS1 == halfNum)
                    return nums1[posS1];

                if (biggerNum + endS2 - posS2 < halfNum) {
                    biggerNum += (endS2 - posS2);
                    endS2 = posS2;
                } else if (biggerNum + endS2 - posS2 == halfNum)
                    return nums2[posS2];
            } else {
                // take out the A part, simply mirror operation.
                //
                if (smallerNum + posS2 - startS2 < halfNum) {
                    smallerNum += (posS2 - startS2);
                    startS2 = posS2;
                } else if (smallerNum + posS2 - startS2 == halfNum)
                    return nums2[posS2];

                if (biggerNum + endS1 - posS1 < halfNum) {
                    biggerNum += (endS1 - posS1);
                    endS1 = posS1;
                } else if (biggerNum + endS1 - posS1 == halfNum)
                    return nums1[posS1];
            }
        }

        return 0;
    }
};
