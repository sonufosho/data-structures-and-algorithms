#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> nums) {
    int start = 1;
    int end = nums.size() - 2;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1]) {
            return mid;
        }

        if (nums[mid - 1] < nums[mid]) {
            start = mid + 1;
        } else if (nums[mid] < nums[mid + 1]) {
            end = mid - 1;
        }
    }     

    return -1;
}

int main() {
    vector<int> nums = {0, 3, 8, 9, 5, 2};
    cout << solution(nums);

    return 0;
}