#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> prices) {
    int maxProfit = 0;
    int bestBuy = prices[0];

    for (int i = 0; i < prices.size(); i++) {
        bestBuy = min(bestBuy, prices[i]);
        maxProfit = max(maxProfit, prices[i] - bestBuy);
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << solution(prices);

    return 0;
}