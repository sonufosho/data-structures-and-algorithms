#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        int frequency = 0;

        for (int j = i; j< nums.size(); j++) {
            if (nums[i] == nums[j]) {
                frequency++;
            }

            if(frequency > nums.size() / 2) {
                return nums[i];
            }
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 1};
    cout << solution(nums);

    return 0;
}