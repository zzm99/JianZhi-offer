// https://leetcode-cn.com/problems/he-wei-sde-liang-ge-shu-zi-lcof/submissions/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(mp[target-nums[i]]){
                ret.push_back(nums[i]);
                ret.push_back(target-nums[i]);
                break;
            }else{
                mp[nums[i]] = 1;
            }
        }
        return ret;
    }
};