#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size();
    int minBuy = prices[0],maxSell = 0, maxDiff = 0;
    for (int i=1;i<n;++i){
      if (prices[i] <= minBuy) {
        minBuy = prices[i];
        maxSell = 0;
      } else {
        if (prices[i] >= maxSell){
            maxSell = prices[i];
            maxDiff = max(maxDiff,maxSell - minBuy);
        }
      }
    }
    return maxDiff;
}