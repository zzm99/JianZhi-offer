// https://leetcode-cn.com/problems/lian-xu-zi-shu-zu-de-zui-da-he-lcof/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = 0;
        int maxx = nums[0];
        for(int i=0; i<nums.size(); i++){
            cur += nums[i];
            maxx = max(maxx, cur);
            if(cur < 0) cur = 0;
        }
        return maxx;
    }
};