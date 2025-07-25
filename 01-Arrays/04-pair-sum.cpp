#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int solution(vector<int>& nums, target) {
    vector<int> ans;
    int start = 0;
    int end = nums.size() - 1;

    while (start < end) {
        int sum = nums[start] + nums[end];

        if (sum < target) {
            start++;
        } else if (sum > target) {
          end--;
        } else if (sum == target) {
          ans.push_back(start);
          ans.push_back(end);
          return ans;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    vector<int> ans = solution(nums, 13);
    cout << ans[0] << ', ' << ans[1];

    return 0;
}