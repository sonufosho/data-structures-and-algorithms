#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> nums, int n, int m, int maxAllowedPages) {
    int student = 1;
    int pages = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] > maxAllowedPages) {
            return false;
        }

        if (pages + nums[i] <= maxAllowedPages) {
            pages += nums[i];
        } else {
            student++;
            pages = nums[i];
        }
    }

    return student > m ? false : true;
}

int solution(vector<int> nums, int n, int m) {
    if (m > n) return -1;

    int ans = -1;
    int start = 0;
    int end = 0;

    for (int i = 0; i < nums.size(); i++) {
        end += nums[i];
    }

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (isValid(nums, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }


    return ans;
}

int main() {
    vector<int> nums = {2, 1, 3, 4};
    int n = 4;
    int m = 2;
    cout << solution(nums, n, m);

    return 0;
}