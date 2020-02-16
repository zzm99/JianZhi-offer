// https://leetcode-cn.com/problems/gu-piao-de-zui-da-li-run-lcof/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0) return 0;
        int n = prices.size();
        int curmax = prices[n-1];
        int money = 0;
        for(int i=n-2; i>=0; i--){
            money = max(money, curmax-prices[i]);
            curmax = max(curmax, prices[i]);
        }
        return money;
    }
};