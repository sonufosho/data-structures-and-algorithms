#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int solution(vector<int>& nums) {
    int maxSum = INT_MIN;

    for (int i = 0; i < nums.size(); i++) {
        int currSum = 0;
        for (int j = i; j < nums.size(); j++) {
            currSum += nums[j];
            maxSum = max(maxSum, currSum);
        }
    }

    return maxSum;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << solution(nums);

    return 0;
}