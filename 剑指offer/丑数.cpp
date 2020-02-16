// https://leetcode-cn.com/problems/chou-shu-lcof/
class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(1, 1);
        int i2 = 0, i3 = 0, i5 = 0, s = 1;
        while(s++<n){
            int tmp = min(2*dp[i2], min(3*dp[i3], 5*dp[i5]));
            i2 += tmp == 2*dp[i2];
            i3 += tmp == 3*dp[i3];
            i5 += tmp == 5*dp[i5];
            dp.push_back(tmp);
        }
        return dp.back();
    }
};