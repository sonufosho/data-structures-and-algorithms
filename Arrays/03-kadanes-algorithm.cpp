#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int solution(vector<int>& nums) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        currSum += nums[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0) {
            currSum = 0;
        }
    }

    return maxSum;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << solution(nums);

    return 0;
}