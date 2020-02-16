// https://leetcode-cn.com/problems/qing-wa-tiao-tai-jie-wen-ti-lcof/
class Solution {
public:
    vector<int> dp;
    const int MOD = 1e9+7;
    int numWays(int n) {
        dp.resize(105);
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        return help(n);
    }
    int help(int n){
        if(dp[n]) return dp[n];
        return dp[n] = (help(n-1) + help(n-2)) % MOD;
    }
};