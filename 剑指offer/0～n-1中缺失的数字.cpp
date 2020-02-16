// https://leetcode-cn.com/problems/que-shi-de-shu-zi-lcof/submissions/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> tmp(nums.size()+1);
        for(auto& n: nums) tmp[n]++;
        for(int i=0; i<tmp.size(); i++) {
            if(tmp[i] == 0) return i;
        }
        return -1;
    }
};