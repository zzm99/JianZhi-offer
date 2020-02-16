// https://leetcode-cn.com/problems/nge-tou-zi-de-dian-shu-lcof/
class Solution {
public:
    vector<double> twoSum(int n) {
        vector<vector<double>> dp(1, vector<double>(6, 1));
        for(int i=1; i<n; i++){
            int l = 5*i + 6;
            dp.push_back(vector<double>(l, 0));
            for(int j=0; j<l; j++){
                for(int s=0; s<6; s++){
                    if(j-s >= 0 && j-s <= 5*i){
                        dp[i][j] += dp[i-1][j-s];
                    }
                }
            }
        }
        for(int i=0; i<dp[n-1].size(); i++) dp[n-1][i]/=pow(6,n);
        return dp[n-1];
    }
};