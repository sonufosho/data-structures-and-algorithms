#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> nums, int tag) {
    int start = 0;
    int end = nums.size() - 1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == tag) {
            return mid;
        }

        if (nums[start] <= nums[mid]) {
            if (nums[start] <= tag && nums[mid] >= tag) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else if (nums[mid] <= nums[end]) {
            if (nums[mid] <= tag && nums[end] >= tag) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
     

    return -1;
}

int main() {
    vector<int> nums = {6, 7, 0, 1, 2, 3, 4, 5};
    cout << solution(nums, 0);

    return 0;
}