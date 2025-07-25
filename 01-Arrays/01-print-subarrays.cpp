#include <iostream>
#include <vector>
using namespace std;

void solution(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i; j < nums.size(); j++) {
            for (int k = i; k <= j; k++) {
              cout << nums[k];
            }
            cout << '\t';
        }
        cout << '\n'
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    solution(nums);

    return 0;
}