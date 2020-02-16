// https://leetcode-cn.com/problems/shu-zu-zhong-chu-xian-ci-shu-chao-guo-yi-ban-de-shu-zi-lcof/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cur = 0, count = 0;
        for(int i=0; i<nums.size(); i++){
            if(count == 0){
                cur = nums[i]; count = 1;
            }else{
                if(cur == nums[i]) count++;
                else count--;
            }
        }
        return cur;
    }
};