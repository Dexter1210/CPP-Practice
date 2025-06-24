#include <iostream>
using namespace std;

// the idea is to buy at the lowest price and sell at the highest price
// we keep track of the lowest price and the highest price
// we return the difference between the highest price and the lowest price
int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    int bestBuy = prices[0];

    for(int i=1; i<prices.size(); i++){
        bestBuy = min(bestBuy, prices[i]);
        if(prices[i] > bestBuy) {
            maxProfit = max(maxProfit, (prices[i]-bestBuy));
        }
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProfit(prices) << endl;
    return 0;
}
