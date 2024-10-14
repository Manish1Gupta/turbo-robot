#include <iostream>
#include <vector>
#include <climits> // For INT_MAX
using namespace std;

// Function to calculate the maximum profit
int maxProfit(const vector<int>& prices) {
    int minPrice = INT_MAX;  // Initialize the minimum price to a very large value
    int maxProfit = 0;       // Initialize maximum profit to 0

    // Iterate over all prices
    for (int price : prices) {
        // If the current price is less than the minimum price so far, update minPrice
        if (price < minPrice) {
            minPrice = price;
        }
        // Calculate the profit if we sell at the current price and compare it with maxProfit
        else {
            maxProfit = max(maxProfit, price - minPrice);
        }
    }

    return maxProfit;
}

int main() {
    // Example: Stock prices for each day
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    // Calculate and display the maximum profit
    int profit = maxProfit(prices);
    if (profit > 0) {
        cout << "Maximum profit: " << profit << endl;
    } else {
        cout << "No profit can be made." << endl;
    }

    return 0;
}
