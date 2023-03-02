#include <bits/stdc++.h>
using namespace std;

// Time Complexity --> O(n)
// Space Complexity -->  O(1)

int maxProfit(vector<int>& prices) {

    int mini = INT_MAX, maxP = 0, P = 0;
    for(int i = 0; i < prices.size(); i++)
    {
        if(prices.at(i) < mini) mini = prices.at(i);
        P = prices.at(i) - mini;
        if(P > maxP) maxP = P;
    }
    return maxP;
}

int main()
{
    vector <int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);
    return 0;
}
