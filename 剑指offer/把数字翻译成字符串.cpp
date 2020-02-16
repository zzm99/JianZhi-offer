// https://leetcode-cn.com/problems/ba-shu-zi-fan-yi-cheng-zi-fu-chuan-lcof/
class Solution {
public:
    int helper(string str, int pos){
        int n = str.size();
        if(pos == n) return 1;
        if(pos == n-1 || str[pos] == '0' || str.substr(pos, 2) > "25")
            return helper(str, pos+1);
        return helper(str, pos+1) + helper(str, pos+2);
    }
    int translateNum(int num) {
        string str = to_string(num);
        return helper(str, 0);
    }
};