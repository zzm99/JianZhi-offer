// https://leetcode-cn.com/problems/fei-bo-na-qi-shu-lie-lcof/
class Solution {
public:
    vector<int> dp;
    const int MOD = 1e9+7;
    int fib(int n) {
        dp.resize(105);
        dp[0] = 0;
        dp[1] = 1;
        return help(n);
    }
    int help(int n){
        if(n == 0) return 0;
        else if(dp[n]) return dp[n];
        return dp[n] = (help(n-1) + help(n-2)) % MOD;
    }
};