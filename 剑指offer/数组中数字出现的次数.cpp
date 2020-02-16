// https://leetcode-cn.com/problems/shu-zu-zhong-shu-zi-chu-xian-de-ci-shu-lcof/
class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        vector<int> ret(2, 0);
        int temp = 0;
        for(auto& i: nums) temp ^= i;
        temp = ~(temp-1) & temp; // get the lowerest 1' bit
        for(auto& i: nums){
            if((i & temp) == 0) ret[0] ^= i;
            else ret[1] ^= i;
        }
        return ret;
    }
};