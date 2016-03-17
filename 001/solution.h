#include <iostream>
#include <vector>
#include <algorithm>    // std::sort

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& input, int target) {
        vector<int> result;
        // sort the vector for better speed
        vector<int> nums(input); 
        sort(nums.begin(), nums.end());

        // calculate the results
        int numSize = int(nums.size());
        int num2Find = 0;
        int iEnd = 0, iStart = 0, iTest = 0;
        bool success = false;

        for (int iHead = 0; iHead < numSize; iHead ++) {
            iEnd = numSize - 1;
            iStart = iHead + 1;
            num2Find = target - nums[iHead];

            // now find it if it is possible
            for (;;) {
                // we test the middle point of the answer
                iTest = (iEnd + iStart + 1) / 2;
                if (iStart >= iEnd - 1) {
                    // reaching the end
                    if (nums[iStart] == num2Find) {
                        int startPos = std::find(
                                input.begin(),
                                input.end(),
                                nums[iHead]) - input.begin();
                        result.push_back(startPos); 
                        // it is important, avoid finding the same element!
                        if (nums[iHead] == nums[iStart]) 
                            startPos = std::find(input.begin() + startPos + 1,
                                        input.end(),
                                        nums[iStart]) - input.begin();
                        else
                            startPos = std::find(input.begin(),
                                    input.end(),
                                    nums[iStart]) - input.begin();
                        result.push_back(startPos);
                        success = true;
                        break;
                    }
                    if (nums[iEnd] == num2Find) {
                        int startPos = std::find(
                                input.begin(),
                                input.end(),
                                nums[iHead]) - input.begin();
                        result.push_back(startPos); 
                        // it is important, avoid finding the same element!
                        if (nums[iHead] == nums[iEnd]) 
                            startPos = int(
                                    std::find(input.begin() + startPos + 1,
                                        input.end(),
                                        nums[iEnd]) - input.begin());
                        else
                            startPos = int(std::find(input.begin(),
                                    input.end(),
                                    nums[iEnd]) - input.begin());
                        result.push_back(startPos);
                        success = true;
                        break;
                    }
                    break;
                }

                if (nums[iTest] > num2Find) {
                    iEnd = iTest;
                } else if (nums[iTest] < num2Find) {
                    iStart = iTest;
                } else {
                    // target accquired
                    int startPos = std::find(
                                        input.begin(),
                                        input.end(),
                                        nums[iHead]) - input.begin();
                    result.push_back(startPos); 
                    // it is important, avoid finding the same element!
                    if (nums[iHead] == nums[iTest]) 
                        startPos = int(
                                std::find(input.begin() + startPos + 1,
                                    input.end(),
                                    nums[iTest]) - input.begin());
                    else
                        startPos = int(std::find(input.begin(),
                                    input.end(),
                                    nums[iTest]) - input.begin());
                    result.push_back(startPos);
                    success = true;
                    break;
                }
            }
            if (success) break;
        }


        cout << "result is " << result[0] << " " <<result[1];
        return result;
    }
};
