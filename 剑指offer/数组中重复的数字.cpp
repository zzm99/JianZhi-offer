// https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof/
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(mp[nums[i]]) return nums[i];
            else mp[nums[i]] = 1;
        }
        return -1;
    }
};