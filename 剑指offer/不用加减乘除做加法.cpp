// https://leetcode-cn.com/problems/bu-yong-jia-jian-cheng-chu-zuo-jia-fa-lcof/
class Solution {
public:
    // a + b = (a ^ b) + ((a & b) << 1)
    int add(int a, int b) {
        return do_add(a, b);
    }
    uint32_t do_add(uint32_t a, uint32_t b){
        while(a != 0){
            int c = a ^ b;
            a = ((a & b) << 1);
            b = c;
        }
        return b;
    }
};