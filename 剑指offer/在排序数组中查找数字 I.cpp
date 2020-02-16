// https://leetcode-cn.com/problems/zai-pai-xu-shu-zu-zhong-cha-zhao-shu-zi-lcof/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int count = 0;
        for(auto& i: nums){
            if(i > target) break;
            if(i == target) count++;
        }
        return count;
    }
};