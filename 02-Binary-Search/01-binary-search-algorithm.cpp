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
        } else if (nums[mid] < tag) {
            start = mid + 1;
        } else if (nums[mid] > tag) {
            end = mid - 1;
        }
    }
     

    return -1;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << solution(nums, 8);

    return 0;
}