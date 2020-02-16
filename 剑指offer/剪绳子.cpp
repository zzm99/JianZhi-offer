// https://leetcode-cn.com/problems/jian-sheng-zi-lcof/
class Solution {
public:
    int cuttingRope(int n) {
        if(n <= 0) return 0;
        if(n == 1 || n == 2) return 1;
        if(n == 3) return 2;
        int x = n % 3, y = n / 3;
        if(x == 0) return pow(3, y);
        if(x == 1) return pow(3, y-1) * 4;
        if(x == 2) return pow(3, y) * 2;
        return -1;
    }
};