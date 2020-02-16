// https://leetcode-cn.com/problems/shu-zhi-de-zheng-shu-ci-fang-lcof/
class Solution {
public:
    double myPow(double x, int n) {
        double num = 1;
        long N = n;
        if(N < 0) {
            N = -N;
            x = 1/x;
        }
        while(N > 0){
            if(N % 2 == 1) num = num * x;
            N >>= 1;
            x *= x;
        }
        return num;
    }
};