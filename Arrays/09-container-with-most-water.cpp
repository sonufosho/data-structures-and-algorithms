#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> heights) {
    int maxWater = 0;
    int start = 0;
    int end = heights.size() - 1;

    while (start < end) {
        int width = end - start;
        int height = min(heights[end], heights[start]);
        int currWater = width * height;
        maxWater = max(maxWater, currWater);

        if (heights[start] < heights[end]) {
            start++;
        } else {
            end--;
        }
    }

    return maxWater;
}

int main() {
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << solution(heights);

    return 0;
}