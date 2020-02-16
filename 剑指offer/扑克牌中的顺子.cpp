// https://leetcode-cn.com/problems/bu-ke-pai-zhong-de-shun-zi-lcof/
class Solution {
public:
    bool isStraight(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;
        int i = 0;
        while(nums[i++] == 0) count++;
        i--;
        while(i<4){
            if(nums[i+1]-nums[i] != 1){
                if(nums[i+1]-nums[i] > 1){ 
                    count -= (nums[i+1]-nums[i]-1);
                    if(count < 0) return false;
                } else return false;
            }
            i++;
        }
        return true;
    }
};