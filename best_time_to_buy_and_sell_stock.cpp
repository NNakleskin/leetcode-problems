/*
 You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int res = 0;
        for(auto elem: prices){
            res = max(res, elem - min_price);
            min_price = min(elem, min_price);
        }
        return res;
    }
};
