// https://leetcode-cn.com/problems/er-jin-zhi-zhong-1de-ge-shu-lcof/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ret = 0;
        while(n){
            ret += n % 2;
            n >>= 1;
        }
        return ret;
    }
};